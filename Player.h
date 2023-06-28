#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Inventory.h"
#include <iostream>

class Player : public Character {
public:
    Player(int h, int s, int p);

    int attack();
    int consumeHP();
    int criticalHit();
    int choice();
};

#endif
