#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowArea() const
{
    cout << "Square of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}

void Triangle::ShowLens() const
{
    cout << "Lens of triangle: " << m_value1 + m_value2 + m_value3 << endl;
}