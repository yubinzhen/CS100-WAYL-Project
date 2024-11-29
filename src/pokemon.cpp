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

void Pokemon::displayInfo() {
        cout << "Species: " << speciesToString(species)
                  << "\nType: " << typeToString(type)
                  << "\nHP: " << calculateHP(level, baseHP)
                  << "\nBase Attack: " << baseAttack
                  << "\nBase Defense: " << baseDefense
                  << "\nBase Speed: " << baseSpeed << "\n";
}

void Pokemon::attack(PokemonSpecies attacker, PokemonSpecies defender) {
    cout << speciesToString(attacker) << " attacks " 
              << speciesToString(defender) << "!\n";
}

bool Pokemon::isTypeEffective(PokemonType attacker, PokemonType defender) {
    // Super effective relationships
    if ((attacker == PokemonType::Fire && defender == PokemonType::Grass) ||
        (attacker == PokemonType::Water && defender == PokemonType::Fire) ||
        (attacker == PokemonType::Grass && defender == PokemonType::Water))
        return true;
    return false;
}
bool Pokemon::isTypeNotEffective(PokemonType attacker, PokemonType defender) {
    // Not very effective relationships
    if ((attacker == PokemonType::Fire && defender == PokemonType::Water) ||
        (attacker == PokemonType::Water && defender == PokemonType::Grass) ||
        (attacker == PokemonType::Grass && defender == PokemonType::Fire))
        return true;
    return false;
}

int Pokemon::calculateHP(int level, int hp){
    srand(time(0));
    return 2*hp+rand()%31*level/100+level+10;
}