#include "Game.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gameOver() {		// Display when the player loses and game over.
    cout << "   _____          __  __ ______    ______      ________ _____   " << endl;
    cout << "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\  " << endl;
    cout << " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | " << endl;
    cout << " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /  " << endl;
    cout << " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\  " << endl;
    cout << "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ " << endl;
    cout << endl;
    exit(0);
}

void winnerGoblin() {	// Display when the winner is goblin
    cout << "The winner is Goblin." << endl;
}

void winnerWitch() {	// Display when the winner is witch
    cout << "The winner is Witch." << endl;
}

void winnerBoss() {		// Display when the winner is BIG BOSS
    cout << "The winner is Boss." << endl;
}

void winnerPlayer() {	// Display when the winner is player
	cout << endl; 
    cout << "\t\t __  __               _       ___          __ " << endl;
    cout << "\t\t \\ \\/ /___  __  __   | |     / (_)___     / / " << endl;
    cout << "\t\t  \\  / __ \\/ / / /   | | /| / / / __ \\   / /  " << endl;
    cout << "\t\t  / / /_/ / /_/ /    | |/ |/ / / / / /  /_/   " << endl;
    cout << "\t\t /_/\\____/\\__,_/     |__/|__/_/_/ /_/  (_)    " << endl;
                                            
	cout << endl;

    cout << "\t\t Press Enter to continue...";
}

void showHealth(int health) {			// show HP value
    cout << "HP: " << health;
}

void showStrength(int strength) {		// show Strength value
    cout << "Strength: " << strength;
}

void showMagic(int magic) {				// show Magic value
    cout << "Magic: " << magic;
}

void showPotions(int potions) {			// show number of potions
    cout << "Potions: " << potions;
}

void showStats(int ph, int ps, int pm, int pp, int mh, int ms, int mm) {		// show current stats of player and monster
    cout << "\t\t";
    showHealth(ph);
    cout << "\t\t\t\t\t";
    showHealth(mh);
    cout << endl;
    cout << "\t\t";
    showStrength(ps);
    cout << "\t\t\t\t";
    showStrength(ms);
    cout << endl;
    cout << "\t\t";
    showPotions(pp);
    cout << "\t\t\t\t";
    showMagic(mm);
    cout << endl;
}

void titleScreen() {		// display as title screen
	cout << "\t __   __  __   __  _______  _______  ___   _______    ______    _______  _______  ___      __   __  _______  " << endl;
	cout << "\t|  |_|  ||  | |  ||       ||       ||   | |       |  |    _ |  |       ||   _   ||   |    |  |_|  ||       | " << endl;
	cout << "\t|       ||  |_|  ||  _____||_     _||   | |     __|  |   | ||  |    ___||  |_|  ||   |    |       ||  _____| " << endl;
	cout << "\t|       ||       || |_____   |   |  |   | |    |     |   |_||_ |   |___ |       ||   |    |       || |_____  " << endl;
	cout << "\t|       ||_     _||_____  |  |   |  |   | |    |     |    __  ||    ___||       ||   |___ |       ||_____  | " << endl;
	cout << "\t| ||_|| |  |   |   _____| |  |   |  |   | |    |__   |   |  | ||   |___ |   _   ||       || ||_|| | _____| | " << endl;
	cout << "\t|_|   |_|  |___|  |_______|  |___|  |___| |_______|  |___|  |_||_______||__| |__||_______||_|   |_||_______| " << endl;
	cout << endl;
    cout << "\t\t\t\t                Developed by CPT113 Group 8         "   << endl;
    cout << "\t\t\t\t                      H'NG SOOK WERN                "   << endl;
    cout << "\t\t\t\t                    JILLIAN YEOW EN YU              "   << endl;
    cout << "\t\t\t\t                    LEON THEN LEONG ONN             "   << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t                 Press Enter to continue...            " << endl;
}


