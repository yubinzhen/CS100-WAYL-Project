#include <vector>
#include <iostream>
#include <string>
#include "Item.h"
#include "Pokeballs/StandardBall.h"
#include "Pokeballs/GreatBall.h"
#include "Pokeballs/UltraBall.h"
#include "Potions/StandardPotion.h"
#include "Potions/SuperPotion.h"
#include "Potions/HyperPotion.h"
#include "Revives/StandardRevive.h"
#include "Revives/MaxRevive.h"


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