#include <gtest/gtest.h>
#include "../header/Revives/StandardRevive.h"
#include "../header/Revives/MaxRevive.h"

//StandardRevive
TEST(ReviveTests, StandardReviveConstructor)
{
    StandardRevive sr;

    EXPECT_EQ(sr.getName(), "Revive");
    EXPECT_EQ(sr.getPrice(), 1000);
    EXPECT_EQ(sr.getDescription(), "A medicine that can be used to revive a fainted Pokémon. Restores half of the Pokémon’s maximum HP.");
    EXPECT_EQ(sr.getAmount(), 0);
    EXPECT_EQ(sr.getReviveMultiplyer(), 0.5);
}

TEST(ReviveTests, StandardReviveAdd)
{
    StandardRevive sr;

    sr.addAmount(5);
    EXPECT_EQ(sr.getAmount(), 5);
}

TEST(ReviveTests, StandardReviveAddLarge)
{
    StandardRevive sr;

    sr.addAmount(100000);
    EXPECT_EQ(sr.getAmount(), 100000);
}

TEST(ReviveTests, StandardReviveAddZero)
{
    StandardRevive sr;

    sr.addAmount(0);
    EXPECT_EQ(sr.getAmount(), 0);
}

TEST(ReviveTests, StandardReviveSell)
{
    StandardRevive sr;

    sr.addAmount(10);
    sr.sellAmount(5);
    EXPECT_EQ(sr.getAmount(), 5);
}


//MaxRevive
TEST(ReviveTests, MaxReviveConstructor)
{
    MaxRevive mr;

    EXPECT_EQ(mr.getName(), "Max Revive");
    EXPECT_EQ(mr.getPrice(), 2500);
    EXPECT_EQ(mr.getDescription(), "A medicine that can be used to revive a fainted Pokémon. Restores all of the Pokémon’s max HP");
    EXPECT_EQ(mr.getAmount(), 0);
    EXPECT_EQ(mr.getReviveMultiplyer(), 1.0);
}

TEST(ReviveTests, MaxReviveAdd)
{
    MaxRevive mr;

    mr.addAmount(5);
    EXPECT_EQ(mr.getAmount(), 5);
}

TEST(ReviveTests, MaxReviveAddLarge)
{
    MaxRevive mr;

    mr.addAmount(100000);
    EXPECT_EQ(mr.getAmount(), 100000);
}

TEST(ReviveTests, MaxReviveAddZero)
{
    MaxRevive mr;

    mr.addAmount(0);
    EXPECT_EQ(mr.getAmount(), 0);
}

TEST(ReviveTests, MaxReviveSell)
{
    MaxRevive mr;

    mr.addAmount(10);
    mr.sellAmount(5);
    EXPECT_EQ(mr.getAmount(), 5);
}