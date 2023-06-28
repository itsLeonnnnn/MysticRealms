#include "Goblin.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Goblin::Goblin(int h, int s, int m) {
    health = h;
    strength = s;
    magic = m;
}

int Goblin::attack() {				// goblin attack
    srand(time(NULL));
    int attack = 1 + (rand() % strength);
    cout << "Goblin attacked you for " << attack << " damage." << endl;
    return attack;
}

int Goblin::heal() {				// goblin heal 3 HP
    cout << "Goblin has healed for 3 HP." << endl;
    health += 3;
    return 0;
}

int Goblin::criticalHit() {			// goblin uses critical attack or hit
    srand(time(NULL));
    int damageBuff = 1 + (rand() % (strength + 10));
    cout << "Goblin attacked you for " << damageBuff << " damage." << endl;
    return damageBuff;
}

int Goblin::action() {				// goblin's action
    srand(time(NULL));
    int action = 1 + (rand() % 3);
    if (action == 1) {
        return attack();
    }

    if (action == 2) {
        return heal();
    }

    if (action == 3) {
        return criticalHit();
    }
}
