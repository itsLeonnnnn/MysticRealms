#include "Boss.h"

#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

Boss::Boss(int h, int s, int m) {
    health = h;
    strength = s;
    magic = m;
}

int Boss::attack() {
    srand(time(NULL));
    int attack = 1 + (rand() % strength);
    cout << "Boss attacked you for " << attack << " damage." << endl;
    return attack;
}

int Boss::heal() {
    cout << "Boss has healed for 10 HP." << endl;
    health += 10;
    return 0;
}

int Boss::criticalHit() {
    srand(time(NULL));
    int damageBuff = 1 + (rand() % (strength + 15));
    cout << "Boss attacked you for " << damageBuff << " damage." << endl;
    return damageBuff;
}

int Boss::magicAttack() {
    srand(time(NULL));
    int bossMagicAttack = 1 + (rand() % magic);
    cout << "Boss used its magic to attack you. You take " << bossMagicAttack << " damage." << endl;
    return bossMagicAttack;
}

int Boss::action() {
    srand(time(NULL));
    int action = 1 + (rand() % 4);

    switch (action) {
        case 1:
            return attack();
        case 2:
            return heal();
        case 3:
            return criticalHit();
        case 4:
            return magicAttack();
        default:
            return 0;
    }
}
