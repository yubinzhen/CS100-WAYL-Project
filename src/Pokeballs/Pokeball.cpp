#include "../../header/Pokeballs/Pokeball.h"

Pokeball::Pokeball(string n, int p, string desc, double cMultiplyer) {
    name = n;
    price = p;
    description = desc;
    catchMultiplyer = cMultiplyer;
}

void Pokeball::displayInformation()
{
    cout << "Name: " << name << endl;
    cout << "    Description: " << description << endl;
    cout << "    Catch Multiplyer: " << catchMultiplyer << "x" << endl;
    cout << "    Price: " << price << "¥" << endl;
} 

double Pokeball::getCatchMultiplyer() const
{
    return catchMultiplyer;
}