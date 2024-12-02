#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <sstream>
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
        void sellAmount(int n);
        int getAmount();
        string getDescription();
};

#endif