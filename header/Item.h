#pragma once
#include <string>
#include <iostream>

using namespace std;

class Item
{
    protected:
        string name;
        int price;
        int amount = 0;
        string description;

    public:
        virtual void displayInformation() = 0;
        string getName();
        int getPrice();
        void addAmount(int n);
        void sellAmount();
        int getAmount();
        string getDescription();
};