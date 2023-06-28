#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream>
#include <string>
#include "Character.h"
#include "Storyline.h"
#include "Inventory.h"
#include "Player.h"
#include "Goblin.h"
#include "Witch.h"
#include "Boss.h"

using namespace std;

void gameOver();
void winnerGoblin();
void winnerWitch();
void winnerBoss();
void winnerPlayer();
void showHealth(int health);
void showStrength(int strength);
void showMagic(int magic);
void showPotions(int potions);
void showStats(int ph, int ps, int pm, int pp, int mh, int ms, int mm);
void credits();
void titleScreen();
void story();
void displayInstructions();
void PlayerLvl1();
void PlayerLvl2();
void PlayerLvl3();
void GameOver();
void goblinWin();
void witchWin();
void bossWin();
void PlayerWin();
void campfire();
void caveEntrance();
void goblinEncounter();
void witchEncounter();
void bossEncounter();
void lineBreak();
void PlayerLevel1(Player& KO, Goblin& GO);
void PlayerLevel2(Player& KO, Witch& WO);
void PlayerLevel3(Player& KO, Boss& BO);
void gameClear();
void treasuresGet();


#endif
