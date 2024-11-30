#include "../header/pokemon.h"
string Pokemon::speciesToString(PokemonSpecies species) {
    switch (species) {
        case PokemonSpecies::Bulbasaur: return "Bulbasaur";
        case PokemonSpecies::Squirtle: return "Squirtle";
        case PokemonSpecies::Charmander:  return "Charmander";
        case PokemonSpecies::Pidgey: return "Pidgey";
        case PokemonSpecies::Ivysaur: return "Ivysaur";
        case PokemonSpecies::Horsea: return "Horsea";
        case PokemonSpecies::Vulpix:      return "Vulpix";
        case PokemonSpecies::Rattata: return "Rattata";
        case PokemonSpecies::Venusaur: return "Venusaur";
        case PokemonSpecies::Psyduck: return "Psyduck";
        case PokemonSpecies::Growlithe:   return "Growlithe";
        case PokemonSpecies::Spearow: return "Spearow";
        case PokemonSpecies::Oddish: return "Oddish";
        case PokemonSpecies::Tentacool: return "Tentacool";
        case PokemonSpecies::Ponyta:      return "Ponyta";
        case PokemonSpecies::Meowth: return "Meowth";
        case PokemonSpecies::Gloom: return "Gloom";
        case PokemonSpecies::Staryu: return "Staryu";
        case PokemonSpecies::Charmeleon:  return "Charmeleon";
        case PokemonSpecies::Jigglypuff: return "Jigglypuff";
        case PokemonSpecies::Vileplume: return "Vileplume";
        case PokemonSpecies::Slowpoke: return "Slowpoke";
        case PokemonSpecies::Rapidash:    return "Rapidash";
        case PokemonSpecies::Farfetchd: return "Farfetch’d";
        case PokemonSpecies::Paras: return "Paras";
        case PokemonSpecies::Seel: return "Seel";
        case PokemonSpecies::Magmar:      return "Magmar";
        case PokemonSpecies::Raticate: return "Raticate";
        case PokemonSpecies::Parasect: return "Parasect";
        case PokemonSpecies::Wartortle: return "Wartortle";
        case PokemonSpecies::Ninetales:   return "Ninetales";
        case PokemonSpecies::Fearow: return "Fearow";
        case PokemonSpecies::Bellsprout: return "Bellsprout";
        case PokemonSpecies::Dewgong: return "Dewgong";
        case PokemonSpecies::Flareon:     return "Flareon";
        case PokemonSpecies::Wigglytuff: return "Wigglytuff";
        case PokemonSpecies::Weepinbell: return "Weepinbell";
        case PokemonSpecies::Blastoise: return "Blastoise";
        case PokemonSpecies::Arcanine:    return "Arcanine";
        case PokemonSpecies::Persian: return "Persian";
        case PokemonSpecies::Victreebel: return "Victreebel";
        case PokemonSpecies::Lapras: return "Lapras";
        case PokemonSpecies::Charizard:   return "Charizard";
        case PokemonSpecies::Kangaskhan: return "Kangaskhan";
        case PokemonSpecies::Tangela: return "Tangela";
        case PokemonSpecies::Gyarados: return "Gyarados";
        case PokemonSpecies::Moltres:     return "Moltres";
        case PokemonSpecies::Snorlax: return "Snorlax";
        default: return "Unknown";
    }
}

string Pokemon::typeToString(PokemonType type) {
    switch (type) {
        case PokemonType::Normal:   return "Normal";
        case PokemonType::Fire:     return "Fire";
        case PokemonType::Water:    return "Water";
        case PokemonType::Grass:    return "Grass";
        default: return "Unknown";
    }
}

int Pokemon::getLevel() const{
    return level;
}

void Pokemon::displayInfo() {
        cout << "Species: " << speciesToString(species)
                  << "\nType: " << typeToString(type)
                  << "\nHP: " << calculateHP()
                  << "\nBase Attack: " << baseAttack
                  << "\nBase Defense: " << baseDefense << "\n";
}

bool Pokemon::isTypeEffective(Pokemon defender) {
    // Super effective relationships
    if ((type == PokemonType::Fire && defender.type == PokemonType::Grass) ||
        (type == PokemonType::Water && defender.type == PokemonType::Fire) ||
        (type == PokemonType::Grass && defender.type == PokemonType::Water))
        return true;
    return false;
}
bool Pokemon::isTypeNotEffective(Pokemon defender) {
    // Not very effective relationships
    if ((type == PokemonType::Fire && defender.type == PokemonType::Water) ||
        (type == PokemonType::Water && defender.type == PokemonType::Grass) ||
        (type == PokemonType::Grass && defender.type == PokemonType::Fire))
        return true;
    return false;
}

int Pokemon::calculateHP() const{
    srand(time(0));
    return (2*baseHP+IV)*level/100+level+10;
}
int Pokemon::calculateAttack() const{
    srand(time(0));
    return (2*baseAttack+IV)*level/100+5;
}
int Pokemon::calculateDefense() const{
    srand(time(0));
    return (2*baseDefense+IV)*level/100+5;
}
