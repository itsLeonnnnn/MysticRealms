#include "SaveNode.h"

void appendNode(SaveNode*& head, int level) {
    SaveNode* newNode = new SaveNode(level);
    newNode->next = head;
    head = newNode;
}

void saveGameToFile(const string& fileName, SaveNode* head) {		// to save the game progress
    ofstream file(fileName);

    if(file.is_open()){
        SaveNode* nodePtr = head;
        while(nodePtr){
            file << nodePtr->completedLevel << endl;
            nodePtr = nodePtr->next;
        }
        file.close();
        cout << endl;
        cout << "Game saved successfully." << endl;
        cout << endl;
    } else {
        cout << "Error opening file for saving..." << endl;
        exit(0);
    }
}

SaveNode* loadGameFromFile(const string& fileName) {			// to load previous game progress
    ifstream file(fileName);
    SaveNode* head = nullptr;

    if (file.is_open()) {
        int completedLevel;
        file >> completedLevel;
        appendNode(head, completedLevel);
        file.close();
        cout << "Game loaded successfully." << endl << endl;
    } else {
        cout << "Error opening file for loading." << endl;
        exit(0);
    }

    return head;
}

void freeSaveData(SaveNode* head) {				// free it
    while(head){
        SaveNode* temp = head;
        head = head->next;
        delete temp;
    }
}
