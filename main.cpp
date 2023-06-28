#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime> 
#include "Game.h"
#include "SaveNode.h"
#include "StepCount.h"
#include "GameLogic.h"

using namespace std;

int main(){
	SaveNode* saveData = nullptr;
	
	LinkedList stepsList;
	int requiredSteps = 10;
	int inputSteps;
	int maxStepsPerMove = 3;
	
	int completedLevel = 0;
	Inventory playerInventory;
	string playerChoice;
	string saveFileName = "save.txt";

	Player Player(100, 20, 10);
	Goblin Goblin(40,15,0);
	Witch Witch(50, 20, 25);
	Boss Boss(75, 25, 30);


    titleScreen();
    cin.ignore();
    system("cls");
    bool validChoice = false;
	cout<<"#############################################################################################\n";
	cout<<"                      *                                           *\n";
	cout<<"            *        * *                                         * *        *\n";
	cout<<"           * *        *                  MAIN           *        * *\n";
	cout<<"          *   *            *             MENU             *             *   *\n";
	cout<<"           * *            * *                              * *             * *\n";
	cout<<"            *              *                                *               *\n";
	cout<<"#############################################################################################\n";
    cout << endl;
    cout << "\t\t\t\t1 - Start Game \n";
    cout << "\t\t\t\t2 - Load Previous Progress\n";
    cout << "\t\t\t\t3 - Credits \n";
    cout << "\t\t\t\t4 - Quit \n";
    cout << endl;
    int option;
    
    
    while(!validChoice){
	    cout << "\t\t\t\tChoose a number: ";
    	cin >> option;
    	
		switch(option){
	    	case 1:{
						system("cls");
						validChoice = true;
						displayInstructions();
	    				cin.ignore();
	    				cin.ignore();
	    				system("cls");
						readStoryline1FromFile();					// Chapter 0
						system("cls");
						readStoryline2FromFile();					// Chapter 1
						cin.ignore();
						system("cls");
						while(Player.getHealth() > 0){
							goblinEncounter();
							lineBreak();
							PlayerLevel1(Player, Goblin);
							campfire();
							playerInventory.appendNode("Gold Ingot");
							cout << endl;
							playerInventory.displayList();
							completedLevel = 1;
							appendNode(saveData, completedLevel);
							saveGameToFile("save.txt", saveData);
							
							stepCount1();
	
							cin.ignore();
							Player.rest(50,20,10);
							system("cls");
							readStoryline3FromFile();			// Chapter 2
							cin.ignore();
							system("cls");
							witchEncounter();
							lineBreak();
							PlayerLevel2(Player, Witch);
							campfire();
							playerInventory.appendNode("Emerald");
							cout << endl;
							playerInventory.displayList();
							completedLevel = 2;
							appendNode(saveData, completedLevel);
							saveGameToFile("save.txt", saveData);
	
							stepCount2();
	
							cin.ignore();
							Player.rest(100,20,10);
							system("cls");
							readStoryline4FromFile();			// Chapter 3
							cin.ignore();
							system("cls");
							bossEncounter();
							lineBreak();	
							PlayerLevel3(Player, Boss);
							cin.ignore();
							cin.ignore();
							playerInventory.appendNode("Diamond");
							cout << endl;
							playerInventory.displayList();
							treasuresGet();
							cin.ignore();
							readStoryline5FromFile();			// Chapter 4 (END)
							cin.ignore();
							system("cls");
							gameClear();
							freeSaveData(saveData);
							break;
						}
						break;
				}
	
	        case 2:{    validChoice = true;
						system("cls");
						saveData = loadGameFromFile(saveFileName);
						int completedLevel = 0;
						if (saveData){
							completedLevel = saveData->completedLevel;
						} else{
							completedLevel = 0;
						}
						
						int nextLevel = completedLevel + 1;
	
	                    if(nextLevel == 2){
	                        while(Player.getHealth() > 0){
	                        	playerInventory.appendNode("Gold Ingot");
	
								stepCount1();
	
								cin.ignore();
								Player.rest(50,20,10);
								system("cls");
								readStoryline3FromFile();			// Chapter 2
								cin.ignore();
								system("cls");
								witchEncounter();
								lineBreak();
								PlayerLevel2(Player, Witch);
								campfire();
								playerInventory.appendNode("Emerald");
								cout << endl;
								playerInventory.displayList();
								completedLevel = 2;
								appendNode(saveData, completedLevel);
								saveGameToFile("save.txt", saveData);
		
								stepCount2();
		
								cin.ignore();
								Player.rest(100,20,10);
								system("cls");
								readStoryline4FromFile();			// Chapter 3
								cin.ignore();
								system("cls");
								bossEncounter();
								lineBreak();	
								PlayerLevel3(Player, Boss);
								cin.ignore();
								cin.ignore();
								playerInventory.appendNode("Diamond");
								cout << endl;
								playerInventory.displayList();
								treasuresGet();
								cin.ignore();
								readStoryline5FromFile();			// Chapter 4 (END)
								cin.ignore();
								system("cls");
								gameClear();
								freeSaveData(saveData);
								break;
	                        }
	                    }
	
						else if(nextLevel == 3){
	                        while(Player.getHealth() > 0){
								playerInventory.appendNode("Gold Ingot");
								playerInventory.appendNode("Emerald");
								
								stepCount2();
		
								cin.ignore();
								Player.rest(100,20,10);
								system("cls");
								readStoryline4FromFile();			// Chapter 3
								cin.ignore();
								system("cls");
								bossEncounter();
								lineBreak();	
								PlayerLevel3(Player, Boss);
								cin.ignore();
								cin.ignore();
								playerInventory.appendNode("Diamond");
								cout << endl;
								playerInventory.displayList();
								treasuresGet();
								cin.ignore();
								readStoryline5FromFile();			// Chapter 4 (END)
								cin.ignore();
								system("cls");
								gameClear();
								freeSaveData(saveData);
								break;
	                        }
	                    }
	
						else{
							cout << "Error!" << endl;
							exit(0);
						}
	                    break;
			}
			
	    	case 3:{
						system("cls");
						validChoice = true;
						system("cls");
						credits();
	    				cin.ignore();
	    				exit(0);
	    				break; 
	    	}
	    	
	    	case 4:{
						return 0;
						break;
			}
	    	
			default:{
						validChoice = false;
						cout << "\t\t\t\tInvalid choice, please reselect." << endl;
			
			}
			}	
		}
	}
	

