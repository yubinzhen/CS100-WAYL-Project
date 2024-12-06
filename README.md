# A Text-Based Role-Playing Game
 Authors: [Luke Matsunaga](https://github.com/ActualCookie88), [Wesley Wu](https://github.com/xxiyun), [Yubin Zhen](https://github.com/yubinzhen), [Allen Ahn](https://github.com/hanking7)

## Project Description
In this game, the user can first choose one Pokemon among three to play with, and use their Pokemon to fight and catch other wild Pokemon. Pokemon are associated with different types of types and abilities, and their stats vary by their level. At each step of the game, a narrative is presented and the user can select between different options. The goal of the user is to continually level up their Pokemon through battles with CPUs and eventually catch every Pokemon in this game. 

We are interested in the idea of creating interactive experiences that engage users. An RPG will give us the most creative freedom. We are interested in creating our own turn-based game derived from Pokemon. We will be able to create our own features based on the Pokemon games while also learning how to implement the game mechanics and gameplay experiences that power them. We will also be able to add our own narrative spin on it.

### Language and Tools:
C++\
Visual Studios Code\
Github/Git\
Valgrind\
GDB\
CMake

### Input/Outputs:
Input: All input comes from the user's keyboard, which determines certain actions such as switching between Pokemon, choosing to battle a Pokemon, or selecting options during a battle.\
Output: The output includes updating and displaying the user and CPU Pokemon’s statuses, or the result of a certain action of the user.

### Features:
Battling wild Pokemon with owned Pokemon\
User choice to attack, heal, catch, etc. during battle\
Distinct attack, health, and type stats for each Pokemon\
Experience/leveling and money system\
Able to use/buy items with money earned from battles\
Catch success rate for wild Pokemon varies \
Wild Pokemon appearance/stats scale to the user’s progress\
Wild Pokemon actions are randomized 
Saving and loading game progress

## User Navigation Diagram

![UI Navigation Diagram (2)](https://github.com/user-attachments/assets/2a2a3c0d-61b4-437e-95d1-6f6e06da0a94)


### Screen Layouts

![Screenshot 2024-11-21 233350](https://github.com/user-attachments/assets/57145a91-0331-40ee-b64e-7918ff5ee0f3)

This is the first screen the user will see, which displays the name of the game and two options (1)Load Game and (2)Save Game. If the user inputs "1", the program will load the user's progress if correctly saved. If the user inputs "2", the program will overwrite the user's load file. Either option will lead to the Menu.

![image](https://github.com/user-attachments/assets/b3308e06-a75e-4daa-9ce6-89db5a73f563)

This screen provides the user with 5 main options. The user can choose to (1) go to the Inventory screen, (2) the Store screen, or (3) search for Pokemon which leads to the Battle Menu Screen. The user can also (4) view the Pokemon they own or (5) log the user out by exiting the program and returning to the initial screen.

![image](https://github.com/user-attachments/assets/03ac82d7-ec2b-4411-835b-a17714f6c033)

This screen displays the user's currently owned items.

![image](https://github.com/user-attachments/assets/6f3df295-fa4c-4a71-8586-01c355172711)

This screen displays the Pokemon they have in storage, and the user can (1) view the stats of a specific pokemon, (2) view or change the pokemon they have in their current battle team, or (3) go back to the previous screen. This screen's options may vary depending on if the user originates from the menu screen or battle menu screen.

![Screenshot 2024-11-21 233540](https://github.com/user-attachments/assets/41facd8d-d847-4e21-a3dd-e77c4b92c179)

This screen displays the items that the user has, and the user can (1) view the stats of a specific item or (2) go back to the previous screen. This screen's options may vary depending on if the user originates from the menu screen or battle menu screen.

![Screenshot 2024-11-21 233546](https://github.com/user-attachments/assets/c2fbeef0-f09f-4438-bf55-67b114be9f99)

This screen will show the user all the different items the user can purchase (ex. Pokeball, revive, etc.) and what the user balance is. The user can (1) view the stats of a specific item, (2) purchase a specific item, or (3) go back to the previous screen if the user is done shopping.

![Screenshot 2024-11-21 233550](https://github.com/user-attachments/assets/d1a27a7f-b334-4660-91bf-00f8f9ecee57)

This screen will be displayed when the user searches for new Pokemon and enters a battle. The user can (1) view or use any owned Items, (2) view or edit their Pokemon Team, (3) view the Active Pokemon's Moveset, (4) view the Wild Pokemon's stats, or (5) attempt to flee the battle

![Screenshot 2024-11-21 233555](https://github.com/user-attachments/assets/eca046e5-5578-4957-9f06-b3db8b980591)


This screen will display all the moves the Active Pokemon has (attack, defense, etc.) and the trainer can select a move to use in their battle to try to win. There is also an option to go back to the previous menu if the trainer does not want to use a moveset. 

![Screenshot 2024-11-02 210704](https://github.com/user-attachments/assets/d22668c2-161f-40da-8149-4e1f8a1e2349)

This screen will display the result of the user’s decision in the previous screen, such as using an item, attempting to catch the Wild Pokemon, swapping the active Pokemon for another in the team, using an attack/defense move, or attempting to flee. If the Wild Pokemon is alive, it will lead to the Wild Pokemon Move screen, but if it is dead, the program will send the user to the Menu screen.

![Screenshot 2024-11-02 210707](https://github.com/user-attachments/assets/3bbb7508-2343-4223-ad45-54b21c0472c5)

This screen displays the Wild Pokemon’s current status and the decisions it makes, such as attacking/defending or fleeing the battle. If a move kills an Active Pokemon, the user will be prompted to choose an alive one, but if the Active Pokemon lives, the program will continue to the Battle Menu screen. If all user Pokemon are dead, the program will lead the user to the YOU LOST screen.

![Screenshot 2024-11-21 233600](https://github.com/user-attachments/assets/d2191188-06d8-47a9-9871-c389407ce0ce)

This is the screen the user will see if they lost a Pokemon battle. They are given an option (1) to use a revive item to revive their Pokemon or to (2) continue battling or give up on the battle and receive a penalty.


## Class Diagram
![image](https://github.com/user-attachments/assets/61f8fc44-d5a1-4672-88cd-ee8ca99f2f3c)


* Main: Manages the game session, linking the Player and WildPokemon instances. 
* Player: Manages the player's team, money, and experience, as well as interactions with the Inventory.
* Pokemon: Represents basic Pokémon attributes and actions.
* Attack: Represents each attack for Pokemon. Each Pokemon has four abilities. 
* WildPokemon: Extends Pokemon with scaling and random action capabilities.
* Battle: Manages the battle flow, handling player actions and random wild Pokémon responses.
* Inventory: Manages items the player has collected and allows item use as well as purchase and sell items.
* Item: Represents each item in the game, with methods to apply its effect to a Pokemon.
* PC: Manages the player's Pokemon and team.

One SOLID principle we applied to the new class diagram was the Single Responsibility. One way we applied it was by removing the feature to access and edit the player’s Pokemon and implementing a separate class, PC, to address that feature. These changes make the code less complex, giving a well-organized, intuitive codebase that allows for better readability.

A second SOLID principle we applied was Liskov Substitution. For example, the StandardBall, GreatBall, and UltraBall subclasses are all coded to be interchangeable as they all have the same functions. These changes allow for code reusability and maintainability along with reducing unexpected bugs caused by inappropriate subclass behavior.

A third SOLID principle we applied to our new class diagram was Interface Segregation Principle (ISP). We applied this principle so users will not be forced to depend on interfaces they don’t use. For example, we created separate interfaces for different concerns. Our inventory class only manages items and money and does not enforce unrelated responsibilities to the class like battling. Our Pokemon class is focused mainly on the Pokemon’s actions and attributes and only our battle class contains battle logic. These changes allowed us to change things easily and made it easier to keep track of things.

 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for this final phase. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for the final phase, and a description of their contributions. Remember that each team member should submit the form individually.
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
