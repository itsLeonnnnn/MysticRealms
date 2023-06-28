#include "Witch.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Witch::Witch(int h, int s, int m) {				// witch's stat
    health = h;
    strength = s;
    magic = m;
}

int Witch::attack() {							// witch attack
    srand(time(NULL));
    int attack = 1 + (rand() % strength);
    cout << "Witch attacked you for " << attack << " damage." << endl;
    return attack;
}

int Witch::heal() {								// witch heal
    cout << "Witch has healed for 5 HP." << endl;
    health += 5;
    return 0;
}

int Witch::criticalHit() {						// witch uses critical hit to attack
    srand(time(NULL));
    int damageBuff = 1 + (rand() % (strength + 15));
    cout << "Witch attacked you for " << damageBuff << " damage." << endl;
    return damageBuff;
}

int Witch::magicAttack() {						// witch uses magic to attack
    srand(time(NULL));
    int witchMagicAttack = 1 + (rand() % magic);
    cout << "Witch casted a spell. You take " << witchMagicAttack << " damage." << endl;
}

int Witch::action() {							// randomly select an option
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

    if (action == 4) {
        return magicAttack();
    }
}
