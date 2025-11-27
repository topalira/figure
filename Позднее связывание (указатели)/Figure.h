#pragma once

class Figure
{
protected:

    double m_value1;
    double m_value2;
    double m_value3;

public:

    void SetDimension(const double value1);
    void SetDimension(const double value1, const double value2, const double value3);

    virtual void ShowArea() const = 0;
    virtual void ShowLens() const = 0;
};