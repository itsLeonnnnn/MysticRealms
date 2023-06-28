#include "Storyline.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readStoryline1FromFile() {				// create and read the txt file for chapter 0 storyline
	ofstream outputFile;
	outputFile.open("Story1.txt");
	outputFile << "\t\t\t ============================================================================================\n";
	outputFile << "\t\t\t|                                      CHAPTER 0                                             |\n";
	outputFile << "\t\t\t ============================================================================================\n";
	outputFile << "\t\t\t| On a beautiful day, you eagerly make your way to school for a captivating lecture.         |\n";
	outputFile << "\t\t\t| But as you step onto the road, fate takes a sudden twist.                                  |\n";
	outputFile << "\t\t\t| A speeding car crashes into you, abruptly plunging you into a realm of darkness.           |\n";
	outputFile << "\t\t\t| When consciousness finally returns, you find yourself stranded in an extraordinary world,  |\n";
	outputFile << "\t\t\t| teeming with fearsome creatures beyond your wildest imagination.                           |\n";
	outputFile << "\t\t\t ============================================================================================\n";
	outputFile << "\n\t\t\tPress Enter to continue...";
	outputFile.close();
	
    ifstream file("Story1.txt");
    string content;

    if(file.is_open()){
    	while(getline(file, content)) {
        	cout << content << endl;
    	}
    	cin.ignore();
    	file.close();
	} else{
		cout << "Failed to open the file." << endl;
	}
	
}

void readStoryline2FromFile() {
	ofstream outputFile;
	outputFile.open("Story2.txt");
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t|                                      CHAPTER 1                                               |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t| As your eyes scanned the surroundings, a startling realization dawned upon you -             |\n"; 
	outputFile << "\t\t\t| your very being was undergoing a mesmerizing metamorphosis,                                  |\n";
	outputFile << "\t\t\t| gradually morphing into a mesmerizing pixelated tapestry.                                    |\n";
	outputFile << "\t\t\t| A mysterious voice reverberated in your ears, imparting an enigmatic message:                |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| 'To navigate through this realm and find your escape, prepare for a myriad of                |\n";
	outputFile << "\t\t\t|  daunting challenges. May fortune smile upon you!'                                           |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| Perplexed by the cryptic words, you found yourself immersed in a world brimming with         |\n";
	outputFile << "\t\t\t| unfamiliar wonders. Suddenly, a radiant door materialized in the distance, emanating an      |\n";
	outputFile << "\t\t\t| irresistible allure. Intuition tugged at your senses, urging you to approach - could this    |\n"; 
	outputFile << "\t\t\t| shimmering gateway hold the key to freedom, your coveted passage out of this ethereal realm? |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\n\t\t\tPress Enter to continue...";
	outputFile.close();
	
    ifstream file("Story2.txt");
    string content;

    if(file.is_open()){
    	while(getline(file, content)) {
        	cout << content << endl;
    	}
    	file.close();
	} else{
		cout << "Failed to open the file." << endl;
	}
	
}

void readStoryline3FromFile() {
	ofstream outputFile;
	outputFile.open("Story3.txt");
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t|                                      CHAPTER 2                                               |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t| Within this enigmatic realm, you find yourself clad in a distinctive school uniform,         |\n"; 
	outputFile << "\t\t\t| surrounded by the hushed corridors of an unfamiliar educational institution.                 |\n";
	outputFile << "\t\t\t| Curiosity compels you to extend warm greetings to those passing by,                          |\n";
	outputFile << "\t\t\t| yet their robotic demeanour remains oblivious to your presence.                              |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| Lost in contemplation, you fervently brainstorm strategies to reawaken                       |\n";
	outputFile << "\t\t\t| their dormant consciousness when an unexpected transmission penetrates your ears.            |\n";
	outputFile << "\t\t\t| The ethereal voice belongs to a bewitching sorceress, a formidable figure                    |\n";
	outputFile << "\t\t\t| you intuitively recognize as the key to your escape from this perplexing realm.              |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| Driven by purpose, you embark on a determined journey, guided by the whispers of the         |\n";
	outputFile << "\t\t\t| broadcast, as you venture towards the room where she is about to emerge,                     |\n"; 
	outputFile << "\t\t\t| her presence looming in the shadows...                                                       |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\n\t\t\tPress Enter to continue...";
	outputFile.close();
	
    ifstream file("Story3.txt");
    string content;

    if(file.is_open()){
    	while(getline(file, content)) {
        	cout << content << endl;
    	}
    	file.close();
	} else{
		cout << "Failed to open the file." << endl;
	}
}

