#include <iostream>
#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"

using namespace std;

int main() {
    float height, width, base, area;
    int choice;

    cout << "Do you want to find the area of a rectangle or triangle?" << endl;
    cout << "Enter 1 for rectangle or 2 for triangle." << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the height of the rectangle: " << endl;
        cin >> height;
        cout << "Enter the width of the rectangle: " << endl;
        cin >> width;

        Rectangle rect1;
        rect1.set_width(width);
        rect1.set_height(height);
        cout << "Rectangle area: " << rect1.area() << endl;
    } else if (choice == 2) {
        cout << "Enter the base of the triangle: " << endl;
        cin >> base;
        cout << "Enter the height of the triangle: " << endl;
        cin >> height;

        Triangle tri1;
        tri1.set_base(base);
        tri1.set_height(height);
        cout << "Triangle area: " << tri1.area() << endl;
    }

    return 0;
}