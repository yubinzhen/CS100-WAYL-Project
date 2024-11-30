#include <iostream>
#include <vector>
#include "../src/pokemonType.cpp"
#include "../src/pokemonSpecies.cpp"
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
        int level;
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
        Pokemon(PokemonSpecies sp): species(sp){//constructor for all pokemon
            availableMoves= { {PokemonType::Fire, {moves::FireSpin, moves::Flamethrower, moves::FireBlast, moves::Ember, moves::FirePunch}}, 
                            {PokemonType::Grass, {moves::Absorb, moves::LeechSeed, moves::MegaDrain, moves::PetalDance, moves::RazorLeaf, moves::SleepPowder, moves::SolarBeam, moves::Spore, moves::StunSpore, moves::VineWhip}}, 
                            {PokemonType::Water, {moves::Clamp, moves::Crabhammer, moves::HydroPump, moves::Surf, moves::WaterGun, moves::Waterfall, moves::Withdraw}}, {PokemonType::Normal, {moves::Barrage, moves::Bide, moves::Bind, moves::BodySlam, moves::CometPunch, moves::Cut, moves::DefenseCurl, moves::DizzyPunch, moves::DoubleSlap, moves::DoubleEdge, moves::EggBomb, moves::Explosion, moves::FuryAttack, moves::FurySwipes, moves::Glare, moves::Growl, moves::Growth, moves::Guillotine, moves::Harden, moves::Headbutt, moves::HornAttack, moves::HornDrill, moves::HyperBeam, moves::HyperFang, moves::Leer, moves::LovelyKiss, moves::MegaKick, moves::MegaPunch, moves::Pound, moves::QuickAttack, moves::Rage, moves::RazorWind, moves::Recover, moves::Scratch, moves::Screech, moves::SelfDestruct, moves::Sharpen, moves::Sing, moves::SkullBash, moves::Slam, moves::Slash, moves::SoftBoiled, moves::SonicBoom, moves::SpikeCannon, moves::Splash, moves::Stomp, moves::Strength, moves::SuperFang, moves::Supersonic, moves::SwordsDance, moves::Tackle, moves::TailWhip, moves::TakeDown, moves::Thrash, moves::ViseGrip, moves::Wrap}}};

            level=1;
            switch (species) {
                case PokemonSpecies::Bulbasaur:
                    type = PokemonType::Grass;
                    baseHP = 45;
                    baseAttack = 49;
                    baseDefense = 49;
                    break;
                case PokemonSpecies::Squirtle:
                    type = PokemonType::Water;
                    baseHP = 44;
                    baseAttack = 48;
                    baseDefense = 65;
                    break;
                case PokemonSpecies::Charmander:
                    type = PokemonType::Fire;
                    baseHP = 39;
                    baseAttack = 52;
                    baseDefense = 43;
                    break;
                case PokemonSpecies::Pidgey:
                    type = PokemonType::Normal;
                    baseHP = 40;
                    baseAttack = 45;
                    baseDefense = 40;
                    break;
                case PokemonSpecies::Ivysaur:
                    type = PokemonType::Grass;
                    baseHP = 60;
                    baseAttack = 62;
                    baseDefense = 63;
                    break;
                case PokemonSpecies::Horsea:
                    type = PokemonType::Water;
                    baseHP = 30;
                    baseAttack = 40;
                    baseDefense = 35;
                    break;
                case PokemonSpecies::Vulpix:
                    type = PokemonType::Fire;
                    baseHP = 38;
                    baseAttack = 41;
                    baseDefense = 40;
                    break;
                case PokemonSpecies::Rattata:
                    type = PokemonType::Normal;
                    baseHP = 30;
                    baseAttack = 56;
                    baseDefense = 35;
                    break;
                case PokemonSpecies::Venusaur:
                    type = PokemonType::Grass;
                    baseHP = 80;
                    baseAttack = 82;
                    baseDefense = 83;
                    break;
                case PokemonSpecies::Psyduck:
                    type = PokemonType::Water;
                    baseHP = 50;
                    baseAttack = 52;
                    baseDefense = 48;
                    break;
                case PokemonSpecies::Growlithe:
                    type = PokemonType::Fire;
                    baseHP = 55;
                    baseAttack = 70;
                    baseDefense = 45;
                    break;
                case PokemonSpecies::Spearow:
                    type = PokemonType::Normal;
                    baseHP = 40;
                    baseAttack = 60;
                    baseDefense = 30;
                    break;
                case PokemonSpecies::Oddish:
                    type = PokemonType::Grass;
                    baseHP = 45;
                    baseAttack = 50;
                    baseDefense = 55;
                    break;
                case PokemonSpecies::Tentacool:
                    type = PokemonType::Water;
                    baseHP = 40;
                    baseAttack = 40;
                    baseDefense = 35;
                    break;
                case PokemonSpecies::Ponyta:
                    type = PokemonType::Fire;
                    baseHP = 50;
                    baseAttack = 65;
                    baseDefense = 40;
                    break;
                case PokemonSpecies::Meowth:
                    type = PokemonType::Normal;
                    baseHP = 40;
                    baseAttack = 45;
                    baseDefense = 35;
                    break;
                case PokemonSpecies::Gloom:
                    type = PokemonType::Grass;
                    baseHP = 60;
                    baseAttack = 65;
                    baseDefense = 70;
                    break;
                case PokemonSpecies::Staryu:
                    type = PokemonType::Water;
                    baseHP = 30;
                    baseAttack = 45;
                    baseDefense = 50;
                    break;
                case PokemonSpecies::Charmeleon:
                    type = PokemonType::Fire;
                    baseHP = 58;
                    baseAttack = 64;
                    baseDefense = 50;
                    break;
                case PokemonSpecies::Jigglypuff:
                    type = PokemonType::Normal;
                    baseHP = 115;
                    baseAttack = 45;
                    baseDefense = 20;
                    break;
                case PokemonSpecies::Vileplume:
                    type = PokemonType::Grass;
                    baseHP = 75;
                    baseAttack = 70;
                    baseDefense = 65;
                    break;
                case PokemonSpecies::Slowpoke:
                    type = PokemonType::Water;
                    baseHP = 90;
                    baseAttack = 65;
                    baseDefense = 65;
                    break;
                case PokemonSpecies::Rapidash:
                    type = PokemonType::Fire;
                    baseHP = 65;
                    baseAttack = 80;
                    baseDefense = 50;
                    break;
                case PokemonSpecies::Farfetchd:
                    type = PokemonType::Normal;
                    baseHP = 52;
                    baseAttack = 65;
                    baseDefense = 55;
                    break;
                case PokemonSpecies::Paras:
                    type = PokemonType::Grass;
                    baseHP = 35;
                    baseAttack = 70;
                    baseDefense = 55;
                    break;
                case PokemonSpecies::Seel:
                    type = PokemonType::Water;
                    baseHP = 65;
                    baseAttack = 45;
                    baseDefense = 55;
                    break;
                case PokemonSpecies::Magmar:
                    type = PokemonType::Fire;
                    baseHP = 50;
                    baseAttack = 95;
                    baseDefense = 57;
                    break;
                case PokemonSpecies::Raticate:
                    type = PokemonType::Normal;
                    baseHP = 55;
                    baseAttack = 81;
                    baseDefense = 60;
                    break;
                case PokemonSpecies::Parasect:
                    type = PokemonType::Grass;
                    baseHP = 60;
                    baseAttack = 95;
                    baseDefense = 80;
                    break;
                case PokemonSpecies::Wartortle:
                    type = PokemonType::Water;
                    baseHP = 59;
                    baseAttack = 63;
                    baseDefense = 80;
                    break;
                case PokemonSpecies::Ninetales:
                    type = PokemonType::Fire;
                    baseHP = 73;
                    baseAttack = 76;
                    baseDefense = 75;
                    break;
                case PokemonSpecies::Fearow:
                    type = PokemonType::Normal;
                    baseHP = 65;
                    baseAttack = 90;
                    baseDefense = 60;
                    break;
                case PokemonSpecies::Bellsprout:
                    type = PokemonType::Grass;
                    baseHP = 50;
                    baseAttack = 75;
                    baseDefense = 35;
                    break;
                case PokemonSpecies::Dewgong:
                    type = PokemonType::Water;
                    baseHP = 90;
                    baseAttack = 70;
                    baseDefense = 65;
                    break;
                case PokemonSpecies::Flareon:
                    type = PokemonType::Fire;
                    baseHP = 65;
                    baseAttack = 130;
                    baseDefense = 60;
                    break;
                case PokemonSpecies::Wigglytuff:
                    type = PokemonType::Normal;
                    baseHP = 140;
                    baseAttack = 70;
                    baseDefense = 45;
                    break;
                case PokemonSpecies::Weepinbell:
                    type = PokemonType::Grass;
                    baseHP = 65;
                    baseAttack = 90;
                    baseDefense = 50;
                    break;
                case PokemonSpecies::Blastoise:
                    type = PokemonType::Water;
                    baseHP = 79;
                    baseAttack = 83;
                    baseDefense = 100;
                    break;
                case PokemonSpecies::Arcanine:
                    type = PokemonType::Fire;
                    baseHP = 90;
                    baseAttack = 110;
                    baseDefense = 80;
                    break;
                case PokemonSpecies::Persian:
                    type = PokemonType::Normal;
                    baseHP = 65;
                    baseAttack = 70;
                    baseDefense = 60;
                    break;
                case PokemonSpecies::Victreebel:
                    type = PokemonType::Grass;
                    baseHP = 75;
                    baseAttack = 100;
                    baseDefense = 70;
                    break;
                case PokemonSpecies::Lapras:
                    type = PokemonType::Water;
                    baseHP = 130;
                    baseAttack = 85;
                    baseDefense = 80;
                    break;
                case PokemonSpecies::Charizard:
                    type = PokemonType::Fire;
                    baseHP = 78;
                    baseAttack = 84;
                    baseDefense = 78;
                    break;
                case PokemonSpecies::Kangaskhan:
                    type = PokemonType::Normal;
                    baseHP = 105;
                    baseAttack = 95;
                    baseDefense = 80;
                    break;
                case PokemonSpecies::Tangela:
                    type = PokemonType::Grass;
                    baseHP = 65;
                    baseAttack = 55;
                    baseDefense = 115;
                    break;
                case PokemonSpecies::Gyarados:
                    type = PokemonType::Water;
                    baseHP = 95;
                    baseAttack = 125;
                    baseDefense = 79;
                    break;
                case PokemonSpecies::Moltres:
                    type = PokemonType::Fire;
                    baseHP = 90;
                    baseAttack = 100;
                    baseDefense = 90;
                    break;
                case PokemonSpecies::Snorlax:
                    type = PokemonType::Normal;
                    baseHP = 160;
                    baseAttack = 110;
                    baseDefense = 65;
                    break;
                default:
                    type = PokemonType::Normal;
                    baseHP=0;
                    baseAttack=0;
                    baseDefense=0;
            }
            srand(time(0));
            IV=rand()%31;
            vector<moves> selectedMoves;
            if (type != PokemonType::Normal) {
                selectedMoves.insert(selectedMoves.end(), availableMoves[type].begin(), availableMoves[type].end()); 
            }
            selectedMoves.insert(selectedMoves.end(), availableMoves[PokemonType::Normal].begin(), availableMoves[PokemonType::Normal].end());
            random_shuffle(selectedMoves.begin(), selectedMoves.end()); 
            move1 = new Attack(selectedMoves[0], 0, type); 
            move2 = new Attack(selectedMoves[1], 0, type); 
            move3 = new Attack(selectedMoves[2], 0, type); 

        }
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
        int getLevel() const;
        static string speciesToString(PokemonSpecies species);
        static string typeToString(PokemonType type);
        bool isTypeEffective(Pokemon defender);
        bool isTypeNotEffective(Pokemon defender);
};
