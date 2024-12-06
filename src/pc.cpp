#include "../header/pc.h"
#include <iostream>
#include <algorithm>

using namespace std;

void PC::displayPCMenu(){
    int choice;

    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " ______________________ " << endl;
    cout << "|                      |" << endl;
    cout << "|     ____    _____    |" << endl;
    cout << "|    |  _ \\  |  ___|   |" << endl;
    cout << "|    | |_) | | |       |" << endl;
    cout << "|    |  __/  | |       |" << endl;
    cout << "|    | |     | |___    |" << endl;
    cout << "|    |_|     |_____|   |" << endl;
    cout << "|                      |" << endl;
    cout << "|______________________|" << endl;
    cout << endl;
    
    cout << "Currently owned Pokemon in storage:" << endl;

    if (player->getCaughtPokemon().empty()) {
        cout << "Your PC is empty!" << endl;
    } else {
        cout << "Pokemon in your PC:" << endl;
        for (int i=0; i< player->getCaughtPokemon().size(); i++) {
            cout << i + 1 << ". " << player->getCaughtPokemon().at(i);
            cout << endl;
        }
        cout << "Total Caught Pokemon: " << player->getCaughtPokemon().size() << endl;
    }

    cout << endl;
    cout << "(1) View Pokemon stats" << endl; // should prompt user to enter number relative to Pokemon, will print its stats
    cout << "(2) View/Edit Pokemon Team" << endl;
    cout << "(3) Go Back" << endl;
    cout << endl;

    do {
        cout << "Enter your choice: ";
        cin >> choice;
        if (!cin || choice <= 0 || choice >= 4) {
            cout << "Invalid input. Please choose a valid option." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!cin || choice <= 0 || choice >= 4);

    switch (choice) {
        case 1:
            viewPokemonStats();
            break;
        case 2:
            viewEditPokemonTeam();
            break;
        case 3:
            //return back to main menu screen
            break;
    }
}

void PC::viewPokemonStats() {
    if (player->getCaughtPokemon().empty()) {
        cout << "Your PC is empty!" << endl;
        return;
    }

    int index;
    cout << "Enter the number of the Pokemon you want to view it's stats: ";
    cin >> index;

    if (index > 0 && index <= player->getCaughtPokemon().size()) {
        player->getCaughtPokemon().at(index-1)->displayInfo();
    } else {
        cout << "Invalid selection." << endl;
        displayPCMenu();
    }
}

void PC::viewEditPokemonTeam() {
    if (player->getCaughtPokemon().empty()) {
        cout << "Your PC is empty!" << endl;
        return;
    }

    cout << "Currently owned Pokemon:" << endl;

    // Display all caught Pokemon
    for (int i = 0; i < player->getCaughtPokemon().size(); ++i) {
        cout << i + 1 << ". ";
        player->getCaughtPokemon().at(i)->displayInfo();
        cout << endl;
    }

    cout << endl;
    cout << "Select 3 Pokemon you want on your team:" << endl;
    vector<Pokemon*> selectedTeam;
    int choice;

    while (selectedTeam.size() < 3) {
        cout << "Enter the number of the Pokemon you want to add to your team (1-" << player->getCaughtPokemon().size() << "): ";
        cin >> choice;

        // Validate the input
        if (cin && choice > 0 && choice <= player->getCaughtPokemon().size()) {
            // Check if the Pokemon is already in the team
            bool alreadyInTeam = false;
            for (auto* pokemon : selectedTeam) {
                if (pokemon == player->getCaughtPokemon()[choice - 1]) {
                    alreadyInTeam = true;
                    break;
                }
            }

            if (!alreadyInTeam) {
                selectedTeam.push_back(player->getCaughtPokemon()[choice - 1]);
                cout << "Added " << player->getCaughtPokemon().at(choice - 1)->speciesToString(player->getCaughtPokemon().at(choice - 1)->getSpecies()) << " to your team." << endl;
            } else {
                cout << "This Pokemon is already in your team. Choose a different one." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a valid Pokemon number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Replace the old team with the new selected team
    for(int i=0; i<player->getTeam().size();i++){
        player->getTeam().pop_back();
    }
    for(int i=0; i<selectedTeam.size();i++){
        player->getTeam().push_back(selectedTeam.at(i));
    }

    // Display the updated team
    cout << "Your team has been replaced! Here is your new team:" << endl;
    for (int i = 0; i < player->getTeam().size(); ++i) {
        cout << i + 1 << ". ";
        player->getTeam().at(i)->displayInfo();
        cout << endl;
    }
}