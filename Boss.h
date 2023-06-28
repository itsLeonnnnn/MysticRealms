#ifndef BOSS_H
#define BOSS_H

#include "Character.h"

class Boss : public Character {
public:
    Boss(int h, int s, int m);

    int attack();
    int heal();
    int criticalHit();
    int magicAttack();
    int action();
};

#endif
