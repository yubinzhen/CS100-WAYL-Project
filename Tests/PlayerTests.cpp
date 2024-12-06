#include <gtest/gtest.h>
#include "../header/player.h"
#include "../header/Pokemon/pokemon.h"
#include "../header/Inventory.h"

// Test the default constructor
TEST(PlayerTests, DefaultConstructorInitializesCorrectly) {
    Player player;

    EXPECT_EQ(player.getMoney(), 0);  // Default money is 0
    EXPECT_TRUE(player.getCaughtPokemon().empty());  // No Pokémon caught
    EXPECT_TRUE(player.getTeam().empty());  // Team should be empty
}

// Test parameterized constructor
TEST(PlayerTests, ParameterizedConstructorInitializesCorrectly) {
    // Simplify: Only pass an inventory with no other logic
    Inventory* inventory = new Inventory();
    Player player(500, inventory);

    EXPECT_EQ(player.getMoney(), 500);  // Initial money
    EXPECT_TRUE(player.getCaughtPokemon().empty());  // No Pokémon caught
    EXPECT_TRUE(player.getTeam().empty());  // Team should be empty

    delete inventory;  // Clean up
}


// Test adding Pokémon to the caught Pokémon list
TEST(PlayerTests, AddPokemonWorks) {
    Player player;
    Pokemon* charmander = new Pokemon(PokemonSpecies::Charmander);

    player.addPokemon(charmander);  // Player now owns the Pokemon

    auto caughtPokemons = player.getCaughtPokemon();
    ASSERT_EQ(caughtPokemons.size(), 1);  // One Pokemon should be caught
    EXPECT_EQ(caughtPokemons[0]->getSpecies(), PokemonSpecies::Charmander);

    // No need to delete the Pokemon here, Player will handle it

    // No delete here if Player owns the Pokemon
}

// Test team management
TEST(PlayerTests, ManageTeamWorksCorrectly) {

}

// Test logout functionality
TEST(PlayerTests, LogoutWorks) {
    Player player;

    EXPECT_FALSE(player.logout());  // Assuming logout sets and returns `isEnded`
}

// Test inventory access
TEST(PlayerTests, AccessInventoryWorks) {
    Inventory* inventory = new Inventory();
    Player player(1000, inventory);

    player.accessInventory();  // Test accessing inventory (interactive logic not covered here)

    // Assuming inventory access modifies some state, validate here
    // For now, we ensure no crashes or exceptions occur
    SUCCEED();

    delete inventory;
}
/*
// Test battle participation
TEST(PlayerTests, EnterBattleWorks) {
    Player player;
    Pokemon* Charmander = new Pokemon(PokemonSpecies::Charmander);
    Pokemon* Bulbasaur = new Pokemon(PokemonSpecies::Bulbasaur);

    player.addPokemon(Charmander);
    player.addPokemon(Bulbasaur);

    player.viewEditPokemonTeam();  // Assume this allows team setup
    player.enterBattle();  // Test battle participation (actual battle logic not covered)

    // Assuming battle changes state, validate here
    SUCCEED();
}
*/