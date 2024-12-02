#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include "Inventory.h"
#include "../header/DisplayScreen.h"
#include "../header/battle.h"

using namespace std;

class Player : public DisplayScreen {
   private:
       int money;
       vector<Pokemon*> caughtPokemons;     // List of Pokemon player has caught
       vector<Pokemon*> selectedTeam;       // Player's team (3 Pokemon)
       Inventory* myInventory;
       Battle* battle;

   public:
        Player() : money(0), myInventory(new Inventory()), battle(new Battle(this, nullptr)) {}
       int getMoney() const;
       string getName() const;
       vector<Pokemon*> getCaughtPokemon() const;
       void addPokemon(Pokemon* p);
       vector<Pokemon*> getTeam() const;
       void accessInventory();
       void enterBattle();
       void logout();
       void menu();
       
};