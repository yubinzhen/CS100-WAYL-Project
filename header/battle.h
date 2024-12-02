#pragma once

#include "player.h"
#include "Pokemon/pokemon.h"

using namespace std;

class Battle : public DisplayScreen{
    private:
        Player* player;
        Pokemon* wildPokemon;
        bool isPlayerTurn;
        bool checkBattleEnd() const;
        int randomNum(int , int);
        Pokemon* displayBattleMenu;

    public: 
        Battle(Player*, Pokemon* );
        void startBattle();
        bool isCatchable() const;
        bool isCatchSuccess(const Pokeball& pokeball);
        void viewItems() const;
        void viewTeam() const;
        void flee();
        void endBattle();
        void battleMenu();
};