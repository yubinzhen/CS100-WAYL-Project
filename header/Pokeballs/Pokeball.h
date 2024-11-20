#pragma once
#include <string>
#include "Item.h"

using namespace std;

class Pokeball : public Item
{
    protected:
        double catchRate;

    public:
        Pokeball(string n, int p, string desc, double cRate) {
            name = n;
            price = p;
            description = desc;
            catchRate = cRate;
        }

        void displayInformation() override
        {
            cout << "Name: " << name << endl;
            cout << "Description: " << description << endl;
            cout << "Catch Rate: " << catchRate << endl;
            cout << "Price: " << price << "¥" << endl;
        } 

        double getCatchRate()
        {
            return catchRate;
        }
};