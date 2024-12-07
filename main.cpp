#include "pokemon.h"
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    bool flag=true;
    int input;
    while(flag){
        cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
        cout << " _________________________________________________________________________________________________________________________________" << endl;
        cout << "|                                                                                                                                 |" << endl;
        cout << "|     ____    _____   _    _   _____   _     _   _____   __   _          ____     _____   _______   _______   _       _____   _   |" << endl;
        cout << "|    |  _ \\  |  _  | | |  / / |  ___| | \\   / | |  _  | |  \\ | |        |  _  \\  |  _  | |__   __| |__   __| | |     |  ___| | |  |" << endl;
        cout << "|    | |_) | | | | | | | / /  | |___  |  \\ /  | | | | | |   \\| |        | |_)  | | |_| |    | |       | |    | |     | |___  | |  |" << endl;
        cout << "|    |  __/  | | | | |    /   |  ___| | |\\ /| | | | | | | |\\   |        |  _  /  |  _  |    | |       | |    | |     |  ___| |_|  |" << endl;
        cout << "|    | |     | |_| | | |\\ \\   | |___  | |   | | | |_| | | | \\  |        | |_) \\  | | | |    | |       | |    | |___  | |___   _   |" << endl;
        cout << "|    |_|     |_____| |_| \\_\\  |_____| |_|   |_| |_____| |_|  \\_|        |_____/  |_| |_|    |_|       |_|    |_____| |_____| |_|  |" << endl;
        cout << "|                                                                                                                                 |" << endl;
        cout << "|_________________________________________________________________________________________________________________________________|" << endl;
        cout << endl;
        cout << "(1) New Game" << endl;
        cout << "(2) Load Game" << endl;
        cout << endl;
        cin >> input;
        if(cin.fail || input < 1 || input > 2){
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else{
            flag=false;
        }
    }
    if(input == 1){

    }
    else{
        cout << "What flashcard do you want to get?" << endl << endl;
        const char* directoryPath = ".";
        DIR* dir = opendir(directoryPath);
        if (dir == nullptr) {
            std::cerr << "Error opening directory." << std::endl;
            return 1;
        }


        struct dirent* entry;
        while ((entry = readdir(dir)) != nullptr) {
            if (entry->d_type == DT_REG && strstr(entry->d_name, ".txt") != nullptr) {
                std::cout << entry->d_name << std::endl;  
            }
        }


        closedir(dir);
        string filename;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, filename);
        ifstream myFile(filename);
        if (!myFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 0;
        }
        string line;
        string question;
        string answer;

        while (getline(myFile, line)) {
    if (line == "...") { 
        if (!question.empty() && !answer.empty()) {
            Flashcards loadFlashCard(question, answer);
            flashcards.setList(loadFlashCard);
            question.clear();
            answer.clear();
        }
    }
    else if (question.empty()) {
        question = line; 
    }
    else {
        answer = line; 
    }
    }

    if (!question.empty() && !answer.empty()) {
    Flashcards loadFlashCard(question, answer);
    flashcards.setList(loadFlashCard);
    }

    myFile.close();
    break;
    }
}
