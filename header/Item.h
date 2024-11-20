#pragma once
#include <string>
#include <iostream>

using namespace std;

class Item
{
    protected:
        string name;
        int price;
        string description;

    public:
        virtual void displayInformation() = 0;
        string getName()
        {
            return name;
        }

        int getPrice()
        {
            return price;
        }

        string getDescription()
        {
            return description; 
        }
};