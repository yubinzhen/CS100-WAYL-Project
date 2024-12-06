#include <gtest/gtest.h>
#include <sstream>
#include <iostream>
#include "../header/Inventory.h"
#include "../header/Pokeballs/StandardBall.h"
#include "../header/Pokeballs/GreatBall.h"
#include "../header/Pokeballs/UltraBall.h"
#include "../header/Potions/StandardPotion.h"
#include "../header/Potions/SuperPotion.h"
#include "../header/Potions/HyperPotion.h"
#include "../header/Revives/StandardRevive.h"
#include "../header/Revives/MaxRevive.h"

using namespace std;

TEST(InventoryTest, ViewMyItems) 
{
    Inventory inventory;

    stringstream output;
    streambuf* oldCoutBuf = cout.rdbuf(output.rdbuf());

    inventory.viewMyItems();

    cout.rdbuf(oldCoutBuf);

    string expectedOutput = 
        "Current Items:\n\n"
        "(1) Name: Poké Ball\n"
        "    Amount: 0\n\n"
        "(2) Name: Great Ball\n"
        "    Amount: 0\n\n"
        "(3) Name: Ultra Ball\n"
        "    Amount: 0\n\n"
        "(4) Name: Potion\n"
        "    Amount: 0\n\n"
        "(5) Name: Super Potion\n"
        "    Amount: 0\n\n"
        "(6) Name: Hyper Potion\n"
        "    Amount: 0\n\n"
        "(7) Name: Revive\n"
        "    Amount: 0\n\n"
        "(8) Name: Max Revive\n"
        "    Amount: 0\n";

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(InventoryTest, StoreItems) 
{
    Inventory inventory;

    stringstream output;
    streambuf* oldCoutBuf = cout.rdbuf(output.rdbuf());

    inventory.storeItems();

    cout.rdbuf(oldCoutBuf);

    string expectedOutput = 
        "Store:\n"
        "(1) Name: Poké Ball\n"
        "    Description: A Poké Ball is used to catch and store Pokémon.\n"
        "    Catch Multiplyer: 1x\n"
        "    Price: 200¥\n\n"
        "(2) Name: Great Ball\n"
        "    Description: The Great Ball provides a higher chance of catching Pokémon compared to the Poké Ball.\n"
        "    Catch Multiplyer: 1.5x\n"
        "    Price: 600¥\n\n"
        "(3) Name: Ultra Ball\n"
        "    Description: The Ultra Ball offers an even greater chance of catching Pokémon than the Great Ball.\n"
        "    Catch Multiplyer: 2x\n"
        "    Price: 1200¥\n\n"
        "(4) Name: Potion\n"
        "    Description: A spray-type medicine for treating wounds. Restores 20 HP to a single Pokémon.\n"
        "    Recovery Value: 20\n"
        "    Price: 200¥\n\n"
        "(5) Name: Super Potion\n"
        "    Description: A spray-type medicine for treating wounds. Restores 60 HP to a single Pokémon.\n"
        "    Recovery Value: 60\n"
        "    Price: 700¥\n\n"
        "(6) Name: Hyper Potion\n"
        "    Description: A spray-type medicine for treating wounds. Restores 120 HP to a single Pokémon.\n"
        "    Recovery Value: 120\n"
        "    Price: 1200¥\n\n"
        "(7) Name: Revive\n"
        "    Description: A medicine that can be used to revive a fainted Pokémon. Restores half of the Pokémon’s maximum HP.\n"
        "    Revive Multiplyer: 0.5x\n"
        "    Price: 1000¥\n\n"
        "(8) Name: Max Revive\n"
        "    Description: A medicine that can be used to revive a fainted Pokémon. Restores all of the Pokémon’s max HP\n"
        "    Revive Multiplyer: 1x\n"
        "    Price: 2500¥\n\n";

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(InventoryTest, addMoney) 
{
    Inventory inventory;

    inventory.addMoney(10000);
    EXPECT_EQ(inventory.getMoney(), 10000);
}

TEST(InventoryTest, ClearInputHelper_InvalidInputThenValid) 
{

    istringstream input("invalid\n3\n");
    cin.rdbuf(input.rdbuf());

    Inventory inventory;
    int result = inventory.clearInputHelper();

    EXPECT_EQ(result, 2); 
}

struct InputOutputRedirect 
{
    istringstream input;
    ostringstream output;

    InputOutputRedirect(const string& input_data) : input(input_data) 
    {
        cin.rdbuf(input.rdbuf());
        cout.rdbuf(output.rdbuf());
    }

    ~InputOutputRedirect() 
    {
        cin.rdbuf(nullptr);
        cout.rdbuf(nullptr);
    }
};

TEST(InventoryTest, SelectOptionHelper1_ValidInput) 
{
    InputOutputRedirect io("3\n");

    Inventory inventory;
    int result = inventory.selectOptionHelper1();

    EXPECT_EQ(result, 2);
}

TEST(InventoryTest, AmountHelper_ValidInput) 
{
    InputOutputRedirect io("5\n");

    Inventory inventory;
    int result = inventory.amountHelper();

    EXPECT_EQ(result, 5);
}

TEST(InventoryTest, SelectOptionHelper2_ValidOption) 
{
    InputOutputRedirect io("1\n");

    Inventory inventory;
    bool result = inventory.selectOptionHelper2();

    EXPECT_TRUE(result);
}

TEST(InventoryTest, GetMoney_InitialValue)
{
    Inventory inventory;
    EXPECT_EQ(inventory.getMoney(), 0);
}