#pragma once
#include "Revive.h"
using namespace std;

class StandardRevive : public Revive
{
    public:
        StandardRevive() : Revive("Revive", 1000, "A medicine that can be used to revive a fainted Pokémon. It will restore half of the Pokémon’s maximum HP.", 0.5) {} 
};