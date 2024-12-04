#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include "Inventory.h"
#include "Pokemon/pokemon.h"
#include "battle.h"

using namespace std;

class Player {
   private:
       int money;
       vector<Pokemon*> caughtPokemons;     // List of Pokemon player has caught
       vector<Pokemon*> selectedTeam;       // Player's team (3 Pokemon)
       Inventory* myInventory;

   public:
        Player() : money(0), myInventory(new Inventory()) {}
        Player(int mon, Inventory* myInven) : money(mon), myInventory(myInven){}
        ~Player();
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