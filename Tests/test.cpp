#include "gtest/gtest.h"
#include "../header/Item.h"
#include "../header/Inventory.h"
#include "../header/Pokeballs/StandardBall.h"
#include "../header/Pokeballs/GreatBall.h"
#include "../header/Pokeballs/UltraBall.h"
#include "../header/Potions/StandardPotion.h"
#include "../header/Potions/SuperPotion.h"
#include "../header/Potions/HyperPotion.h"
#include "../header/Revives/StandardRevive.h"
#include "../header/Revives/MaxRevive.h"

int main ()
{
    Inventory inv;
    inv.addMoney(2000);
    inv.store();
    return 0;
}