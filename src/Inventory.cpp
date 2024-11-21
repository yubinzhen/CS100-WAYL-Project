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
    cout << "Welcome to the Poké Mart!" << endl << endl;

    while (flag)
    {
        cout << "Options:" << endl;
        cout << "(1) Buy Items" << endl;
        cout << "(2) Sell Items" << endl;
        cout << "(3) View My Items" << endl;
        cout << "(4) Exit Poké Mart" << endl;

        cin >> choice;

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
        cout << "Amount: " << items.at(i)->getAmount() << endl;
    }
}

void Inventory::storeItems()
{
    int count = 1;
    cout << "Store:" << endl << endl;

    for (int i = 0; i < items.size(); ++i)
    {
        cout << "(" << i + 1 << ") " << endl;
        items.at(i)->displayInformation();
    }
}

void Inventory::buyItem()
{
    int i = 0;
    bool flag = true;

    while (flag)
    {
        storeItems();
        cout << "(9) Go Back" << endl;
        cout << "Select which item to buy: " << endl;
        cin >> i;
        --i;

        if (i = 9)
        {
            flag = false;
        }
        else
        {
            while (i < 1 || i > 8)
            {
                cout << "Invalid option. Try again." << endl;
                cin >> i;
                --i;
            }

            if (items.at(i)->getPrice() > money)
            {
                cout << "Insufficient funds." << endl;
            }
            else
            {
                items.at(i)->addAmount(1);
                money -= items.at(i)->getPrice();
                cout << "Item has been added." << endl;
                flag = false;
            }
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
        cout << "(9) Go Back" << endl;
        cout << "Select which item to sell: " << endl;
        cin >> i;
        --i;

        if (i = 9)
        {
            flag = false;
        }
        else
        {
            while (i < 1 || i > 8)
            {
                cout << "Invalid option. Try again." << endl;
                cin >> i;
                --i;
            }

            if (items.at(i)->getAmount() == 0)
            {
                cout << "Insufficient amount." << endl;
            }
            else
            {
                items.at(i)->sellAmount(1);
                money += items.at(i)->getPrice() / 2;
                cout << "Item has been sold." << endl;
                flag = false;
            }
        }
    }
}

void Inventory::addItem(Item* newItem)
{
    cout << "Implement addItem()" << endl;
}

void Inventory::accessPC()
{
    cout << "Implement accessPC()" << endl;
}