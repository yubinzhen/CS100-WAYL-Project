#pragma once
#include "player.h"
using namespace std;

class PC {
    private:
        Player* player;

    public:
        PC(Player* playerRef) : player(playerRef) {}
        int caughtPokemonAmount() const;
        void displayPCMenu();
        void viewPokemonStats();
        void viewEditPokemonTeam();
};