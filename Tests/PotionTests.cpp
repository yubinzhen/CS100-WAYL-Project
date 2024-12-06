#include <gtest/gtest.h>
#include "../header/Potions/StandardPotion.h"
#include "../header/Potions/SuperPotion.h"
#include "../header/Potions/HyperPotion.h"

//StandardPotion
TEST(PotionTests, StandardPotionConstructor)
{
    StandardPotion sp;

    EXPECT_EQ(sp.getName(), "Potion");
    EXPECT_EQ(sp.getPrice(), 200);
    EXPECT_EQ(sp.getDescription(), "A spray-type medicine for treating wounds. Restores 20 HP to a single Pokémon.");
    EXPECT_EQ(sp.getAmount(), 0);
    EXPECT_EQ(sp.getRecoveryValue(), 20);
}

TEST(PotionTests, StandardPotionAdd)
{
    StandardPotion sp;

    sp.addAmount(5);
    EXPECT_EQ(sp.getAmount(), 5);
}

TEST(PotionTests, StandardPotionAddLarge)
{
    StandardPotion sp;

    sp.addAmount(100000);
    EXPECT_EQ(sp.getAmount(), 100000);
}

TEST(PotionTests, StandardPotionAddZero)
{
    StandardPotion sp;

    sp.addAmount(0);
    EXPECT_EQ(sp.getAmount(), 0);
}

TEST(PotionTests, StandardPotionSell)
{
    StandardPotion sp;

    sp.addAmount(10);
    sp.sellAmount(5);
    EXPECT_EQ(sp.getAmount(), 5);
}

//SuperPotion
TEST(PotionTests, SuperPotionConstructor)
{
    SuperPotion sp;

    EXPECT_EQ(sp.getName(), "Super Potion");
    EXPECT_EQ(sp.getPrice(), 700);
    EXPECT_EQ(sp.getDescription(), "A spray-type medicine for treating wounds. Restores 60 HP to a single Pokémon.");
    EXPECT_EQ(sp.getAmount(), 0);
    EXPECT_EQ(sp.getRecoveryValue(), 60);
}

TEST(PotionTests, SuperPotionAdd)
{
    SuperPotion sp;

    sp.addAmount(5);
    EXPECT_EQ(sp.getAmount(), 5);
}

TEST(PotionTests, SuperPotionAddLarge)
{
    SuperPotion sp;

    sp.addAmount(100000);
    EXPECT_EQ(sp.getAmount(), 100000);
}

TEST(PotionTests, SuperPotionAddZero)
{
    SuperPotion sp;

    sp.addAmount(0);
    EXPECT_EQ(sp.getAmount(), 0);
}

TEST(PotionTests, SuperPotionSell)
{
    SuperPotion sp;

    sp.addAmount(10);
    sp.sellAmount(5);
    EXPECT_EQ(sp.getAmount(), 5);
}

//HyperPotion
TEST(PotionTests, HyperPotionConstructor)
{
    HyperPotion hp;

    EXPECT_EQ(hp.getName(), "Hyper Potion");
    EXPECT_EQ(hp.getPrice(), 1200);
    EXPECT_EQ(hp.getDescription(), "A spray-type medicine for treating wounds. Restores 120 HP to a single Pokémon.");
    EXPECT_EQ(hp.getAmount(), 0);
    EXPECT_EQ(hp.getRecoveryValue(), 120);
}

TEST(PotionTests, HyperPotionAdd)
{
    HyperPotion hp;

    hp.addAmount(5);
    EXPECT_EQ(hp.getAmount(), 5);
}

TEST(PotionTests, HyperPotionAddLarge)
{
    HyperPotion hp;

    hp.addAmount(100000);
    EXPECT_EQ(hp.getAmount(), 100000);
}

TEST(PotionTests, HyperPotionAddZero)
{
    HyperPotion hp;

    hp.addAmount(0);
    EXPECT_EQ(hp.getAmount(), 0);
}

TEST(PotionTests, HyperPotionSell)
{
    HyperPotion hp;

    hp.addAmount(10);
    hp.sellAmount(5);
    EXPECT_EQ(hp.getAmount(), 5);
}
