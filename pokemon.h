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
        int damage;
        int defence;
        Attack move1;
        Attack monve2;
    public:
        Pokemon(PokemonSpecies sp, PokemonType t, int hpVal, int dmgVal): species(sp), type(t), hp(hpVal), damage(dmgVal){}
        void displayInfo();
        static string speciesToString(PokemonSpecies species);
        static string typeToString(PokemonType type);
        void attack(PokemonSpecies attacker, PokemonSpecies defender);
        bool isTypeEffective(PokemonType attacker, PokemonType defender);
};