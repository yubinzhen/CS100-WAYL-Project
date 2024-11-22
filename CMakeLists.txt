
cmake_minimum_required(VERSION 3.20)

include_directories(${CMAKE_SOURCE_DIR}/header)


add_subdirectory(googletest)

add_executable(testInventory
    InventoryTests/test.cpp
    src/Inventory.cpp
    src/Item.cpp
    src/Pokeballs/Pokeball.cpp
    src/Potions/Potion.cpp
    src/Revives/Revive.cpp
    src/Pokeballs/StandardBall.cpp
    src/Pokeballs/GreatBall.cpp
    src/Pokeballs/UltraBall.cpp
    src/Potions/StandardPotion.cpp
    src/Potions/SuperPotion.cpp
    src/Potions/HyperPotion.cpp
    src/Revives/StandardRevive.cpp
    src/Revives/MaxRevive.cpp
)


target_link_libraries(testInventory gtest gtest_main)