void readStoryline4FromFile() {
	ofstream outputFile;
	outputFile.open("Story4.txt");
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t|                                      CHAPTER 3                                               |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\t\t\t| Emerging into an extraordinary realm, you find yourself immersed in an otherworldly tapestry |\n"; 
	outputFile << "\t\t\t| here every facet pulsates with vibrant shades of crimson. Even the heavens above are awash   |\n";
	outputFile << "\t\t\t| in a surreal red hue. The grip of disbelief tightens around your weary soul as the elusive   |\n";
	outputFile << "\t\t\t| grip of reality eludes your grasp. Weighed down by physical and mental fatigue, thoughts of  |\n";
	outputFile << "\t\t\t| surrender slowly creep into your consciousness. Why must you endure this harrowing journey,  |\n";
	outputFile << "\t\t\t| braving the precipice between life and death?                                                |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| Yet, just as despair threatens to consume you, your senses awaken to a startling revelation -|\n";
	outputFile << "\t\t\t| a scarlet liquid encircles your very existence, a symbol of imminent danger. Fear seizes     |\n";
	outputFile << "\t\t\t| hold, its icy tendrils coiling around your heart. Yet deep within, an indomitable spirit     |\n";
	outputFile << "\t\t\t| stirs, reminding you that survival is your only recourse.                                    |\n";
	outputFile << "\t\t\t|                                                                                              |\n";
	outputFile << "\t\t\t| And so, propelled by a newfound resolve, the wheels of fate propel you into the presence of  |\n"; 
	outputFile << "\t\t\t| a formidable figure, the ultimate arbiter of this treacherous domain - the illustrious big   |\n";
	outputFile << "\t\t\t| boss who holds the key to your destiny.                                                      |\n";
	outputFile << "\t\t\t ==============================================================================================\n";
	outputFile << "\n\t\t\tPress Enter to continue...";
	outputFile.close();
	
    ifstream file("Story4.txt");
    string content;

    if(file.is_open()){
    	while(getline(file, content)) {
        	cout << content << endl;
    	}
    	file.close();
	} else{
		cout << "Failed to open the file." << endl;
	}
	
}

void readStoryline5FromFile() {
	ofstream outputFile;
	outputFile.open("Story5.txt");
	outputFile << "\t\t\t ===============================================================================================\n";
	outputFile << "\t\t\t|                                      CHAPTER 4 (END)                                          |\n";
	outputFile << "\t\t\t ===============================================================================================\n";
	outputFile << "\t\t\t| As your eyes flutter open, the sterile ambience of a hospital room greets your gaze. A rush   |\n"; 
	outputFile << "\t\t\t| of emotions surges within as you behold the figure of your devoted mother, her presence a     |\n";
	outputFile << "\t\t\t| comforting beacon amidst the uncertainty. Perplexed, you question the veracity of this        |\n";
	outputFile << "\t\t\t| reality, caught between the realms of waking and slumber.                                     |\n";
	outputFile << "\t\t\t|                                                                                               |\n";
	outputFile << "\t\t\t| In this pivotal moment of contemplation, a profound realization takes root within your soul - |\n";
	outputFile << "\t\t\t| a profound moral lesson forged through the trials you've endured. It matters not whether this |\n";
	outputFile << "\t\t\t| journey was a mere dream or an authentic odyssey; what truly matters is the wisdom gained,    |\n";
	outputFile << "\t\t\t| the empathy nurtured, and the resilience discovered. The significance lies not in the         |\n";
	outputFile << "\t\t\t| destination but in the transformative journey itself.                                         |\n";
	outputFile << "\t\t\t|                                                                                               |\n";
	outputFile << "\t\t\t| With gratitude in your heart, you embrace the opportunity to reconnect with your mother,      |\n"; 
	outputFile << "\t\t\t| cherishing the bonds of love and the profound lessons learned. For in the realm of dreams     |\n";
	outputFile << "\t\t\t| or reality, the essence of our experiences shapes us, guiding us towards compassion, growth,  |\n";
	outputFile << "\t\t\t| and the pursuit of our most authentic selves.                                                 |\n";
	outputFile << "\t\t\t ===============================================================================================\n";
	outputFile.close();
	
    ifstream file("Story5.txt");
    string content;

    if(file.is_open()){
    	while(getline(file, content)) {
        	cout << content << endl;
    	}
    	file.close();
	} else{
		cout << "Failed to open the file." << endl;
	}
	
}


