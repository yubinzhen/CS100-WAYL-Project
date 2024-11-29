#include <iostream>
#include <vector>
#include "../src/pokemonType.cpp"
#include "../src/pokemonSpecies.cpp"
#include "attack.h"
#include <cstdlib>
#include <ctime>
using namespace std;

class Pokemon
{
    private:
        PokemonSpecies species;
        PokemonType type;
        int level;
        int baseHP;
        int baseAttack;
        int baseDefense;
        Attack move1;
        Attack move2;
        Attack move3;
    public:
        Pokemon(PokemonSpecies sp, PokemonType t): species(sp), type(t){
            level=1;
            switch (species) {                 
                case PokemonSpecies::Bulbasaur:                     
                    baseHP = 45;                     
                    baseAttack = 49;                     
                    baseDefense = 49;                     
                    break;                 
                case PokemonSpecies::Squirtle:                     
                    baseHP = 44;                     
                    baseAttack = 48;                     
                    baseDefense = 65;                     
                    break;                 
                case PokemonSpecies::Charmander:                     
                    baseHP = 39;                     
                    baseAttack = 52;                     
                    baseDefense = 43;                     
                    break;                 
                case PokemonSpecies::Pidgey:                     
                    baseHP = 40;                     
                    baseAttack = 45;                     
                    baseDefense = 40;                     
                    break;                 
                case PokemonSpecies::Ivysaur:                     
                    baseHP = 60;                     
                    baseAttack = 62;                     
                    baseDefense = 63;                     
                    break;                 
                case PokemonSpecies::Horsea:                     
                    baseHP = 30;                     
                    baseAttack = 40;                     
                    baseDefense = 35;                     
                    break;                 
                case PokemonSpecies::Vulpix:                     
                    baseHP = 38;                     
                    baseAttack = 41;                     
                    baseDefense = 40;                     
                    break;                 
                case PokemonSpecies::Rattata:                     
                    baseHP = 30;                     
                    baseAttack = 56;                     
                    baseDefense = 35;                     
                    break;                 
                case PokemonSpecies::Venusaur:                     
                    baseHP = 80;                     
                    baseAttack = 82;                     
                    baseDefense = 83;                     
                    break;                 
                case PokemonSpecies::Psyduck:                     
                    baseHP = 50;                     
                    baseAttack = 52;                     
                    baseDefense = 48;                     
                    break;                 
                case PokemonSpecies::Growlithe:                     
                    baseHP = 55;                     
                    baseAttack = 70;                     
                    baseDefense = 45;                     
                    break;                 
                case PokemonSpecies::Spearow:                     
                    baseHP = 40;                     
                    baseAttack = 60;                     
                    baseDefense = 30;                     
                    break;                 
                case PokemonSpecies::Oddish:                     
                    baseHP = 45;                     
                    baseAttack = 50;                     
                    baseDefense = 55;                     
                    break;                 
                case PokemonSpecies::Tentacool:                     
                    baseHP = 40;                     
                    baseAttack = 40;                     
                    baseDefense = 35;                     
                    break;                 
                case PokemonSpecies::Ponyta:                     
                    baseHP = 50;                     
                    baseAttack = 65;                     
                    baseDefense = 40;                     
                    break;                 
                case PokemonSpecies::Meowth:                     
                    baseHP = 40;                     
                    baseAttack = 45;                     
                    baseDefense = 35;                     
                    break;                 
                case PokemonSpecies::Gloom:                     
                    baseHP = 60;                     
                    baseAttack = 65;                     
                    baseDefense = 70;                     
                    break;                 
                case PokemonSpecies::Staryu:                     
                    baseHP = 30;                     
                    baseAttack = 45;                     
                    baseDefense = 50;                     
                    break;                 
                case PokemonSpecies::Charmeleon:                     
                    baseHP = 58;                     
                    baseAttack = 64;                     
                    baseDefense = 50;                     
                    break;                 
                case PokemonSpecies::Jigglypuff:                     
                    baseHP = 115;                     
                    baseAttack = 45;                     
                    baseDefense = 20;                     
                    break;                 
                case PokemonSpecies::Vileplume:                     
                    baseHP = 75;                     
                    baseAttack = 70;                     
                    baseDefense = 65;                     
                    break;                 
                case PokemonSpecies::Slowpoke:                     
                    baseHP = 90;                     
                    baseAttack = 65;                     
                    baseDefense = 65;                     
                    break;                 
                case PokemonSpecies::Rapidash:                     
                    baseHP = 65;                     
                    baseAttack = 80;                     
                    baseDefense = 50;                     
                    break;                 
                case PokemonSpecies::Farfetchd:                     
                    baseHP = 52;                     
                    baseAttack = 65;                     
                    baseDefense = 55;                     
                    break;                 
                case PokemonSpecies::Paras:                     
                    baseHP = 35;                     
                    baseAttack = 70;                     
                    baseDefense = 55;                     
                    break;                 
                case PokemonSpecies::Seel:                     
                    baseHP = 65;                     
                    baseAttack = 45;                     
                    baseDefense = 55;                     
                    break;                 
                case PokemonSpecies::Magmar:                     
                    baseHP = 50;                     
                    baseAttack = 95;                     
                    baseDefense = 57;                     
                    break;                 
                case PokemonSpecies::Raticate:                     
                    baseHP = 55;                     
                    baseAttack = 81;                     
                    baseDefense = 60;                     
                    break;                 
                case PokemonSpecies::Parasect:                     
                    baseHP = 60;                     
                    baseAttack = 95;                     
                    baseDefense = 80;                     
                    break;                 
                case PokemonSpecies::Wartortle:                     
                    baseHP = 59;                     
                    baseAttack = 63;                     
                    baseDefense = 80;                     
                    break;                 
                case PokemonSpecies::Ninetales:                     
                    baseHP = 73;                     
                    baseAttack = 76;                     
                    baseDefense = 75;                     
                    break;                 
                case PokemonSpecies::Fearow:                     
                    baseHP = 65;                     
                    baseAttack = 90;                     
                    baseDefense = 60;                     
                    break;                 
                case PokemonSpecies::Bellsprout:                     
                    baseHP = 50;                     
                    baseAttack = 75;                     
                    baseDefense = 35;                     
                    break;                 
                case PokemonSpecies::Dewgong:                     
                    baseHP = 90;                     
                    baseAttack = 70;                     
                    baseDefense = 65;                     
                    break;                 
                case PokemonSpecies::Flareon:                     
                    baseHP = 65;                     
                    baseAttack = 130;                     
                    baseDefense = 60;                     
                    break;                 
                case PokemonSpecies::Wigglytuff:                     
                    baseHP = 140;                     
                    baseAttack = 70;                     
                    baseDefense = 45;                     
                    break;                 
                case PokemonSpecies::Weepinbell:                     
                    baseHP = 65;                     
                    baseAttack = 90;                     
                    baseDefense = 50;                     
                    break;                 
                case PokemonSpecies::Blastoise:                     
                    baseHP = 79;                     
                    baseAttack = 83;                     
                    baseDefense = 100;                     
                    break;                 
                case PokemonSpecies::Arcanine:                     
                    baseHP = 90;                     
                    baseAttack = 110;                     
                    baseDefense = 80;                     
                    break;                 
                case PokemonSpecies::Persian:                     
                    baseHP = 65;                     
                    baseAttack = 70;                     
                    baseDefense = 60;                     
                    break;                 
                case PokemonSpecies::Victreebel:                     
                    baseHP = 75;                     
                    baseAttack = 100;                     
                    baseDefense = 70;                     
                    break;                 
                case PokemonSpecies::Lapras:                     
                    baseHP = 130;                     
                    baseAttack = 85;                     
                    baseDefense = 80;                     
                    break;                 
                case PokemonSpecies::Charizard:                     
                    baseHP = 78;                     
                    baseAttack = 84;                     
                    baseDefense = 78;                     
                    break;                 
                case PokemonSpecies::Kangaskhan:                     
                    baseHP = 105;                     
                    baseAttack = 95;                     
                    baseDefense = 80;                     
                    break;                 
                case PokemonSpecies::Tangela:                     
                    baseHP = 65;                     
                    baseAttack = 55;                     
                    baseDefense = 115;                     
                    break;                 
                case PokemonSpecies::Gyarados:                     
                    baseHP = 95;                     
                    baseAttack = 125;                     
                    baseDefense = 79;                     
                    break;                 
                case PokemonSpecies::Moltres:                     
                    baseHP = 90;                     
                    baseAttack = 100;                     
                    baseDefense = 90;                     
                    break;                 
                case PokemonSpecies::Snorlax:                     
                    baseHP = 160;                     
                    baseAttack = 110;                     
                    baseDefense = 65;                     
                    break;                 
                default:                     
                    baseHP = 0;                     
                    baseAttack = 0;                     
                    baseDefense = 0;                     
                    break;             
            }
        }
        void displayInfo();
        int calculateHP(int level, int baseHP);
        static string speciesToString(PokemonSpecies species);
        static string typeToString(PokemonType type);
        void attack(PokemonSpecies attacker, PokemonSpecies defender);
        bool isTypeEffective(PokemonType attacker, PokemonType defender);
        bool isTypeNotEffective(PokemonType attacker, PokemonType defender);
};
