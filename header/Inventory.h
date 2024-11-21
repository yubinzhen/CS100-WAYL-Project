#include <vector>
#include <iostream>
#include <string>
#include "Item.h"
#include "StandardBall.h"
#include "GreatBall.h"
#include "UltraBall.h"
#include "StandardPotion.h"
#include "SuperPotion.h"
#include "HyperPotion.h"
#include "StandardRevive.h"
#include "MaxRevive.h"


using namespace std;

class Inventory
{
    private:
        vector<Item*> items = {new StandardBall(), new GreatBall(), new UltraBall(), new StandardPotion(), new SuperPotion(), new HyperPotion(), new StandardRevive(), new MaxRevive()};
        int money = 0;

    public:
        ~Inventory();
        void viewMyItems();
        void store();
        void storeItems();
        void addItem(Item* newItem);
        void buyItem();
        void sellItem();
        void accessPC();
};