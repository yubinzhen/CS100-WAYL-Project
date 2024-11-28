#ifndef ATTACK_H
#define ATTACK_H

#include <string>
#include "pokemon.h"

using std::string;

class Attack {
    private:
        string name;
        double power;
        bool isNormal;
    public:
        Attack();
        Attack(const string& name, int power, bool normal);

        string getName() const;
        string setName(const string& name);

        int getpower() const;
        int setpower(int power);

        bool getIsNormal() const;
        bool setIsNormal(bool normal);
};

#endif