#pragma once
#include "Pokeball.h"
using namespace std;

class UltraBall : public Pokeball
{
    public:
        UltraBall() : Pokeball("UltraBall Ball", 1200, "The Ultra Ball is a high-performance Poké Ball that offers an even greater chance of successfully catching Pokémon than the Great Ball.", 2.0) {} 
};