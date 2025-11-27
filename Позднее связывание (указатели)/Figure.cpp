#include <iostream>

#include "Figure.h"

using namespace std;

void Figure::SetDimension(const double value1)
{
    SetDimension(value1, value1, value1);
}

void Figure::SetDimension(const double value1, const double value2, const double value3)
{
    m_value1 = value1;
    m_value2 = value2;
    m_value3 = value3;
}

//void Figure::ShowArea() const
//{
//    cout << "Value is undefined" << endl;
//}
//
//void Figure::ShowLens() const
//{
//    cout << "Value is undefined" << endl;
//}
