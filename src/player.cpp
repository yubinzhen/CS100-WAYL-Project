#include "../header/player.h"

using namespace std;

int Player::getMoney() const {
    return money;
}

string Player::getName() const {
    return "";
}

vector<Pokemon*> Player::getCaughtPokemon() const {
    return caughtPokemons;
}

void Player::addPokemon(Pokemon* p) {
    this->caughtPokemons.push_back(p);
}

vector<Pokemon*> Player::getTeam() const {
    return selectedTeam;
}

void Player::accessInventory() {
   myInventory->store();
}

void Player::enterBattle() {
   battle->battleMenu();
}

void Player::logout() {
   //go to main menu screen to save/logout
}

void Player::menu() {
   int choice;

   cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
   cout << " _________________________________________" << endl;
   cout << "|                                         |" << endl;
   cout << "|     _     _   _____   __   _   _   _    |" << endl;
   cout << "|    | \\   / | |  ___| |  \\ | | | | | |   |" << endl;
   cout << "|    |  \\ /  | | |___  |   \\| | | | | |   |" << endl;
   cout << "|    | |\\ /| | |  ___| | |\\   | | | | |   |" << endl;
   cout << "|    | |   | | | |___  | | \\  | | |_| |   |" << endl;
   cout << "|    |_|   |_| |_____| |_|  \\_| |_____|   |" << endl;
   cout << "|                                         |" << endl;
   cout << "|_________________________________________|" << endl;
   cout << endl;
   cout << "(1) View Inventory" << endl;
   cout << "(2) Shop at Store" << endl;
   cout << "(3) Search for Wild Pokemon" << endl;
   cout << "(4) Log Out" << endl;
   cout << endl;

   cin >> choice;
   while (!cin || choice <= 0 || choice >= 6) {
      cout << "Invalid input" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> choice; 
   }
   
   if (choice == 1) {
      accessInventory();
   } else if (choice == 2) {
      myInventory->store();
   } else if (choice == 3) {
      enterBattle();
   } else if (choice == 4) {
      logout();
   }
}

