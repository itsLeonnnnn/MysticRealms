#ifndef GOBLIN_H
#define GOBLIN_H

#include "Character.h"
#include <iostream>

class Goblin : public Character {
public:
    Goblin(int h, int s, int m);

    int attack();
    int heal();
    int criticalHit();
    int action();
};

#endif