void displayInstructions() {		// display the instructions
    cout << "\t\t ================================================================================" << endl;
    cout << "\t\t|                                                                                |" << endl;
    cout << "\t\t|                         Mystic Realms - Instructions                           |  " << endl;
    cout << "\t\t|                                                                                |" << endl;
    cout << "\t\t ================================================================================" << endl;
  	cout << "\t\t|                                                                                |" << endl;
    cout << "\t\t|   Embark on an epic RPG adventure where strategic turn-based battles await!    |  " << endl;
    cout << "\t\t|   Prepare to face formidable monsters as you enter combat. Unleash your        |  " << endl;
    cout << "\t\t|   attacks, aiming for critical strikes, or choose to replenish your strength   | " << endl;
	cout << "\t\t|   with health potions. But beaware, for the enemy is relentless and will       |  " << endl;
    cout << "\t\t|   strike back. The battle rages on until one side succumbs to the depths       | " << endl;
    cout << "\t\t|   of defeat. Will you emerge victorious or fall in the face of adversity?      | " << endl;
    cout << "\t\t|                                                                                |" << endl;
    cout << "\t\t|                 THE FATE OF THIS RPG WORLD LIES IN YOUR HAND!                  | " << endl;
    cout << "\t\t|                                                                                |" << endl;
    cout << "\t\t ================================================================================" << endl;
    cout << endl;
    cout << "\t\t Press Enter to start game..."; 
}

void PlayerLvl1() {
    cout << endl;
    cout << "\t\t\tYou\t\tVS\t\t\tGoblin";
    cout << endl;
}

void PlayerLvl2() {
    cout << endl;
    cout << "\t\t\tYou\t\tVS\t\t\tWitch";
    cout << endl;
}

void PlayerLvl3() {
    cout << endl;
    cout << "\t\t\tYou\t\tVS\t\t\tBIG BOSS";
    cout << endl;
}

void GameOver() {		// display when the game is over
    cout << "   _____          __  __ ______    ______      ________ _____   " << endl;
    cout << "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\  " << endl;
    cout << " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | " << endl;
    cout << " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /  " << endl;
    cout << " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\  " << endl;
    cout << "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ " << endl;
    cout << endl;
    exit(0);
}

void goblinWin() {		// display when the goblin wins
    cout << " Winner:   GOBLIN" << endl;
}

void witchWin() {		// display when witch wins
    cout << " Winner:   WITCH" << endl;
}

void bossWin() {		// display when boss wins
    cout << " Winner:   BIG BOSS" << endl;
}

void PlayerWin() {		// display when the player wins
	cout << endl; 
    cout << "\t\t __  __               _       ___          __ " << endl;
    cout << "\t\t \\ \\/ /___  __  __   | |     / (_)___     / / " << endl;
    cout << "\t\t  \\  / __ \\/ / / /   | | /| / / / __ \\   / /  " << endl;
    cout << "\t\t  / / /_/ / /_/ /    | |/ |/ / / / / /  /_/   " << endl;
    cout << "\t\t /_/\\____/\\__,_/     |__/|__/_/_/ /_/  (_)    " << endl;
                                            
	cout << endl;

    cout << "\t\t Press Enter to continue...";
}


void campfire() {		// display the campfire after player defeats the monster
    system("cls");
    cout << " __  __                   __     ____           __           __   _ __  __ " << endl;
    cout << " \\ \\/ /___  __  __   ____/ /__  / __/__  ____ _/ /____  ____/ /  (_) /_/ / " << endl;
    cout << "  \\  / __ \\/ / / /  / __  / _ \\/ /_/ _ \\/ __ `/ __/ _ \\/ __  /  / / __/ /  " << endl;
    cout << "  / / /_/ / /_/ /  / /_/ /  __/ __/  __/ /_/ / /_/  __/ /_/ /  / / /_/_/   " << endl;
    cout << " /_/\\____/\\__,_/   \\__,_/\\___/_/  \\___/\\__,_/\\__/\\___/\\__,_/  /_/\\__(_)    " << endl;
                                                                         
    cout << endl;
    cout << endl;
	cout << "       (                 ,&&&.     " << endl;
    cout << "        )                .,.&&     " << endl;
    cout << "       (  (              \\=__/     " << endl;
    cout << "           )             ,'-'.     " << endl;
    cout << "     (    (  ,,      _.__|/ /|     " << endl;
    cout << "      ) /\\ -((------((_|___/ |     " << endl;
    cout << "    (  // | (`'      ((  `'--|     " << endl;
    cout << "  _ -.;_/ \\--._      \\ \\-._/.    " << endl;
    cout << " (_;-// | \\ \\-'.\\    <_,\\_\\`--'|   " << endl;
    cout << " ( `.__ _  ___,')      <_,-'__,'   " << endl;
    cout << "  `'(_ )_)(_)_)'                   " << endl;
    cout << endl;
    cout << "You've made a campfire." << endl;
    cout << "Your health is being replenished." << endl;
    cout << "Your health potions have been refilled." << endl;
    cout << endl;
    cout << "=================================" << endl;
    cout << "|     Auto-save in progress     |" << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "Press enter to continue..." << endl;
    cout << endl;
    cin.ignore();
}


