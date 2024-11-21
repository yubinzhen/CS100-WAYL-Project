#pragma once
#include "Potion.h"
using namespace std;

class StandardPotion : public Potion
{
    public:
        StandardPotion() : Potion("Potion", 200, "A spray-type medicine for treating wounds. It can be used to restore 20 HP to a single Pokémon.", 20) {} 
};