#include "pokemon.h"
string Pokemon::speciesToString(PokemonSpecies species) {
    switch (species) {
        case PokemonSpecies::Bulbasaur:   return "Bulbasaur";
        case PokemonSpecies::Ivysaur:     return "Ivysaur";
        case PokemonSpecies::Venusaur:    return "Venusaur";
        case PokemonSpecies::Charmander:  return "Charmander";
        case PokemonSpecies::Charmeleon:  return "Charmeleon";
        case PokemonSpecies::Charizard:   return "Charizard";
        case PokemonSpecies::Squirtle:    return "Squirtle";
        case PokemonSpecies::Wartortle:   return "Wartortle";
        case PokemonSpecies::Blastoise:   return "Blastoise";
        case PokemonSpecies::Caterpie:    return "Caterpie";
        case PokemonSpecies::Metapod:     return "Metapod";
        case PokemonSpecies::Butterfree:  return "Butterfree";
        case PokemonSpecies::Weedle:      return "Weedle";
        case PokemonSpecies::Kakuna:      return "Kakuna";
        case PokemonSpecies::Beedrill:    return "Beedrill";
        case PokemonSpecies::Pidgey:      return "Pidgey";
        case PokemonSpecies::Pidgeotto:   return "Pidgeotto";
        case PokemonSpecies::Pidgeot:     return "Pidgeot";
        case PokemonSpecies::Rattata:     return "Rattata";
        case PokemonSpecies::Raticate:    return "Raticate";
        case PokemonSpecies::Spearow:     return "Spearow";
        case PokemonSpecies::Fearow:      return "Fearow";
        case PokemonSpecies::Ekans:       return "Ekans";
        case PokemonSpecies::Arbok:       return "Arbok";
        case PokemonSpecies::Pikachu:     return "Pikachu";
        case PokemonSpecies::Raichu:      return "Raichu";
        case PokemonSpecies::Sandshrew:   return "Sandshrew";
        case PokemonSpecies::Sandslash:   return "Sandslash";
        case PokemonSpecies::NidoranF:    return "Nidoran♀";
        case PokemonSpecies::Nidorina:    return "Nidorina";
        case PokemonSpecies::Nidoqueen:   return "Nidoqueen";
        case PokemonSpecies::NidoranM:    return "Nidoran♂";
        case PokemonSpecies::Nidorino:    return "Nidorino";
        case PokemonSpecies::Nidoking:    return "Nidoking";
        case PokemonSpecies::Clefairy:    return "Clefairy";
        case PokemonSpecies::Clefable:    return "Clefable";
        case PokemonSpecies::Vulpix:      return "Vulpix";
        case PokemonSpecies::Ninetales:   return "Ninetales";
        case PokemonSpecies::Jigglypuff:  return "Jigglypuff";
        case PokemonSpecies::Wigglytuff:  return "Wigglytuff";
        case PokemonSpecies::Zubat:       return "Zubat";
        case PokemonSpecies::Golbat:      return "Golbat";
        case PokemonSpecies::Oddish:      return "Oddish";
        case PokemonSpecies::Gloom:       return "Gloom";
        case PokemonSpecies::Vileplume:   return "Vileplume";
        case PokemonSpecies::Paras:       return "Paras";
        case PokemonSpecies::Parasect:    return "Parasect";
        case PokemonSpecies::Venonat:     return "Venonat";
        case PokemonSpecies::Venomoth:    return "Venomoth";
        case PokemonSpecies::Diglett:     return "Diglett";
        case PokemonSpecies::Dugtrio:     return "Dugtrio";
        case PokemonSpecies::Meowth:      return "Meowth";
        case PokemonSpecies::Persian:     return "Persian";
        case PokemonSpecies::Psyduck:     return "Psyduck";
        case PokemonSpecies::Golduck:     return "Golduck";
        case PokemonSpecies::Mankey:      return "Mankey";
        case PokemonSpecies::Primeape:    return "Primeape";
        case PokemonSpecies::Growlithe:   return "Growlithe";
        case PokemonSpecies::Arcanine:    return "Arcanine";
        case PokemonSpecies::Poliwag:     return "Poliwag";
        case PokemonSpecies::Poliwhirl:   return "Poliwhirl";
        case PokemonSpecies::Poliwrath:   return "Poliwrath";
        case PokemonSpecies::Abra:        return "Abra";
        case PokemonSpecies::Kadabra:     return "Kadabra";
        case PokemonSpecies::Alakazam:    return "Alakazam";
        case PokemonSpecies::Machop:      return "Machop";
        case PokemonSpecies::Machoke:     return "Machoke";
        case PokemonSpecies::Machamp:     return "Machamp";
        case PokemonSpecies::Bellsprout:  return "Bellsprout";
        case PokemonSpecies::Weepinbell:  return "Weepinbell";
        case PokemonSpecies::Victreebel:  return "Victreebel";
        case PokemonSpecies::Tentacool:   return "Tentacool";
        case PokemonSpecies::Tentacruel:  return "Tentacruel";
        case PokemonSpecies::Geodude:     return "Geodude";
        case PokemonSpecies::Graveler:    return "Graveler";
        case PokemonSpecies::Golem:       return "Golem";
        case PokemonSpecies::Ponyta:      return "Ponyta";
        case PokemonSpecies::Rapidash:    return "Rapidash";
        case PokemonSpecies::Slowpoke:    return "Slowpoke";
        case PokemonSpecies::Slowbro:     return "Slowbro";
        case PokemonSpecies::Magnemite:   return "Magnemite";
        case PokemonSpecies::Magneton:    return "Magneton";
        case PokemonSpecies::Farfetchd:   return "Farfetch’d";
        case PokemonSpecies::Doduo:       return "Doduo";
        case PokemonSpecies::Dodrio:      return "Dodrio";
        case PokemonSpecies::Seel:        return "Seel";
        case PokemonSpecies::Dewgong:     return "Dewgong";
        case PokemonSpecies::Grimer:      return "Grimer";
        case PokemonSpecies::Muk:         return "Muk";
        case PokemonSpecies::Shellder:    return "Shellder";
        case PokemonSpecies::Cloyster:    return "Cloyster";
        case PokemonSpecies::Gastly:      return "Gastly";
        case PokemonSpecies::Haunter:     return "Haunter";
        case PokemonSpecies::Gengar:      return "Gengar";
        case PokemonSpecies::Onix:        return "Onix";
        case PokemonSpecies::Drowzee:     return "Drowzee";
        case PokemonSpecies::Hypno:       return "Hypno";
        case PokemonSpecies::Krabby:      return "Krabby";
        case PokemonSpecies::Kingler:     return "Kingler";
        case PokemonSpecies::Voltorb:     return "Voltorb";
        case PokemonSpecies::Electrode:   return "Electrode";
        case PokemonSpecies::Exeggcute:   return "Exeggcute";
        case PokemonSpecies::Exeggutor:   return "Exeggutor";
        case PokemonSpecies::Cubone:      return "Cubone";
        case PokemonSpecies::Marowak:     return "Marowak";
        case PokemonSpecies::Hitmonlee:   return "Hitmonlee";
        case PokemonSpecies::Hitmonchan:  return "Hitmonchan";
        case PokemonSpecies::Lickitung:   return "Lickitung";
        case PokemonSpecies::Koffing:     return "Koffing";
        case PokemonSpecies::Weezing:     return "Weezing";
        case PokemonSpecies::Rhyhorn:     return "Rhyhorn";
        case PokemonSpecies::Rhydon:      return "Rhydon";
        case PokemonSpecies::Chansey:     return "Chansey";
        case PokemonSpecies::Tangela:     return "Tangela";
        case PokemonSpecies::Kangaskhan:  return "Kangaskhan";
        case PokemonSpecies::Horsea:      return "Horsea";
        case PokemonSpecies::Seadra:      return "Seadra";
        case PokemonSpecies::Goldeen:     return "Goldeen";
        case PokemonSpecies::Seaking:     return "Seaking";
        case PokemonSpecies::Staryu:      return "Staryu";
        case PokemonSpecies::Starmie:     return "Starmie";
        case PokemonSpecies::MrMime:      return "Mr. Mime";
        case PokemonSpecies::Scyther:     return "Scyther";
        case PokemonSpecies::Jynx:        return "Jynx";
        case PokemonSpecies::Electabuzz:  return "Electabuzz";
        case PokemonSpecies::Magmar:      return "Magmar";
        case PokemonSpecies::Pinsir:      return "Pinsir";
        case PokemonSpecies::Tauros:      return "Tauros";
        case PokemonSpecies::Magikarp:    return "Magikarp";
        case PokemonSpecies::Gyarados:    return "Gyarados";
        case PokemonSpecies::Lapras:      return "Lapras";
        case PokemonSpecies::Ditto:       return "Ditto";
        case PokemonSpecies::Eevee:       return "Eevee";
        case PokemonSpecies::Vaporeon:    return "Vaporeon";
        case PokemonSpecies::Jolteon:     return "Jolteon";
        case PokemonSpecies::Flareon:     return "Flareon";
        case PokemonSpecies::Porygon:     return "Porygon";
        case PokemonSpecies::Omanyte:     return "Omanyte";
        case PokemonSpecies::Omastar:     return "Omastar";
        case PokemonSpecies::Kabuto:      return "Kabuto";
        case PokemonSpecies::Kabutops:    return "Kabutops";
        case PokemonSpecies::Aerodactyl:  return "Aerodactyl";
        case PokemonSpecies::Snorlax:     return "Snorlax";
        case PokemonSpecies::Articuno:    return "Articuno";
        case PokemonSpecies::Zapdos:      return "Zapdos";
        case PokemonSpecies::Moltres:     return "Moltres";
        case PokemonSpecies::Dratini:     return "Dratini";
        case PokemonSpecies::Dragonair:   return "Dragonair";
        case PokemonSpecies::Dragonite:   return "Dragonite";
        case PokemonSpecies::Mewtwo:      return "Mewtwo";
        case PokemonSpecies::Mew:         return "Mew";
        default: return "Unknown";
    }
}

