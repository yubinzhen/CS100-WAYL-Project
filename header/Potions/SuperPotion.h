#pragma once
#include "Potion.h"
using namespace std;

class SuperPotion : public Potion
{
    public:
        SuperPotion() : Potion("Super Potion", 700, "A spray-type medicine for treating wounds. It can be used to restore 60 HP to a single Pokémon.", 60) {} 
};