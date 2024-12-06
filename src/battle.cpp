#include "../header/battle.h"
#include "../header/player.h"
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

Battle::Battle(Player* p, WildPokemon* wp) 
    : player(p), wildPokemon(wp), isPlayerTurn(true) {
    pokemon1CurrHealth = player->getTeam()[0]->calculateHP();
    pokemon2CurrHealth = player->getTeam()[1]->calculateHP();
    pokemon3CurrHealth = player->getTeam()[2]->calculateHP();
    wildPokemonCurrHealth = wp->calculateHP();
    activePokemon = player->getTeam()[0];
    activePokemonHealth = activePokemon->calculateHP();
}


void Battle::battleMenu() {
    int choice;
    bool flag = true;

    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " _____________________________________________________________________________________________________" << endl;
    cout << "|                                                                                                     |" << endl;
    cout << "|     ____     _____   _______   _______   _       ____          _     _   _____   __   _   _   _     |" << endl;
    cout << "|    |  _  \\  |  _  | |__   __| |__   __| | |     |  __|        | \\   / | |  ___| |  \\ | | | | | |    |" << endl;
    cout << "|    | |_)  | | |_| |    | |       | |    | |     | |__         |  \\ /  | | |___  |   \\| | | | | |    |" << endl;
    cout << "|    |  _  /  |  _  |    | |       | |    | |     |  __|        | |\\ /| | |  ___| | |\\   | | | | |    |" << endl;
    cout << "|    | |_) \\  | | | |    | |       | |    | |___  | |__         | |   | | | |___  | | \\  | | |_| |    |" << endl;
    cout << "|    |_____/  |_| |_|    |_|       |_|    |_____| |____|        |_|   |_| |_____| |_|  \\_| |_____|    |" << endl;
    cout << "|                                                                                                     |" << endl;
    cout << "|_____________________________________________________________________________________________________|" << endl;
    cout << endl;
    cout << "(1) View/Use Items" << endl;
    cout << "(2) Start Battle" << endl;
    cout << "(3) Attempt to flee battle" << endl;
    cout << endl;

    while (flag) {
        cin >> choice;

        while (!cin || choice <= 0 || choice >= 4) {
            cout << "Invalid input" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> choice; 
        }

        if (choice == 1) {
            viewItems();
        } else if (choice == 2) {
            startBattle();
        } else if (choice == 3) {
            cout << "You have fleed from the battle" << endl;
            flag = false;
        }
    }
}

int Battle::randomNum(int min, int max) {
    return min + (rand() % (max-min+1));
}

bool Battle::checkBattleEnd() const {
    return activePokemonHealth <= 0 || wildPokemon->calculateHP() <=0;
}

void Battle::startBattle() {
    int areaChoice;
    cout << "What area do you want to battle in?" << endl;
    cout << "1. Plains (Easy)" << endl;
    cout << "2. Jungle (Medium)" << endl;
    cout << "3. Tundra (Hard)" << endl;
    cin >> areaChoice;

    while (!cin || areaChoice <= 0 || areaChoice >= 4) {
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> areaChoice; 
    }

    if (areaChoice == 1) {
        wildPokemon = new WildPokemon(1);
    } else if (areaChoice == 2) {
        wildPokemon = new WildPokemon(2);
    } else {
        wildPokemon = new WildPokemon(3);
    }
    
    cout << "A wild " << wildPokemon->speciesToString(wildPokemon->getSpecies()) << " appeared!" << endl;
    wildPokemonCurrHealth = wildPokemon->calculateHP();

    int pokemonChoice;
    cout << "Which Pokemon do you want to use?" << endl;
    cout << "1. " << player->getPokemon1Name() << endl;
    cout << "2. " << player->getPokemon2Name() << endl;
    cout << "3. " << player->getPokemon3Name() << endl;
    cin >> pokemonChoice;

    while (!cin || pokemonChoice <= 0 || pokemonChoice >= 4) {
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> pokemonChoice; 
    }

    if (pokemonChoice == 1) {
        activePokemon = player->getTeam()[0];
        int activePokemonHealth = pokemon1CurrHealth;
    } else if (pokemonChoice == 2) {
        activePokemon = player->getTeam()[1];
        int activePokemonHealth = pokemon2CurrHealth;
    } else {
        activePokemon = player->getTeam()[2];
        int activePokemonHealth = pokemon3CurrHealth;
    }

    while (!checkBattleEnd()) {
        if (isPlayerTurn) {
            playerTurn();
        } else {
            wildPokemonTurn();
        }
        isPlayerTurn = !isPlayerTurn;
    }
    endBattle();
}

void Battle::playerTurn() {
    cout << "It's your turn!\n";

    battleMenu(); // Display the menu options

    // Simulate move selection for simplicity (can be expanded with more menu choices)
    cout << "Choose a move to attack:" << endl;
    
    cout << "1. ";
    activePokemon->getMove1()->displayInfo();
    cout << endl;
    cout << "2. ";
    activePokemon->getMove2()->displayInfo();
    cout << endl;
    cout << "3. "; 
    activePokemon->getMove3()->displayInfo();
    cout << endl;

    int moveChoice;
    cin >> moveChoice;

    while (!cin || moveChoice < 1 || moveChoice > 3) {
        cout << "Invalid input. Choose again:\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> moveChoice;
    }

    Attack* selectedMove = nullptr;
    if (moveChoice == 1) {
        selectedMove = activePokemon->getMove1();
    } else if (moveChoice == 2) {
        selectedMove = activePokemon->getMove2();
    } else if (moveChoice == 3) {
        selectedMove = activePokemon->getMove3();
    }

    // Display the attack message
    cout << activePokemon->speciesToString(activePokemon->getSpecies()) << " used ";
    selectedMove->displayInfo();
    cout << "!" << endl;

    // Calculate and apply damage
    int damage = selectedMove->calculateDamage(*activePokemon, *wildPokemon);
    wildPokemonCurrHealth = wildPokemonCurrHealth - damage;

    cout << "It dealt " << damage << " damage!" << endl;

    // Check if the wild Pokémon fainted
    if (wildPokemon->getBaseHP() <= 0) {
        cout << "The wild Pokémon fainted!" << endl;
        endBattle(); // End the battle if wild Pokémon faints
    }
}