string Pokemon::typeToString(PokemonType type) {
    switch (type) {
        case PokemonType::Normal:   return "Normal";
        case PokemonType::Fire:     return "Fire";
        case PokemonType::Water:    return "Water";
        case PokemonType::Grass:    return "Grass";
        case PokemonType::Electric: return "Electric";
        case PokemonType::Ice:      return "Ice";
        case PokemonType::Fighting: return "Fighting";
        case PokemonType::Poison:   return "Poison";
        case PokemonType::Ground:   return "Ground";
        case PokemonType::Flying:   return "Flying";
        case PokemonType::Psychic:  return "Psychic";
        case PokemonType::Bug:      return "Bug";
        case PokemonType::Rock:     return "Rock";
        case PokemonType::Ghost:    return "Ghost";
        case PokemonType::Dragon:   return "Dragon";
        default: return "Unknown";
    }
}

void Pokemon::displayInfo() {
        cout << "Species: " << speciesToString(species)
                  << "\nType: " << typeToString(type)
                  << "\nHP: " << hp
                  << "\nAttack: " << damage << "\n";
}

void Pokemon::attack(PokemonSpecies attacker, PokemonSpecies defender) {
    cout << speciesToString(attacker) << " attacks " 
              << speciesToString(defender) << "!\n";
}

