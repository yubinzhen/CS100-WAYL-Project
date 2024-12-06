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
       bool isEnded;
       vector<Pokemon*> caughtPokemons;     // List of Pokemon player has caught
       vector<Pokemon*> selectedTeam;       // Player's team (3 Pokemon)
       Inventory* myInventory;

   public:
        Player() : money(0), myInventory(new Inventory()), isEnded(false) {
            Pokemon* startPokemon1= new Pokemon(PokemonSpecies::Bulbasaur);
            Pokemon* startPokemon2= new Pokemon(PokemonSpecies::Charmander);
            Pokemon* startPokemon3= new Pokemon(PokemonSpecies::Squirtle);
            caughtPokemons.push_back(startPokemon1);
            caughtPokemons.push_back(startPokemon2);
            caughtPokemons.push_back(startPokemon3);
            for(int i=0;i<caughtPokemons.size();i++){
                selectedTeam.push_back(caughtPokemons.at(i));
            }
        }
        Player(int mon, Inventory* myInven) : money(mon), myInventory(myInven), isEnded(false){
            Pokemon* startPokemon1= new Pokemon(PokemonSpecies::Bulbasaur);
            Pokemon* startPokemon2= new Pokemon(PokemonSpecies::Charmander);
            Pokemon* startPokemon3= new Pokemon(PokemonSpecies::Squirtle);
            caughtPokemons.push_back(startPokemon1);
            caughtPokemons.push_back(startPokemon2);
            caughtPokemons.push_back(startPokemon3);

            for(int i=0;i<caughtPokemons.size();i++){
                selectedTeam.push_back(caughtPokemons.at(i));
            }
        }
        ~Player();
        int getMoney() const;
        string getName() const;
        vector<Pokemon*> getCaughtPokemon() const;   
        vector<Pokemon*> getCaughtPokemon();
        void addPokemon(Pokemon* p);
        vector<Pokemon*> getTeam() const;
        vector<Pokemon*> getTeam();
        bool accessInventory(string);
        void accessStore();
        void viewItems();
        void enterBattle();
        bool logout();
        void menu();
        void displayPCMenu();
        void viewPokemonStats();
        void viewEditPokemonTeam();
        int getPokemon1Health() {
        return selectedTeam[0]->calculateHP();
        }
        int getPokemon2Health() {
        return selectedTeam[1]->calculateHP();
        }
        int getPokemon3Health() {
        return selectedTeam[2]->calculateHP();
        }
        string getPokemon1Name() {
        return selectedTeam[0]->speciesToString(selectedTeam[0]->getSpecies());
        }
        string getPokemon2Name() {
        return selectedTeam[1]->speciesToString(selectedTeam[1]->getSpecies());
        }
        string getPokemon3Name() {
        return selectedTeam[2]->speciesToString(selectedTeam[2]->getSpecies());
        }
        Pokemon* getPokemon1() {
        return selectedTeam[0];
        }
        Pokemon* getPokemon2() {
        return selectedTeam[1];
        }
        Pokemon* getPokemon3() {
        return selectedTeam[2];
        }
};