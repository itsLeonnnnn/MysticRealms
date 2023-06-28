#ifndef STEPCOUNT_H
#define STEPCOUNT_H

#include <iostream>
using namespace std;

struct Node2 {
    int data;
    Node2* next;
};

class LinkedList {
private:
    Node2* head;
    int totalSteps;
public:
    LinkedList();
    void insert(int value);
    int getTotalSteps();
};

#endif
