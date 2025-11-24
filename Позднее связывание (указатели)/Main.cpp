#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rhombus.h"

using namespace std;

int main()
{
    Figure* figure = nullptr;

    int choice = 0;

    cout << "1. Square and lens circle" << endl;
    cout << "2. Square and lens rectangle" << endl;
    cout << "3. Square and lens triangle" << endl;
    cout << "4. Square and lens square" << endl;
    cout << "5. Square and lens rhombus" << endl;
    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            figure = new Circle;
            figure->SetDimension(10.0);
            break;
        case 2:
            figure = new Rectangle;
            figure->SetDimension(5.5, 10.0, 5.5);
            break;
        case 3: 
            figure = new Triangle;
            figure->SetDimension(5.5, 10.0, 5.2);
            break;
        case 4:
            figure = new Square;
            figure->SetDimension(5.5, 5.5, 5.5);
            break;
        case 5:
            figure = new Rhombus;
            figure->SetDimension(5.5, 10.0, 5.5);
            break;
    }

    figure->ShowArea();
    figure->ShowLens();

    return 0;
}