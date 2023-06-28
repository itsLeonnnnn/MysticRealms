# Mystic Realm
Developed by CPT113 Group 8 for Hackathon Assignment 2
***

## Table of contents
1. [Description of the game](#description)
2. [Features of the game](#features)
3. [How to play the game?](#how)
4. [How object-oriented concepts were used to develop the game](#howOOP)
5. [How linked lists/stacks/queues play a role in the game](#howLL)
   
***
## Description of the game <a name="description"></a>
In our thrilling game, the player is transported to an extraordinary world after a car accident. As the player, you find yourself in a mesmerizing pixelated form and hear a mysterious voice urging you to overcome challenges and find your way back home.

As you explore this enigmatic realm, a radiant door catches your attention, beckoning you forward. You discover that you are inside a peculiar school, where robotic beings move unaware of your presence. To escape, you must awaken their consciousness.

Driven by the voice of a sorceress, you embark on a determined journey, venturing through the school's hushed corridors. Along the way, you encounter formidable adversaries, including a goblin, a witch, and a big boss. In order to move forward, you must engage in strategic battles, defeating each opponent to progress.

Each encounter poses unique challenges, demanding your unwavering focus and strategic acumen. Only through overcoming these adversaries can you unlock subsequent stages of your journey. With each hard-fought victory, you inch closer to your ultimate goal, while relishing a sense of accomplishment that fuels your determination to escape this captivating yet perilous realm. However, failure to overcome these challenges results in losing the game.

As you continue your adventure, the mesmerizing pixelated world around you intensifies, immersing you in a surreal atmosphere. As you conquer each boss, a treasure appears, illuminating the surroundings. These treasures hold extraordinary power and significance, representing milestones in your journey. You must collect these treasures to unlock new abilities, uncover hidden secrets, and strengthen yourself for the challenges ahead. Each treasure you acquire adds an element of progression and customization to your character, making you more formidable as you delve deeper into the game.

To ensure a seamless and personalized gaming experience, the game incorporates an autosave feature. This feature automatically saves your progress without any user input, allowing you to effortlessly resume your journey whenever you return to the game. By eliminating the need for manual saving, you can easily pick up where you left off, ensuring a smooth and uninterrupted gameplay experience.

So, will you conquer the goblin, witch, and big boss, unlocking your path to freedom? Only your skills, determination, and strategic thinking will lead you back to the familiar world you long for.

***


## Features of the game <a name="features"></a>

 1. **Game Over and Victory Condition**

    
We have implemented game over condition, in which the player health have reached zero and define victory condition in which the player has conquered the goblin, witch and big boss.
    
 

 2. **Combat system**

We have implemented a combat system that allows player to engage with battles with the goblin, witch and big boss and have include mechanics such as attack, heal, critical hit and magic attack. 
  

 3. **Leveling system**

We have designed a leveling system where players advance by defeating specific enemies in a predetermined order. For example, players must first win the battle with a Goblin, followed by a Witch, and finally face off against a Big Boss. Each victory unlocks the next level or area of the game, presenting new challenges and enemies to overcome.  his modified leveling system allows players to progress through the game by defeating specific enemies, effectively serving as milestones or checkpoints that unlock new content and challenges.

     

 4. **Save and load feature**

Our game offers a convenient save and load feature, allowing players to effortlessly continue their adventure or start a new game. Upon entering the game, players are presented with a user-friendly menu that provides four option. Two of the options are starting a new game or loading a previously saved progress.

By choosing the "Start Game" option, players initiate a fresh and immersive adventure, delving into the extraordinary world and captivating storyline. They will embark on a thrilling journey, overcoming challenging stages and encountering formidable creatures.
    
Alternatively, selecting the "Load Previous Progress" option allows players to seamlessly continue their previous adventure. By accessing their autosaved game files, they can pick up right where they left off, immersing themselves back into the mysterious realm, resuming their exploration.

The save and load feature serves as a valuable and convenient tool for players, eliminating the need for manual saving.
    
This enhances their overall enjoyment and ensures a personalized gameplay experience tailored to their preferences.

With the inclusion of the save and load feature, our game grants players the freedom to choose their gaming path, whether it's embarking on a new adventure or seamlessly continuing their journey from the autosaved point.
   
     

***

## How to play the game <a name="how"></a>

### Game Rules

 - After being transported to a mysterious and fantastical world, you
   embark on an epic adventure.
 - Your goal is to collect three precious gemstones and defeat three
   formidable bosses to achieve victory.
 - Along the way, you will encounter various challenges and enemies.
 - Your choices and actions will influence the outcome of the game, so
   choose wisely.
 - Your character's health points (HP) represent their vitality. If your
   HP reaches zero, you lose the game.
 - After completing each stage, your HP will be restored to its maximum
   value in preparation for the next challenge.
 - To win the game, you must collect three precious gemstones and defeat
   all three bosses: the goblin, the witch, and the big boss.
 - Strategic thinking and resource management are crucial to win the
   game.

### Guidelines

1. This game is an immersive text-based role-playing game that takes you on an exciting journey through a fantasy world filled with challenges. 

2. In this game, you will assume the role of a courageous player and embark on an epic adventure. Your decisions and actions will shape the outcome of the game, so choose wisely and brace yourself for an unforgettable experience!


3. As the game begins,you will be greeted with a welcome word, that welcome the  to this game. The player will get to choose 4 options.

       a. "Start Game": Begin a new game.
       b. "Load Previous Progress": Resume the game from where you left off.
       c. "Credits": View the credits for the game, acknowledging the developers.
       d. "Quit": Exit the game.

4. If you choose "Start Game":

        a. Listen to the guidance of a mysterious voice that will guide you on how you could escape the realm.
        b. You will need to collect three precious treasures and defeat three formidable bosses to achieve victory, in order to escape this realm

   
6. When facing the goblin, choose your actions wisely:

        a. "Attack": Deal damage to the goblin.
        b. "Critical Hit": Deliver a powerful strike at the cost of 
        losing 5 HP.
        c. "Consume Health Potion": Heal your HP if it's low.

7. After your action, see the outcome and adjust your HP and the goblin's HP accordingly.

8. Continue your adventure, facing stronger enemies and bosses in each stage. Beware of their abilities and plan your strategy accordingly.

9. After each stage, your HP will be restored to its maximum value, ensuring you are prepared for the next challenge.

10. If your HP reaches zero during any stage, you lose the game and cannot return to your original world. You can choose to restart or quit the game.

11. If you successfully defeat all three bosses and collect the three gemstones, you win the game! Congratulations! You can now return to your original world.

12. If you choose "Load Previous Progress," the game will resume from where you left off. Get ready to continue your adventure.

13. If you choose "Credits," you will see a page acknowledging the creators and contributors of the game. It provides additional information about the game's purpose, development team, and any disclaimers regarding bugs or errors.

14. If you choose "Quit," the game will gracefully exit.

Enjoy your immersive journey through the fantasy world and may you triumph over the challenges that lie ahead! 
***
## How object-oriented concepts were used to develop the game <a name="howOOP"></a>


Our RPG game's code has been organized and structured using object-oriented principles, which provide a powerful framework for designing and implementing complex systems.  

> #### Inheritance for Code Reuse and Specialization

The game uses inheritance to create specialized characters in order to facilitate code reuse and specialisation. Inheritance is used to build derived classes that inherit the traits and characteristics of a base class. An "is-a" relationship between classes is established, whereby a derived or child class inherits the characteristics of a base or parent class. There are a number of classes in our programmes, including the Goblin, Witch, and Boss classes, all of which are derived from the Character class to obtain the necessary information for each character in the game. 

Each of our class is represented by a class definition, which includes the properties and behaviors specific to the class. 

The core foundation of our game's object-oriented design lies in the Character class. This base class encapsulates common properties and behaviors shared by all characters in the game, such as health, strength, magic, and potions. By defining these attributes in the base class, we promote code reuse and avoid duplication of code. Furthermore, encapsulating these attributes within the class provides data integrity and controlled access through member functions.

To create specialized characters in the game, we employ derived classes that inherit from the Character class.

> #### The Derived Classes: Goblin, Witch, and Boss

The Goblin, Witch, and Boss classes are derived classes that extend the functionality of the base class while adding their own unique characteristics. These derived classes inherit the attributes and member functions defined in the base class, allowing them to leverage the existing code and behavior.

Each derived class defines its own specific behaviors through member functions. For example, the Goblin class may have member functions for attacking, healing, and performing critical hits, while the Witch class may have additional member functions for magic attacks. These member functions represent the actions and abilities of each character type, encapsulating their specific behaviors and enabling modularity within the codebase.


> #### Code Organization and Header Files

To facilitate better code organization and management, the class definitions are separated into individual header files. This modular approach allows for better code maintainability and reusability, as each class declaration is encapsulated in its respective header file. By having separate header files for each class, we can easily navigate and modify the codebase, ensuring a clear separation of concerns and promoting a more structured and organized development process.


> #### Conclusion

By utilising inheritance, our RPG game's code achieves a clear and hierarchical organization of classes, providing a flexible and extensible framework for implementing various game systems. The base Character class provides a foundation with shared functionality, while the derived classes specialize and extend that functionality to create unique character types. This approach promotes modularity, maintainability, and extensibility in the design and implementation of RPG game systems, making the codebase easier to understand, modify, and enhance.

In conclusion, the use of object-oriented principles, specifically inheritance, in our RPG game's code allows for code reuse, specialization, and organization. The base Character class and its derived classes provide a structured and modular approach to represent different character types and their behaviors. This approach enhances code maintainability, promotes a clear separation of concerns, and enables future expansion and modification of the game's systems.



***
## How linked lists/stacks/queues play a role in the game <a name="howLL"></a>

In our captivating game, players embark on an extraordinary adventure through a realm filled with challenges and powerful adversaries. The linked list plays a crucial role in tracking the player's progress, managing collected treasure, enabling the save and load feature and ultimately enabling their exit from the game.

There are two linked lists in the game, the first linked list is called InventoryList while the second linked list is called SaveNode. 



> #### (1) Tracking Player Progress and Achievements with InventoryList Linked List

In our captivating game, players find themselves in an extraordinary realm filled with challenges and powerful adversaries. The first linked list, known as the "InventoryList" plays a crucial role in tracking the player's progress, managing collected treasures, and enabling their victory in the game.

The InventoryList serves as a repository for the player's collection of three treasures: the gold ingot, emerald, and diamond. Each treasure represents a significant accomplishment in the player's quest, obtained by defeating formidable bosses. The linked list dynamically updates as treasures are acquired, providing an accurate and accessible record of their progress.

Upon defeating a boss and acquiring a treasure, the InventoryList's appendNode function is called to add the treasure to the list. This dynamic updating ensures that the player's progress is accurately reflected, creating a visual representation of their journey.

In addition to the appendNode function, the InventoryList also includes a displayList function. This function allows the player to see the treasures they have collected so far. By utilizing the displayList function, players can keep track of their progress and understand how many treasures they have collected. This knowledge is crucial as they need to gather all three precious treasures and defeat three formidable bosses to achieve victory in the game.

The InventoryList, with its appendNode and displayList functions, provides players with a clear overview of their achievements and progress. It adds structure and cohesion to their journey, keeping them engaged and motivated to collect all the treasures and overcome the challenges that lie ahead.

Without the InventoryList and its associated functions, the player's sense of accomplishment and progression would be diminished. The linked list's role in tracking the player's treasure collection ensures that each acquired treasure is recognized and accounted for, contributing to the overall immersive experience of the game.

In conclusion, the InventoryList, with its appendNode and displayList functions, plays a crucial role in tracking the player's progress and achievements in the game. By dynamically updating as treasures are acquired, it provides a visual representation of the player's journey and motivates them to collect all the treasures and defeat the formidable bosses. The inclusion of the InventoryList enhances the game's structure, engagement, and sense of accomplishment for the player.



> #### (2) Game Completion and Linked Lists

The ultimate goal of the player is to exit the realm, but this feat can only be achieved by collecting all three treasure: the gold ingot, emerald, and diamond. Here, the first linked list plays an irreplaceable role in determining the player's progress towards game completion. By acting as a condition for exit, the linked list ensures that the player has collected all three treasures before the player could back to the world he used to be. Without the linked list, the player would be unable to fulfill the requirements for game completion and subsequent exit.


> #### (3) Enabling Save and Load Functionality with SaveNode Linked List

In addition to the Treasure Linked List, the game also utilizes another linked list called the SaveNode Linked List for the save and load functionality. The SaveNode Linked List stores crucial game data, including the completed levels by the player.


The SaveNode Linked List is made up of individual nodes, where each node represents a completed level in the game.

 - #### appendNode function
To add a completed level to the SaveNode Linked List, the appendNode function is used. It creates a new node with the completed level information and adds the new node to the beginning of the linked list, representing the most recently completed level.

The SaveNode Linked List is made up of individual nodes, where each node represents a completed level in the game.

 - #### saveGameToFile function

The saveGameToFile function is responsible for saving the completed levels stored in the SaveNode Linked List to a file. It opens the file and traverses the linked list, writing the completedLevel of each node to the file. 

 - #### loadGameFromFile function

The loadGameFromFile function is used to load the saved game data from a file and add it to the existing SaveNode Linked List. It opens the file, reads the completedLevel from the file, creates a new node with the level, and adds it to the linked list. This allows the player to continue their game progress from the saved point.

 - #### freeSaveData function

The freeSaveData function is used in our program to free the memory used by the SaveNode Linked List when it's no longer needed. In your code, the freeSaveData function is called after the game is cleared or when loading is complete.

Overall, the SaveNode Linked List serves as a way for the game to keep track of the player's progress, save it to a file, and load it back when needed, providing a smooth and continuous gaming experience.


> ####  (4) Enhancing player engagement

By dynamically allocating and updating the linked lists, the game allows treasures to be added or removed as the player interacts with the game world. This dynamic nature of the linked lists enables the player to actively engage with their inventory, visualize their progress, and make strategic decisions that directly impact their gameplay experience.

The inclusion of linked lists, such as the InventoryList Linked List and the saveNode Linked List, enhances player engagement and immersion. These linked lists provide clear visual representations of player progress, inventory management, and saved game data, creating a sense of achievement and progression.

In our game, the linked lists are being dynamically allocated. This has enabled the treasures being added or removed easily as the player interacts with the game world, and game data being saved and loaded seamlessly, creating a sense of agency and immersion. As a result, players can actively engage with their inventory, visualize their progress, and make strategic decisions that directly impact their gameplay experience.They can strategically plan their battles, develop their skills, overcome formidable adversariesand adapt their gameplay strategy based on the information provided by the linked lists.
