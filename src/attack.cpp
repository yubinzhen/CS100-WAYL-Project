#include "../header/attack.h"
#include <iostream>

Attack::Attack() : name("null attack"), power(0), isNormal(true) {}
Attack::Attack(const string& name, int power, bool normal) : name(name), power(power), isNormal(normal) {}

string Attack::getName() const {
    return name;
}
string Attack::setName(const string& name) {
    this->name = name;
}

int Attack::getpower() const {
    return power;
}
int Attack::setpower(int power) {
    this->power = power;
}
bool Attack::getIsNormal() const{
    return isNormal;
}
bool Attack::setIsNormal(bool normal){
    this->isNormal = normal;
}