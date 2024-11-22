#include "../headerItemAndInventory/Item.h"

string Item::getName()
{
    return name;
}

int Item::getPrice()
{
    return price;
}

void Item::addAmount(int n)
{
    amount += n;
}

void Item::sellAmount(int n)
{
    amount -= n;
}

int Item::getAmount()
{
    return amount;
}

string Item::getDescription()
{
    return description; 
}