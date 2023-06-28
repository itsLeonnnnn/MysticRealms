#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;

    // Constructor to initialize the node
    Node(const string& ingotName) : name(ingotName), next(nullptr) {}
};


class Inventory{
    private:
    Node *head;
    int count;

    public:
    Inventory(){ 
            head = nullptr; 
            count = 0;
        }
    void appendNode(const string& itemName);
    void insertNode(string);
    void deleteNode(string);
    void displayList();
};

#endif
