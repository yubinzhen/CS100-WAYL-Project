#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "pokemon.h"

using std::string;

class Attack {
    private:
        string name;
        int damage;
    public:
        Attack();
        Attack(const string& name, int damage);

        string getName() const;
        string setName(const string& name);

        int getDamage() const;
        int setDamage(int damage);
};

#endif