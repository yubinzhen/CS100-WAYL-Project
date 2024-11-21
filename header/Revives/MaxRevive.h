#pragma once
#include "Revive.h"
using namespace std;

class MaxRevive : public Revive
{
    public:
        MaxRevive() : Revive("Max Revive", 2500, "A medicine that can be used to revive a fainted Pokémon. It will restore all of the Pokémon’s max HP", 1) {} 
};