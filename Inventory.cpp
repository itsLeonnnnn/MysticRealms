#include "Inventory.h"
#include <iostream>
#include <string>
using namespace std;

    void Inventory::appendNode(const string& itemName) {			// add new item into inventory of player
        Node* newNode = new Node(itemName);
        newNode->name = itemName;
        newNode->next = nullptr;
        int count = 0;
        // If the inventory is empty, make the new ingot the head
        if (head == nullptr) {
            head = newNode;
        }
        else {
            // Find the last node in the linked list
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }

            // Append the new ingot to the end of the linked list
            current->next = newNode;
        }

        count++;

        if(count == 2){
            cout << "Mission Clear!" << endl;
        }
    }

void Inventory::displayList(){						// display the player's inventory
    if (head == nullptr){
    	cout << endl;
        cout << "Inventory is empty." << endl;
        cout << endl;
    }

    else{
        cout << "Inventory contents:" << endl;
        Node* current = head;
        while  (current != nullptr){
            cout << current->name << endl;
            current = current->next;
        }
    }
}


