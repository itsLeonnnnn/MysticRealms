#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
protected:
    int health, strength, magic, potions;

public:
    void getDamage(int d);
    int getHealth() const;
    int getStrength() const;
    int getMagic() const;
    int getPotions() const;
    void rest(int h, int s, int p);
};

#endif
