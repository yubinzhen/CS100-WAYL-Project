#pragma once
#include "Pokeball.h"
using namespace std;

class StandardBall : public Pokeball
{
    public:
        StandardBall() : Pokeball("Poké Ball", 200, "A Poké Ball is used to catch and store Pokémon.", 1.0) {} 
};