void Battle::wildPokemonTurn() {
    cout << "The wild " << wildPokemon->speciesToString(wildPokemon->getSpecies()) << " is preparing to attack!\n";

    Attack* chosenMove = wildPokemon->wildPokemonMove(*activePokemon);

    cout << wildPokemon->speciesToString(wildPokemon->getSpecies()) << " used " << chosenMove->getName() << "!\n";

    // Calculate damage to the player's active Pokémon
    int damage = chosenMove->calculateDamage(*wildPokemon, *activePokemon);
    activePokemonHealth = activePokemonHealth - damage;

    cout << activePokemon->speciesToString(activePokemon->getSpecies()) << " took " << damage << " damage!\n";

    if (activePokemonHealth <= 0) {
        cout << activePokemon->speciesToString(activePokemon->getSpecies()) << " has fainted!\n";
    }
}

bool Battle::isCatchable() const {
    return wildPokemon->getBaseHP() < 40;
}

bool Battle::isCatchSuccess(const Pokeball& pokeball) {
    if (isCatchable()) {
        int baseChance = 70;
        double modifiedChance = baseChance * pokeball.getCatchMultiplyer();
        int chance = randomNum(1, 100);
        if (chance <= modifiedChance) {
            player->addPokemon(wildPokemon);
            wildPokemon->setBaseHP(0);
            cout << "You just caught the Pokemon!" << endl;
            endBattle();
            return true;
        } else {
            cout << "The Pokemon broke out of the Pokeball!" << endl;
            return false;
        }
    } else {
        cout << "The Pokemon is too strong to catch!" << endl;
        return false;
    }
}

void Battle::viewItems() const {
    player->viewItems();
}

void Battle::viewTeam() const {
    vector<Pokemon*> team = player->getTeam();
    cout << "Your team: " << endl;
    for (int i=0; i<team.size(); i++) {
        cout << i+1 << ". " << endl;
        team[i]->displayInfo();
    }
}

void Battle::endBattle() {
    if (player->getTeam()[0]->getBaseHP() <= 0) {
        cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
        cout << " __________________________________________________________________________" << endl;
        cout << "|                                                                          |" << endl;
        cout << "|     _   _   _____   _   _          _       _____   _____   _____   _     |" << endl;
        cout << "|    \\ \\ / / |  _  | | | | |        | |     |  _  | |  ___| |  ___| | |    |" << endl;
        cout << "|     \\ V /  | | | | | | | |        | |     | | | | | |___  | |___  | |    |" << endl;
        cout << "|      | |   | | | | | | | |        | |     | | | | |___  | |  ___| |_|    |" << endl;
        cout << "|      | |   | |_| | | |_| |        | |___  | |_| |  ___| | | |___   _     |" << endl;
        cout << "|      |_|   |_____| |_____|        |_____| |_____| |_____| |_____| |_|    |" << endl;
        cout << "|                                                                          |" << endl;
        cout << "|__________________________________________________________________________|" << endl;
        cout << endl;
    //     cout << "ALL OF YOUR POKEMON HAVE FAINTED!" << endl;
    //     cout << "(1) Use Standard Revive (50 health)" << endl; // only works if the user actually owns one, use conditional
    //     cout << "(2) Use Max Revive (100 health)" << endl;
    //     cout << "(3) Give up and flee" << endl;
    //     cout << endl;
      
    //     int choice;
    //     cin >> choice;

    //     while (!cin || (choice < 1 || choice > 3)) {
    //         cout << "Invalid input. Please enter 1, 2, or 3." << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //         cin >> choice;
    //     }

    //     if (choice == 1) {
    //         if (player->accessInventory("Revive")) {
    //             activePokemonHealth += 50; // Restores 50 health
    //             cout << "You used a Standard Revive on your Pokémon!" << endl;
    //             cout << "Your Pokémon is back in the battle with 50 health!" << endl;
    //             battleMenu();
    //         } else {
    //             cout << "You don't have any Standard Revive items!" << endl;
    //             flee();
    //         }
    //     } else if (choice == 2) {
    //         if (player->getInventory()->hasItem("Max Revive")) {
    //             player->getInventory()->useItem("Max Revive", player->getTeam()[0], 100); // Restores 100% health
    //             cout << "You used a Max Revive on your Pokémon!" << endl;
    //             cout << "Your Pokémon is fully restored!" << endl;
    //         } else {
    //             cout << "You don't have any Max Revive items!" << endl;
    //             flee();
    //         }
    //     } else if (choice == 3) {
    //         cout << "You chose to give up and flee the battle!" << endl;
    //         flee();
    //     }
     } else {
        cout << "You Won!" << endl;
        //  cout << endl;
        //  player->myInventory->addMoney(100);
        //  int EXPAmount = activePokemon->calculateEXP(wildPokemon);
        //  activePokemon->addEXP(EXPAmount);
        //return to battle menu 
    }
}
