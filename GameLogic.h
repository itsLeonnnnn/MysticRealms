#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <iostream>
#include "StepCount.h" // Assuming you have a LinkedList class defined in a separate file

void stepCount1() {
    LinkedList stepsList;
    int requiredSteps = 10; // The required number of steps to trigger Level 2
    int inputSteps;
    int maxStepsPerMove = 3;

    do {
        cout << endl;
        cout << "Enter the number of steps to move (up to 3 steps): ";
        cin >> inputSteps;

        if (inputSteps <= 0 || inputSteps > maxStepsPerMove) {
            cout << "Invalid input. Please enter a number between 1 and " << maxStepsPerMove << ".\n";
            continue;
        }

        stepsList.insert(inputSteps);

        if (stepsList.getTotalSteps() < requiredSteps) {
            int remainingSteps = requiredSteps - stepsList.getTotalSteps();
            cout << "Move " << remainingSteps << " more steps.\n";
        }

        int excessSteps = stepsList.getTotalSteps() - requiredSteps;
        if (excessSteps > 0) {
            cout << "You inadvertently went too far and fell into a bottomless abyss.";
            
            exit(0);
        }

    } while (stepsList.getTotalSteps() < requiredSteps || stepsList.getTotalSteps() > requiredSteps);
}

void stepCount2() {
    LinkedList stepsList;
    int requiredSteps = 20; // The required number of steps to trigger Level 2
    int inputSteps;
    int maxStepsPerMove = 3;

    do {
        cout << endl;
        cout << "Enter the number of steps to move (up to 3 steps): ";
        cin >> inputSteps;

        if (inputSteps <= 0 || inputSteps > maxStepsPerMove) {
            cout << "Invalid input. Please enter a number between 1 and " << maxStepsPerMove << ".\n";
            continue;
        }

        stepsList.insert(inputSteps);

        if (stepsList.getTotalSteps() < requiredSteps) {
            int remainingSteps = requiredSteps - stepsList.getTotalSteps();
            cout << "Move " << remainingSteps << " more steps.\n";
        }

        int excessSteps = stepsList.getTotalSteps() - requiredSteps;
        if (excessSteps > 0) {
            cout << "You inadvertently went too far and fell into a bottomless abyss.";
            exit(0);
        }

    } while (stepsList.getTotalSteps() < requiredSteps || stepsList.getTotalSteps() > requiredSteps);
}

#endif