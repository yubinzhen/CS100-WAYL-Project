#include <vector>
#include <iostream>

using namespace std;

class Inventory
{
    private:
        vector<Pokeball> pokeballs;
        vector<Revive> revives;
        vector<Potion> potions;
        vector<Pokemon> pc;

    public:
        void myItems();
        void store();
        void addItem(Item newItem);
        void buyItem(Item item);
        void accessPC();
};