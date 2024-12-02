#pragma once
#include <string>
#include "pokemon.h"
#include "../../src/Pokemon/moves.cpp"

using std::string;

class Attack {
    private:
        moves name;
        PokemonType type;
        int power;
    public:
        ~Attack() = default;
        Attack& operator=(const Attack& other) {
            if (this == &other) { // Check for self-assignment
                return *this;
            }

            // Copy member variables
            name = other.name;
            type = other.type;
            power = other.power;

            return *this; // Return *this to allow chaining
        }
        Attack();
        Attack(moves name, int power, PokemonType t);
        string getName() const;//get name of the moves
        int getpower() const;//get the value of power
        int calculateDamage(Pokemon attacker, Pokemon defender) const;//calculates the actual damage to the opponent
        void displayInfo() const;//display name and power
};
