#pragma once
#include "Pokeball.h"
using namespace std;

class GreatBall : public Pokeball
{
    public:
        GreatBall() : Pokeball("Great Ball", 600, "The Great Ball is a Poké Ball that provides a higher chance of successfully catching Pokémon compared to the standard Poké Ball.", 1.5) {} 
};