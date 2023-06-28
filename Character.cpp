#include "Character.h"

void Character::getDamage(int d) {
    health -= d;
}

int Character::getHealth() const {
    return health;
}

int Character::getStrength() const {
    return strength;
}

int Character::getMagic() const {
    return magic;
}

int Character::getPotions() const {
    return potions;
}

void Character::rest(int h, int s, int p) {
    health = h;
    strength = s;
    potions = p;
}
