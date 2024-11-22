#include "../header/Inventory.h"

Inventory::~Inventory()
{
    for (int i = 0; i < items.size(); ++i)
    {
        delete items.at(i);
    }
}

void Inventory::store()
{
    bool flag = true;
    int choice = 0;
    cout << endl << "Welcome to the Poké Mart!" << endl << endl;

    while (flag)
    {
        cout << "Options:" << endl;
        cout << "(1) Buy Items" << endl;
        cout << "(2) Sell Items" << endl;
        cout << "(3) View My Items" << endl;
        cout << "(4) Exit Poké Mart" << endl << endl;
        cout << "Current Balance: " << getMoney() << "¥" << endl << endl;
        cout << "Select an option: ";
        cin >> choice;
        cout << endl;

        while (cin.fail() || choice < 1 || choice > 4)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> choice;
            cout << endl;
        }
        if (choice == 1)
        {
            buyItem();
        }
        else if (choice == 2)
        {
            sellItem();
        }
        else if (choice == 3)
        {
            viewMyItems();
        }
        else if (choice == 4)
        {
            flag = false;
        }
    }
}

void Inventory::viewMyItems()
{
    cout << "Current Items:" << endl << endl;

    for (int i = 0; i < items.size(); ++i)
    {
        cout << "(" << i + 1 << ") Name: " << items.at(i)->getName() << endl;
        cout << "    Amount: " << items.at(i)->getAmount() << endl << endl;
    }
    cout << endl;
}

void Inventory::storeItems()
{
    int count = 1;
    cout << "Store:" << endl;

    for (int i = 0; i < items.size(); ++i)
    {
        cout << "(" << i + 1 << ") ";
        items.at(i)->displayInformation();
        cout << endl;
    }
}

void Inventory::buyItem()
{
    int i = 0;
    bool flag = true;

    while (flag)
    {
        storeItems();
        cout << "(9) Go Back" << endl << endl;
        cout << "Current Balance: " << getMoney() << "¥" << endl << endl;
        cout << "Select which item to buy: ";
        cin >> i;
        --i;
        cout << endl;

        while (cin.fail() || i < 0 || i > 8)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> i;
            --i;
            cout << endl;
        }

        if (i == 8)
        {
            return;
        }
        else
        {
            if (items.at(i)->getPrice() > money)
            {
                cout << "Insufficient funds." << endl << endl;
            }
            else
            {
                items.at(i)->addAmount(1);
                money -= items.at(i)->getPrice();
                cout << "Item has been added!" << endl << endl;
            }
        }
        cout << "(1) Purchase another item" << endl;
        cout << "(2) Go Back" << endl;
        cout << "Select an option: ";

        cin >> i;
        cout << endl; 

        while (cin.fail() || i < 1 || i > 2)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> i;
            --i;
            cout << endl;
        }

        if (i == 2)
        {
            flag = false;
        }
    }
}

void Inventory::sellItem()
{
    int i = 0;
    bool flag = true;

    while (flag)
    {
        viewMyItems();
        cout << "(9) Go Back" << endl << endl;
        cout << "Current Balance: " << getMoney() << "¥" << endl << endl;
        cout << "Select which item to sell: ";
        cin >> i;
        --i;
        cout << endl;


        while (cin.fail() || i < 0 || i > 8)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> i;
            --i;
            cout << endl;
        }

        if (i == 8)
        {
            return;
        }
        else
        {
            if (items.at(i)->getAmount() == 0)
            {
                cout << "Insufficient amount." << endl << endl;
            }
            else
            {
                items.at(i)->sellAmount(1);
                money += items.at(i)->getPrice() / 2;
                cout << "Item has been sold." << endl << endl;
            }
        } 
        cout << "(1) Sell another item" << endl;
        cout << "(2) Go Back" << endl;
        cout << "Current Balance: " << getMoney() << "¥" << endl;
        cout << "Select an option: ";

        cin >> i;
        cout << endl; 

        while (cin.fail() || i < 1 || i > 2)
        {
            cout << "Invalid option. Try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> i;
            --i;
            cout << endl;
        }

        if (i == 2)
        {
            flag = false;
        }       
    }
}

void Inventory::addMoney(int amount)
{
    money += amount;
}

int Inventory::getMoney()
{
    return money;
}

void Inventory::addItem(Item* newItem)
{
    cout << "Implement addItem()" << endl;
}

void Inventory::accessPC()
{
    cout << "Implement accessPC()" << endl;
}