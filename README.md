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

## User Interface Specification

![Screenshot 2024-11-02 204017](https://github.com/user-attachments/assets/3b596527-10be-44b9-8d41-2fa89015d570)

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs and expected output, or any graphical user interface components if applicable (e.g. buttons, text boxes, etc). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

![IMG_A6B44891A8E4-1](https://github.com/user-attachments/assets/9a935f5b-d6da-4eb7-ab73-099cdcf5fc3f)

This is the first screen the user will see, which displays the name of the game and two options (1)Load Game and (2)Save Game. If the user inputs "1", the program will load the user's progress if correctly saved. If the user inputs "2", the program will overwrite the user's load file. Either option will lead to the Menu.

![Screenshot 2024-11-02 210621](https://github.com/user-attachments/assets/3e99b9d4-cc8b-4bc5-9572-50fbaae5f892)


![Screenshot 2024-11-02 210642](https://github.com/user-attachments/assets/c9b35dbd-e232-4c3c-bfbc-cbfc8c9a8741)


![Screenshot 2024-11-02 210644](https://github.com/user-attachments/assets/6fba26e6-01c3-49e5-9327-ddbb761e1fa2)


![Screenshot 2024-11-02 210725](https://github.com/user-attachments/assets/d315b191-46fc-4265-ad53-43342892fe17)


![Screenshot 2024-11-02 210707](https://github.com/user-attachments/assets/14427a8e-2e99-401f-be22-3da605c57e41)


![Screenshot 2024-11-02 210704](https://github.com/user-attachments/assets/85bd47f3-0c8b-4d6a-9d77-f35b1f3b954a)


![Screenshot 2024-11-02 210702](https://github.com/user-attachments/assets/e5dc2edc-5231-4302-abc0-fe000ae3aeb4)


![Screenshot 2024-11-02 210659](https://github.com/user-attachments/assets/6e1c0bc3-1bf3-43a5-bda6-9c7388a1abd7)


![Screenshot 2024-11-02 210657](https://github.com/user-attachments/assets/7e312b11-efd4-4dd5-a58d-c5945042fd8d)


![Screenshot 2024-11-02 210654](https://github.com/user-attachments/assets/01dadae7-8310-43b9-b26d-54751183afb9)


![Screenshot 2024-11-02 210651](https://github.com/user-attachments/assets/6b165194-e9e2-4124-8d99-71a947e9a5af)


![IMG_DD41A826A89A-1](https://github.com/user-attachments/assets/6bfa4fef-3958-45d0-89a8-49a9b5a1695d)


## Class Diagram
* Main: Manages the game session, linking the Player and WildPokemon instances. 
* Player: Manages the player's team, money, and experience, as well as interactions with the Inventory.
* Pokemon: Represents basic Pokémon attributes and actions.
* Attack: Represents each attack for Pokemon. Each Pokemon has four abilities. 
* WildPokemon: Extends Pokemon with scaling and random action capabilities.
* Battle: Manages the battle flow, handling player actions and random wild Pokémon responses.
* Inventory: Manages items the player has collected and allows item use.
* Item: Represents each item in the game, with methods to apply its effect to a Pokemon.
 ![image](https://github.com/user-attachments/assets/41c1cda3-9db1-4dc7-8b3c-5bf889e18830)



 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * Make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
>  * Each team member should also submit the Individual Contributions Form on Canvas for phase III. In this form, you need to fill in the names of all team members, the percentage of work contributed by each member for phase III, and a description of their contributions. Remember that each team member should submit the form individually.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