bool Pokemon::isTypeEffective(PokemonType attacker, PokemonType defender) {
    if ((attacker == PokemonType::Normal && defender == PokemonType::Ghost) || 
        (attacker == PokemonType::Ghost && defender == PokemonType::Normal)) {
        // Immune relationships
        return false;
    }

    // Super effective relationships
    if ((attacker == PokemonType::Fire && (defender == PokemonType::Grass || defender == PokemonType::Ice || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Water && (defender == PokemonType::Fire || defender == PokemonType::Ground || defender == PokemonType::Rock)) ||
        (attacker == PokemonType::Grass && (defender == PokemonType::Water || defender == PokemonType::Ground || defender == PokemonType::Rock)) ||
        (attacker == PokemonType::Electric && (defender == PokemonType::Water || defender == PokemonType::Flying)) ||
        (attacker == PokemonType::Ice && (defender == PokemonType::Grass || defender == PokemonType::Ground || defender == PokemonType::Flying || defender == PokemonType::Dragon)) ||
        (attacker == PokemonType::Fighting && (defender == PokemonType::Normal || defender == PokemonType::Ice || defender == PokemonType::Rock)) ||
        (attacker == PokemonType::Poison && (defender == PokemonType::Grass || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Ground && (defender == PokemonType::Fire || defender == PokemonType::Electric || defender == PokemonType::Poison || defender == PokemonType::Rock)) ||
        (attacker == PokemonType::Flying && (defender == PokemonType::Grass || defender == PokemonType::Fighting || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Psychic && (defender == PokemonType::Fighting || defender == PokemonType::Poison)) ||
        (attacker == PokemonType::Bug && (defender == PokemonType::Grass || defender == PokemonType::Psychic)) ||
        (attacker == PokemonType::Rock && (defender == PokemonType::Fire || defender == PokemonType::Ice || defender == PokemonType::Flying || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Ghost && (defender == PokemonType::Ghost || defender == PokemonType::Psychic)) ||
        (attacker == PokemonType::Dragon && defender == PokemonType::Dragon)) {
        return true;
    }

    // Not very effective relationships
    if ((attacker == PokemonType::Fire && (defender == PokemonType::Fire || defender == PokemonType::Water || defender == PokemonType::Rock || defender == PokemonType::Dragon)) ||
        (attacker == PokemonType::Water && (defender == PokemonType::Water || defender == PokemonType::Grass || defender == PokemonType::Dragon)) ||
        (attacker == PokemonType::Grass && (defender == PokemonType::Grass || defender == PokemonType::Fire || defender == PokemonType::Poison || defender == PokemonType::Flying || defender == PokemonType::Bug || defender == PokemonType::Dragon)) ||
        (attacker == PokemonType::Electric && (defender == PokemonType::Electric || defender == PokemonType::Grass || defender == PokemonType::Dragon)) ||
        (attacker == PokemonType::Ice && (defender == PokemonType::Fire || defender == PokemonType::Water || defender == PokemonType::Ice)) ||
        (attacker == PokemonType::Fighting && (defender == PokemonType::Poison || defender == PokemonType::Flying || defender == PokemonType::Psychic || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Poison && (defender == PokemonType::Poison || defender == PokemonType::Ground || defender == PokemonType::Rock || defender == PokemonType::Ghost)) ||
        (attacker == PokemonType::Ground && (defender == PokemonType::Grass || defender == PokemonType::Bug)) ||
        (attacker == PokemonType::Flying && (defender == PokemonType::Electric || defender == PokemonType::Rock)) ||
        (attacker == PokemonType::Psychic && defender == PokemonType::Psychic) ||
        (attacker == PokemonType::Bug && (defender == PokemonType::Fire || defender == PokemonType::Fighting || defender == PokemonType::Poison || defender == PokemonType::Flying || defender == PokemonType::Ghost)) ||
        (attacker == PokemonType::Rock && (defender == PokemonType::Fighting || defender == PokemonType::Ground)) ||
        (attacker == PokemonType::Ghost && defender == PokemonType::Normal) || 
        (attacker == PokemonType::Normal && defender == PokemonType::Rock)) {
        return false;
    }

    // Default: Not a super effective or immune relationship
    return false;
}
