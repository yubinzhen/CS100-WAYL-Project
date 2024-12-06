#include "../header/Inventory.h"
#include "../header/battle.h"
#include <iostream>
#include <limits>
#include <fstream>
#include <dirent.h>
#include <cstring>
#include <player.h>
using namespace std;
int main()
{
    ifstream inFS;
    int choice;
    Player* myPlayer = new Player();
cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << " _________________________________________________________________________________________________________________________________" << endl;
    cout << "|                                                                                                                                 |" << endl;
    cout << "|     ____    _____   _    _   _____   _     _   _____   __   _          ____     _____   _______   _______   _       _____   _   |" << endl;
    cout << "|    |  _ \\  |  _  | | |  / / |  ___| | \\   / | |  _  | |  \\ | |        |  _  \\  |  _  | |__   __| |__   __| | |     |  ___| | |  |" << endl;
    cout << "|    | |_) | | | | | | | / /  | |___  |  \\ /  | | | | | |   \\| |        | |_)  | | |_| |    | |       | |    | |     | |___  | |  |" << endl;
    cout << "|    |  __/  | | | | |    /   |  ___| | |\\ /| | | | | | | |\\   |        |  _  /  |  _  |    | |       | |    | |     |  ___| |_|  |" << endl;
    cout << "|    | |     | |_| | | |\\ \\   | |___  | |   | | | |_| | | | \\  |        | |_) \\  | | | |    | |       | |    | |___  | |___   _   |" << endl;
    cout << "|    |_|     |_____| |_| \\_\\  |_____| |_|   |_| |_____| |_|  \\_|        |_____/  |_| |_|    |_|       |_|    |_____| |_____| |_|  |" << endl;
    cout << "|                                                                                                                                 |" << endl;
    cout << "|_________________________________________________________________________________________________________________________________|" << endl;
    while (true)
    {
        cout << endl;
        cout << "(1) New Game" << endl;
        cout << "(2) Load Game" << endl;
        cout << endl;
        cout << "Enter a number choice: ";
        cin >> choice;
        cout << endl;


        if (choice == 1) {
            break;
        }

        else if (choice == 2) {
            
        }

        else if(cin.fail() || 1 > choice || 2 < choice){
            cout << "\nInvalid Input\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << endl;
    }

    while (!(myPlayer->logout()))
    {
        myPlayer->menu();
    }
    return 0;
}