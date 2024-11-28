#include "../header/attack.h"
#include <iostream>

Attack::Attack() : name("null attack"), damage(0) {}
Attack::Attack(const string& name, int damage) : name(name), damage(damage) {}

string Attack::getName() const {
    return name;
}
string Attack::setName(const string& name) {
    this->name = name;
}

int Attack::getDamage() const {
    return damage;
}
int Attack::setDamage(int damage) {
    this->damage = damage;
}