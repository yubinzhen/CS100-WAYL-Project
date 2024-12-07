/*
#pragma once

#include "player.h"
#include "Pokemon/pokemon.h"
#include "Pokemon/attack.h"
#include "Pokemon/wildPokemon.h"

using namespace std;

class Player;

class Battle {
    private:
        Pokemon* activePokemon;
        Player* player;
        WildPokemon* wildPokemon;
        bool isPlayerTurn;
        bool checkBattleEnd() const;
        int randomNum(int , int);
        int pokemon1CurrHealth; 
        int pokemon2CurrHealth;
        int pokemon3CurrHealth; 
        int wildPokemonCurrHealth = 0;
        int activePokemonHealth = 0;

    public: 
        Battle() : player(nullptr), isPlayerTurn(true) {}
        Battle(Player* p, WildPokemon* wp) 
    : player(p), wildPokemon(wp), isPlayerTurn(true) {
    pokemon1CurrHealth = player->getTeam()[0]->calculateHP();
    pokemon2CurrHealth = player->getTeam()[1]->calculateHP();
    pokemon3CurrHealth = player->getTeam()[2]->calculateHP();
    wildPokemonCurrHealth = wp->calculateHP();
    activePokemon = player->getTeam()[0];
    activePokemonHealth = activePokemon->calculateHP();
}
        ~Battle();
        void startBattle();
        bool isCatchable() const;
        bool isCatchSuccess(const Pokeball& pokeball);
        void viewItems() const;
        void viewTeam() const;
        void flee();
        void endBattle();
        void battleMenu();
        void playerTurn();
        void wildPokemonTurn();
};
*/

#pragma once

#include "Pokemon/pokemon.h"
#include "Pokemon/attack.h"
#include "Pokemon/wildPokemon.h"
#include "player.h"

class Player; // Forward declaration

class Battle {
    private:
        Pokemon* activePokemon;
        vector<Pokemon*> team;
        WildPokemon* wildPokemon;
        bool isPlayerTurn;
        int pokemon1CurrHealth; 
        int pokemon2CurrHealth; 
        int pokemon3CurrHealth; 
        int wildPokemonCurrHealth;
        int activePokemonHealth;
        int randomNum(int min, int max);
        bool checkBattleEnd() const;

    public: 
        Battle() : isPlayerTurn(true) {}
        Battle(vector<Pokemon*>& team);
        //~Battle();
        void startBattle();
        bool isCatchable() const;
        bool isCatchSuccess(const Pokeball& pokeball);
        void viewItems() const;
        void viewTeam() const;
        void endBattle();
        void battleMenu();
        void playerTurn();
        void wildPokemonTurn();
};