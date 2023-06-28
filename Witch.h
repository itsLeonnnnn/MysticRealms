#ifndef WITCH_H
#define WITCH_H

#include "Character.h"
#include <iostream>

class Witch : public Character {
public:
    Witch(int h, int s, int m);

    int attack();
    int heal();
    int criticalHit();
    int magicAttack();
    int action();
};

#endif
