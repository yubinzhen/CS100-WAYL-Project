#include "../../header/Pokemon/wildPokemon.h"

WildPokemon::WildPokemon(int area){
    int randomIndex = rand() % allPokemonSpecies.size();
    PokemonSpecies species = allPokemonSpecies[randomIndex/3*area];
    initializeStats(species);
    setBaseHP(getBaseHP()*1.5);
    setBaseAttack(getBaseAttack()*1.5);
    setBaseDefense(getBaseDefense()*1.5);
    int randomLevel = 5 + rand() % 10;
    for(int i=0;i<randomLevel;i++){
        addLevel();
    }
}

