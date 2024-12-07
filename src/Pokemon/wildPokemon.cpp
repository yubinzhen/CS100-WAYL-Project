#include "../../header/Pokemon/wildPokemon.h"

WildPokemon::WildPokemon(int area){
    int randomIndex = rand() % allPokemonSpecies.size();
    PokemonSpecies species = allPokemonSpecies[randomIndex/3*area];
    initializeStats(species);
    setBaseHP(getBaseHP()*1.5);
    setBaseAttack(getBaseAttack()*1.5);
    setBaseDefense(getBaseDefense()*1.5);
    int randomLevel = 5 + rand() % 10;
    level=1;
    for(int i=0;i<randomLevel;i++){
        addLevel();
    }
    exp=0;
    IV=rand()%31;
    vector<moves> selectedMoves;
    if (type != PokemonType::Normal) {
        if(type == PokemonType::Fire){
            selectedMoves.push_back(fireTypeMoves[rand()%fireTypeMoves.size()]); 
            selectedMoves.push_back(fireTypeMoves[rand()%fireTypeMoves.size()]);
        }
        else if(type == PokemonType::Water){
            selectedMoves.push_back(waterTypeMoves[rand()%waterTypeMoves.size()]); 
            selectedMoves.push_back(waterTypeMoves[rand()%waterTypeMoves.size()]);
        }
        else if(type == PokemonType::Grass){
            selectedMoves.push_back(grassTypeMoves[rand()%grassTypeMoves.size()]); 
            selectedMoves.push_back(grassTypeMoves[rand()%grassTypeMoves.size()]); 
        }
    }
    selectedMoves.push_back(normalTypeMoves[rand() % normalTypeMoves.size()]);
    move1 = new Attack(selectedMoves[0]); 
    move2 = new Attack(selectedMoves[1]); 
    move3 = new Attack(selectedMoves[2]); 
    cout << "A wild " << speciesToString(species) << " appeared!" << endl;
}

Attack* WildPokemon::wildPokemonMove(Pokemon* opponent){
    Pokemon* dummy = new Pokemon();
    dummy = opponent;
    int move1Damage=dummy->getMove1()->calculateDamage(dummy, opponent);
    int max = move1Damage;
    int move2Damage=dummy->getMove2()->calculateDamage(dummy, opponent);
    int move3Damage=dummy->getMove3()->calculateDamage(dummy, opponent);
    if(move2Damage >max){
        max = dummy->getMove2()->calculateDamage(dummy, opponent);
    }
    if(move3Damage >max){
        max = dummy->getMove3()->calculateDamage(dummy, opponent);
    }
    Attack* thisMove;
    if(move1Damage==max){
        thisMove=dummy->getMove1();
    }
    else if(move2Damage==max){
        thisMove= dummy->getMove2();
    }
    else{
        thisMove=dummy->getMove3();
    }
    delete dummy;
    return thisMove;
}

