#include <iostream>

#include "Rhombus.h"

using namespace std;

void Rhombus::ShowArea() const
{
    cout << "Square of rhombus: " << m_value1 * m_value2 << endl;
}

void Rhombus::ShowLens() const
{
    cout << "Lens of rhombus: " << 2 * (m_value1 + m_value2) << endl;
}