#include <iostream>
#include<sstream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    setWidth(1.0);
    setLength(1.0);
}

Rectangle::Rectangle(double uwidth, double ulength)
{
    setWidth(uwidth);
    setLength(ulength);
}

Rectangle::Rectangle(double uwidth, double ulength, string ucolor, bool ufilled):Shape(ucolor, ufilled)
{
    setWidth(uwidth);
    setLength(ulength);
}

void Rectangle::setWidth(double uwidth)
{
    width = uwidth;
}

void Rectangle::setLength(double ulength)
{
    length = ulength;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getArea()
{
    return width*length;
}

double Rectangle::getPerimeter()
{
    return 2*(width + length);
}

string Rectangle::toString()
{
    stringstream length, width;
    length<<getLength();
    width<<getWidth();
    return "A Rectangle with width = " + width.str() + "and length = " + length.str() + "which is a subclass of " + Shape::toString();
}
