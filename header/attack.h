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
        string getName() const;
        int getpower() const;
        int calculateDamage(Pokemon attacker, Pokemon defender) const;
        void displayInfo();
};

#endif