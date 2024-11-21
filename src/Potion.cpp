#include "../header/Potions/Potion.h"

Potion::Pokeball(string n, int p, string desc, int rValue) 
{
    name = n;
    price = p;
    description = desc;
    recoveryValue = rValue;
}

void Potion::displayInformation() override
{
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Recovery Value: " << recoveryValue << endl;
    cout << "Price: " << price << "¥" << endl;
    cout << "Current Amount: " << amount << endl;
} 

int Potion::getRecoveryValue()
{
    return recoveryValue;
}