void goblinEncounter() {		// trigger the storyline of goblin
	cout << "         ,      ,		 In a dimly lit chamber shrouded in shadows, the hulking form of the goblin boss emerges." << endl;
    cout << "        /(.-""-.)\\		 Its twisted grin and menacing gaze fixate upon you, exuding an air of malevolence." << endl;
    cout << "    |\\  \\/      \\/  /|		 With its grotesque claws ready to strike, you brace yourself for the impending battle." << endl;
    cout << "    | \\ / =.  .= \\ / |		 As you face the goblin, you notice a glimmering GOLD INGOT clutched tightly in its grasp," << endl;
    cout << "    \\( \\   o\\/o   / )/		 a coveted treasure that serves as a symbol of its ill-gotten wealth." << endl;
    cout << "     \\_, '-/  \\-' ,_/	" << endl;
    cout << "       /   \\__/   \\			     MISSION: " << endl;
    cout << "       \\ \\__/\\__/ /		                    DEFEAT THE GOBLIN" << endl;
    cout << "     ___\\ \\|--|/ /___	                              TO GET THE GOLD INGOT" << endl;
    cout << "   /`    \\      /    `\\		                                 SO YOU CAN ESCAPE FROM THIS WORLD!" << endl;
    cout << " /       '----'       \\	" << endl;
    cout << endl;
    cout << endl;
}

void witchEncounter() {		// trigger storyline of witch
	cout << "        _|\\_			" << "Within the mystic confines of the witch boss's lair, arcane energy crackles and dances in the air." << endl;
    cout << "        (''}			" << "The atmosphere becomes charged with dark forces as the witch boss reveals herself." << endl;
    cout << "      i_.-@-._ _		" << "She possesses an air of elegance and power, emanating an aura of ancient sorcery." << endl;
    cout << "      8--,  .-`*		" << "With a wicked cackle, she prepares to test your mettle. As you confront the witch boss," << endl;
    cout << "      I  /==\\			" << "your eyes are drawn to a shimmering emerald held in her hand, a gemstone infused with" << endl;
    cout << "      I  |   \\		" << "        mystical energies and coveted by many for its rare and potent properties." << endl;
    cout << "      I  /___\\		" << endl;
    cout << "                                           MISSION:    DEFEAT THE WITCH TO GRAB THAT EMERALD!" << endl;
    cout << endl;
    cout << endl;
}

void bossEncounter() {		// trigger storyline of BOSS
	cout << "	        _ ___                /^^\\ /^\\  /^^\\_							" << endl;
	cout << "    _          _@)@) \\            ,,/ '` ~ `'~~ ', `\\.							" << endl;
	cout << "  _/o\\_ _ _ _/~`.`...'~\\        ./~~..,'`','',.,' '  ~:						" << endl;
	cout << "  / `,'.~,~.~  .   , . , ~|,   ,/ .,' , ,. .. ,,.   `,  ~\\_					" << endl;
	cout << " ( ' _' _ '_` _  '  .    , `\\_/ .' ..' '  `  `   `..  `,   \\_					" << endl;
 	cout << " ~V~ V~ V~ V~ ~\\ `   ' .  '    , ' .,.,''`.,.''`.,.``. ',   \\_					" << endl;
	cout << "  _/\\ /\\ /\\ /\\_/, . ' ,   `_/~\\_ .' .,. ,, , _/~\\_ `. `. '.,  \\_				" << endl;
	cout << " < ~ ~ '~`'~'`, .,  .   `_: ::: \\_ '      `_/ ::: \\_ `.,' . ',  \\_				" << endl;
	cout << "  \\ ' `_  '`_    _    ',/ _::_::_ \\ _    _/ _::_::_ \\   `.,'.,`., \\-,-,-,_,_,	" << endl;
	cout << "   `'~~ `'~~ `'~~ `'~~  \\(_)(_)(_)/  `~~' \\(_)(_)(_)/ ~'`\\_.._,._,'_;_;_;_;_;	" << endl;
	cout << endl;
    cout << "As you navigate through the ethereal realm, you reach a vast chamber pulsating with an aura of immense power." << endl;
    cout << "The ground trembles beneath your feet, heralding the arrival of the big boss. Towering over you, the behemoth" << endl;
    cout << "emanates an overwhelming presence, radiating raw strength and unyielding determination. Its eyes lock onto yours," << endl;
    cout << "marking the beginning of an epic confrontation. As you steel yourself for the battle, you catch a glimpse of a" << endl;
    cout << "radiant DIAMOND clutched in the hand of the big boss, a jewel that symbolizes its unwavering authority and unattainable brilliance." << endl;
    cout << endl;
    cout << "MISSION:   DEFEAT THE BOSS TO GET THE DIAMOND!" << endl;
}

