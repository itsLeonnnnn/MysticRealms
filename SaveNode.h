#ifndef SAVENODE_H
#define SAVENODE_H

#include <iostream>
#include <fstream>
using namespace std;

struct SaveNode {
    int completedLevel;
    SaveNode* next;

    SaveNode(int level) : completedLevel(level), next(nullptr){}
};

void appendNode(SaveNode*& head, int level);

void saveGameToFile(const string& fileName, SaveNode* head);

SaveNode* loadGameFromFile(const std::string& fileName);

void freeSaveData(SaveNode* head);

#endif
