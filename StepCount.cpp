#include "StepCount.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr), totalSteps(0) {}

void LinkedList::insert(int value) {				// insert the
    Node2* newNode = new Node2;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node2* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    totalSteps += value;
}

int LinkedList::getTotalSteps() {
    return totalSteps;
}

