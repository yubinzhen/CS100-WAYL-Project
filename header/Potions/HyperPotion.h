#pragma once
#include "Potion.h"
using namespace std;

class HyperPotion : public Potion
{
    public:
        HyperPotion() : Potion("Hyper Potion", 1200, "A spray-type medicine for treating wounds. It can be used to restore 120 HP to a single Pokémon.", 120) {} 
};