void lineBreak() {
    cout << endl;
    cout << endl;
    cout << "*********************************************************************************************************************" << endl;
    cout << endl;
}

void credits(){			// serves as the disclaimer and credits of this game
	cout << "      ____  _          _       _                      " << endl;
	cout << "     |  _ \\(_)___  ___| | __ _(_)_ __ ___   ___ _ __  " << endl;
	cout << "     | | | | / __|/ __| |/ _` | | '_ ` _ \\ / _ \\ '__| " << endl;
	cout << "     | |_| | \\__ \\ (__| | (_| | | | | | | |  __/ |    " << endl;
	cout << "     |____/|_|___/\\___|_|\\__,_|_|_| |_| |_|\\___|_|    " << endl;
                                                 
	cout << endl;
	cout << "     This game is a product of coursework assignment and is intended for educational purposes only.  " << endl;
	cout << "     The game may contain bugs, errors, or incomplete features, as it is not a professional release.  " << endl;
	cout << "     The developer does not take responsibility for any unintended consequences or damages that may occur  " << endl;
	cout << "     from playing or using this game. Use at your own risk. " << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	 
	cout << "        ____              _ _ _        " << endl;
	cout << "       / ___|_ __ ___  __| (_) |_ ___  " << endl;
	cout << "      | |   | '__/ _ \\/ _` | | __/ __| " << endl;
	cout << "      | |___| | |  __/ (_| | | |_\\__ \\ " << endl;
	cout << "       \\____|_|  \\___|\\__,_|_|\\__|___/ " << endl;
	cout << endl;
	cout << "     Game Title: RPG Game" << endl;
	cout << endl;
	cout << "     Developed by: Group 8" << endl;
	cout << "     H'NG SOOK WERN" << endl;
	cout << "     JILLIAN YEOW EN YU" << endl;
	cout << "     LEON THEN LEONG ONN" << endl;
	cout << endl;
	cout << "     Course: CPT113" << endl;
	cout << endl;
	cout << "     Institution: Universiti Sains Malaysia (USM)" << endl;
	cout << endl;
	cout << "     Year of Development: 2023" << endl;
	
}


void PlayerLevel1(Player& KO, Goblin& GO) {			// at level 1 (goblin)
    while (KO.getHealth() > 0 && GO.getHealth() > 0) {
        PlayerLvl1();
        showStats(KO.getHealth(), KO.getStrength(), KO.getMagic(), KO.getPotions(), GO.getHealth(), GO.getStrength(), GO.getMagic());
        
        GO.getDamage(KO.choice());
        cout << endl;
        cout << "\t\tOPPONENT MOVE: ";
        KO.getDamage(GO.action());
        cout << endl;
        lineBreak();
    }
    if (KO.getHealth() > 0) {
        winnerPlayer();
    }
    else {
        winnerGoblin();
        gameOver();
        return;
    }
}

void PlayerLevel2(Player& KO, Witch& WO) {			// at level 2 (witch)
    while (KO.getHealth() > 0 && WO.getHealth() > 0) {
        PlayerLvl2();
        showStats(KO.getHealth(), KO.getStrength(), KO.getMagic(), KO.getPotions(), WO.getHealth(), WO.getStrength(), WO.getMagic());
        
        WO.getDamage(KO.choice());
        cout << endl;
        cout << "\t\tOPPONENT MOVE: ";
        KO.getDamage(WO.action());
        cout << endl;
        lineBreak();
    }
    if (KO.getHealth() > 0) {
        winnerPlayer();
    }
    else {
        winnerWitch();
        gameOver();
        return;
    }
}

