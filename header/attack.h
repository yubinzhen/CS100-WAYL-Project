#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "pokemon.h"
#include "../src/moves.cpp"

using std::string;

class Attack {
    private:
        moves name;
        PokemonType type;
        int power;
    public:
        Attack();
        Attack(moves name, int power, PokemonType t);
        string getName() const;//get name of the moves
        int getpower() const;//get the value of power
        int calculateDamage(Pokemon attacker, Pokemon defender) const;//calculates the actual damage to the opponent
        void displayInfo();//display name and power
};

#endif