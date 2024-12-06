#include <iostream>
#include <limits>
using namespace std;

int main()
{
    bool flag = true;
    int choice = 0;

    //Temporary cout
    cout << endl << "GAME START" << endl << endl;

    while (flag)
    {
        cout << "(1) Load Game" << endl;
        cout << "(2) New Game" << endl;
        cout << "Select an option: ";
        cin >> choice;
        cout << endl;

        while (cin.fail() || choice < 1 || choice > 2)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> choice;
            cout << endl;
        }

        if (choice == 1)
        {
            cout << "Implement Load Game" << endl;
        }
        else if (choice == 2)
        {
            cout << "Implement New Game" << endl;
        }
    }

    return 0;
}