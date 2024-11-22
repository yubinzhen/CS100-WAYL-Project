#pragma once
#include <string>
#include "Item.h"

using namespace std;

class Pokeball : public Item
{
    protected:
        double catchMultiplyer;

    public:
        Pokeball(string n, int p, string desc, double cMultiplyer);
        void displayInformation() override;
        double getCatchMultiplyer();
};