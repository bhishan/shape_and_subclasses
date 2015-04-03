#include<iostream>
using namespace std;
#include "Shape.h"
Shape::Shape()
{
    setColor("green");
    setFilled(true);

}

Shape::Shape(string ucolor, bool ufilled)
{
    setColor(ucolor);
    setFilled(ufilled);

}

void Shape::setColor(string ucolor)
{
    color = ucolor;
}

void Shape::setFilled(bool ufilled)
{
    filled = ufilled;
}

string Shape::getColor()
{
    return color;
}

bool Shape::isFilled()
{
    return filled;
}

string Shape::toString()
{
    string filledOrNOt = isFilled()?"filled":"not filled";
    return "A Shape with color of" + getColor() + "and" + filledOrNOt;
}

