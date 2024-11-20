#include <iostream>
#include <vector>
#include "pokemonType.cpp"
#include "pokemonSpecies.cpp"
using namespace std;

class Pokemon
{
    private:
        PokemonSpecies species;
        PokemonType type;
        int hp;
        int attack;
    public:
        Pokemon(PokemonSpecies sp, PokemonType t, int hpVal, int atkVal): species(sp), type(t), hp(hpVal), attack(atkVal){}
        void displayInfo();
        string speciesToString(PokemonSpecies species);
        string typeToString(PokemonType type);
        void attack(PokemonSpecies attacker, PokemonSpecies defender);
        bool isTypeEffective(PokemonType attacker, PokemonType defender);
};