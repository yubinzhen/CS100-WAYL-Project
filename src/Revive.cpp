#include "../header/Revives/Revive.h"

Revive::Pokeball(string n, int p, string desc, double rMultiplyer) 
{
    name = n;
    price = p;
    description = desc;
    reviveMultiplyer = rMultiplyer;
}

void Revive::displayInformation() override
{
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Revive Multiplyer: " << reviveMultiplyer << "x" << endl;
    cout << "Price: " << price << "¥" << endl;
    cout << "Current Amount: " << amount << endl;
} 

double Revive::getreviveMultiplyer()
{
    return reviveMultiplyer;
}