void PlayerLevel3(Player& KO, Boss& BO) {			// at level 3 (boss)
    while (KO.getHealth() > 0 && BO.getHealth() > 0) {
        PlayerLvl3();
        showStats(KO.getHealth(), KO.getStrength(), KO.getMagic(), KO.getPotions(), BO.getHealth(), BO.getStrength(), BO.getMagic());
        
        BO.getDamage(KO.choice());
        cout << endl;
        cout << "\t\tOPPONENT MOVE: ";
        KO.getDamage(BO.action());
        cout << endl;
        lineBreak();
    }
    if (KO.getHealth() > 0) {
        winnerPlayer();
    }
    else {
        winnerBoss();
        gameOver();
        return;
    }
}

void gameClear(){								// display when the game ended (game clear)
    cout << "\t\t  /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$       " << endl;
    cout << "\t\t /$$__  $$ /$$__  $$| $$$    /$$$| $$_____/       " << endl;
    cout << "\t\t| $$  \\__/| $$  \\ $$| $$$$  /$$$$| $$             " << endl;
    cout << "\t\t| $$ /$$$$| $$$$$$$$| $$ $$/$$ $$| $$$$$          " << endl;
    cout << "\t\t| $$|_  $$| $$__  $$| $$  $$$| $$| $$__/          " << endl;
    cout << "\t\t| $$  \\ $$| $$  | $$| $$\\  $ | $$| $$             " << endl;
    cout << "\t\t|  $$$$$$/| $$  | $$| $$ \\/  | $$| $$$$$$$$       " << endl;
    cout << "\t\t \\______/ |__/  |__/|__/     |__/|________/       " << endl;
                                                    
    cout << endl;
    cout << endl;                                                  
                                                    
    cout << "\t\t  /$$$$$$  /$$       /$$$$$$$$  /$$$$$$  /$$$$$$$ " << endl;
    cout << "\t\t /$$__  $$| $$      | $$_____/ /$$__  $$| $$__  $$" << endl;
    cout << "\t\t| $$  \\__/| $$      | $$      | $$  \\ $$| $$  \\ $$" << endl;
    cout << "\t\t| $$      | $$      | $$$$$   | $$$$$$$$| $$$$$$$/" << endl;
    cout << "\t\t| $$      | $$      | $$__/   | $$__  $$| $$__  $$" << endl;
    cout << "\t\t| $$    $$| $$      | $$      | $$  | $$| $$  \\ $$" << endl;
    cout << "\t\t|  $$$$$$/| $$$$$$$$| $$$$$$$$| $$  | $$| $$  | $$" << endl;
    cout << "\t\t \\______/ |________/|________/|__/  |__/|__/  |__/" << endl;     
    cout << endl;
    cout << endl;
    cout << endl;                                   
}

void treasuresGet(){								// display when the player obtains all three treasures
    cout << endl;
    cout << endl;
    cout << "\t\t=============================================================================================" << endl;
    cout << "\t\t| With all three treasures in your possession, a profound stillness settled upon the realm. |" << endl;
    cout << "\t\t| The radiant door before you flickered and glowed, resonating with the power of the        |" << endl;
    cout << "\t\t| gemstones you had collected. It recognized your triumph, acknowledging your unwavering    |" << endl;
    cout << "\t\t| resolve and resourcefulness. The door swung open, revealing a blinding light that spilled |" << endl;
    cout << "\t\t| forth, dispelling the pixelated tapestry, the school corridors, and the crimson realm.    |" << endl;
    cout << "\t\t|                                                                                           |" << endl;
    cout << "\t\t| Stepping through the threshold, you felt surge of freedom engulf you. The ethereal realm  |" << endl;
    cout << "\t\t| faded into oblivion as you found yourself back in the world you once knew. The journey    |" << endl;
    cout << "\t\t| that had tested your limits had come to an end, and you were reborn, forever changed by   |" << endl;
    cout << "\t\t| trials you had endured ... ...                                                            |" << endl;
    cout << "\t\t=============================================================================================" << endl;
    cout << endl;
}


