#include <gtest/gtest.h>
#include "../header/Pokeballs/StandardBall.h"
#include "../header/Pokeballs/GreatBall.h"
#include "../header/Pokeballs/UltraBall.h"

//StandardBall
TEST(PokeballTests, StandardBallConstructor)
{
    StandardBall sb;

    EXPECT_EQ(sb.getName(), "Poké Ball");
    EXPECT_EQ(sb.getPrice(), 200);
    EXPECT_EQ(sb.getDescription(), "A Poké Ball is used to catch and store Pokémon.");
    EXPECT_EQ(sb.getAmount(), 0);
    EXPECT_EQ(sb.getCatchMultiplyer(), 1.0);
}

TEST(PokeballTests, StandardBallAdd)
{
    StandardBall sb;

    sb.addAmount(5);
    EXPECT_EQ(sb.getAmount(), 5);
}

TEST(PokeballTests, StandardBallAddLarge)
{
    StandardBall sb;

    sb.addAmount(100000);
    EXPECT_EQ(sb.getAmount(), 100000);
}

TEST(PokeballTests, StandardBallAddZero)
{
    StandardBall sb;

    sb.addAmount(0);
    EXPECT_EQ(sb.getAmount(), 0);
}

TEST(PokeballTests, StandardBallSell)
{
    StandardBall sb;

    sb.addAmount(10);
    sb.sellAmount(5);
    EXPECT_EQ(sb.getAmount(), 5);
}

//GreatBall
TEST(PokeballTests, GreatBallConstructor)
{
    GreatBall gb;

    EXPECT_EQ(gb.getName(), "Great Ball");
    EXPECT_EQ(gb.getPrice(), 600);
    EXPECT_EQ(gb.getDescription(), "The Great Ball provides a higher chance of catching Pokémon compared to the Poké Ball.");
    EXPECT_EQ(gb.getAmount(), 0);
    EXPECT_EQ(gb.getCatchMultiplyer(), 1.5);
}

TEST(PokeballTests, GreatBallAdd)
{
    GreatBall gb;

    gb.addAmount(5);
    EXPECT_EQ(gb.getAmount(), 5);
}

TEST(PokeballTests, GreatBallAddLarge)
{
    GreatBall gb;

    gb.addAmount(100000);
    EXPECT_EQ(gb.getAmount(), 100000);
}

TEST(PokeballTests, GreatBallAddZero)
{
    GreatBall gb;

    gb.addAmount(0);
    EXPECT_EQ(gb.getAmount(), 0);
}

TEST(PokeballTests, GreatBallSell)
{
    GreatBall gb;

    gb.addAmount(10);
    gb.sellAmount(5);
    EXPECT_EQ(gb.getAmount(), 5);
}

//UltraBall
TEST(PokeballTests, UltraBallConstructor)
{
    UltraBall ub;

    EXPECT_EQ(ub.getName(), "Ultra Ball");
    EXPECT_EQ(ub.getPrice(), 1200);
    EXPECT_EQ(ub.getDescription(), "The Ultra Ball offers an even greater chance of catching Pokémon than the Great Ball.");
    EXPECT_EQ(ub.getAmount(), 0);
    EXPECT_EQ(ub.getCatchMultiplyer(), 2.0);
}

TEST(PokeballTests, UltraBallAdd)
{
    UltraBall ub;

    ub.addAmount(100000);
    EXPECT_EQ(ub.getAmount(), 100000);
}

TEST(PokeballTests, UltraBallAddLarge)
{
    UltraBall ub;

    ub.addAmount(100000);
    EXPECT_EQ(ub.getAmount(), 100000);
}

TEST(PokeballTests, UltraBallAddZero)
{
    UltraBall ub;

    ub.addAmount(0);
    EXPECT_EQ(ub.getAmount(), 0);
}

TEST(PokeballTests, UltraBallSell)
{
    UltraBall ub;

    ub.addAmount(10);
    ub.sellAmount(5);
    EXPECT_EQ(ub.getAmount(), 5);
}