#include "Player.h"
#include "Inventory.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Player::Player(int h, int s, int p) {
    health = h;
    strength = s;
    potions = p;
}

int Player::attack() {				// player attack
    srand(time(NULL));
    int attack = 1 + (rand() % strength);
    cout << "\t\tYou attacked for " << attack << " damage." << endl;
    return attack;
}

int Player::consumeHP() {			// player consumed health potions and healed 15 HP
    potions -= 1;
    if(potions >= 0){
        health = health + 15;
        cout << "\t\tYou healed 15 HP." << endl;
    }else{
        cout << "\t\tYou don't have any health potion." << endl;
        potions = 0;
    }
    
    return 0;
}

int Player::criticalHit() {			// player uses critical attack or hit, but cause self damage too
    srand(time(NULL));
    int damageBuff = 1 + (rand() % (strength + 10));
    int selfDamage = damageBuff/4;
    cout << "\t\tYou attacked for " << damageBuff << " damage." << endl;
    cout << "\t\tHowever, you suffered " << selfDamage << " damage as a result of your own action." << endl;
    health -= selfDamage;
    return damageBuff;
}

int Player::choice() {				// ask the player to select an option
    int option = 0;
    bool validOption = false;
    cout << endl;
    cout << "\t\t===================================" << endl;
    cout << "\t\t|                                 |" << endl;
    cout << "\t\t|       It's your turn now!       | " << endl;
    cout << "\t\t|    What would you like to do?   | " << endl;
    cout << "\t\t|                                 |" << endl;
    cout << "\t\t===================================" << endl;
    cout << "\t\t|   (1) Attack                    |" << endl;
    cout << "\t\t|   (2) Critical Hit              |" << endl;
    cout << "\t\t|   (3) Consume Health Potion     |" << endl;
    cout << "\t\t===================================" << endl;
    cout << endl;
    
    while(!validOption){
        cout << "\t\tChoice: ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 1:
                validOption = true;
                return attack();
                break;

            case 2:
                validOption = true;
                return criticalHit();
                break;

            case 3:
                if (potions > 0) {
                    validOption = true;
                    return consumeHP();
                } else {
                    cout << "\t\tYou don't have any health potions. Please select another option." << endl;
                }
                break;

            default:
                cout << "\t\tInvalid choice. Please reselect." << endl;
        }
    }
}
