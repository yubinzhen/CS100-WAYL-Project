#include <iostream>
#include <vector>
#include "../../src/Pokemon/pokemonType.cpp"
#include "../../src//Pokemon/pokemonSpecies.cpp"
#include "../../src//Pokemon/growthRate.cpp"
#include "attack.h"
#include <cstdlib>
#include <ctime>
#include <map> 
#include <algorithm>
using namespace std;

class Pokemon
{
    private:
        PokemonSpecies species;
        PokemonType type;
        GrowthRate GR;
        int level;
        int exp;
        int baseEXP;
        int baseHP;
        int IV;
        int baseAttack;
        int baseDefense;
        Attack* move1;
        Attack* move2;
        Attack* move3;
        static std::map<PokemonType, std::vector<moves>> availableMoves;
    public:
        ~Pokemon(){
            delete move1;
            delete move2;
            delete move3;
        }
        Pokemon(PokemonSpecies sp);
        Pokemon(){//default constructor
            species=PokemonSpecies::none;
            type = PokemonType::Normal;
            baseHP=0;
            baseAttack=0;
            baseDefense=0;
            move1=nullptr;
            move2=nullptr;
            move3=nullptr;
        }
        void displayInfo();//displays every attributes for each pokemon

        int calculateHP() const;//calculates HP as the level goes up
        int calculateAttack() const;//calculates Attack as the level goes up
        int calculateDefense() const;//calculates Defense as the leve goes up
        int calculateEXP(Pokemon defeatedPokemon) const;
        
        void initializeStats(PokemonSpecies sp);

        static string speciesToString(PokemonSpecies species);
        static string typeToString(PokemonType type);

        bool isTypeEffective(Pokemon defender);
        bool isTypeNotEffective(Pokemon defender);
        
        void addEXP(int val);
        void addLevel();
        int getLevel() const;

        void setBaseHP(int val);
        void setBaseAttack(int val);
        void setBaseDefense(int val);
        
        int getBaseHP();
        int getBaseAttack();
        int getBaseDefense();

        PokemonSpecies getSpecies() const {
            return species;
        }

};
