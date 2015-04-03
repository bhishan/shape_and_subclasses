#include<iostream>
#include<sstream>
#include "Square.h"

Square::Square():Rectangle()
{

}

Square::Square(double uside):Rectangle(uside,uside)
{

}

Square::Square(double uside, string ucolor, bool ufilled):Rectangle(uside,uside, ucolor, ufilled)
{

}

void Square::setSide(double uside)
{
    Rectangle::setLength(uside);
}

double Square::getSide()
{
    Rectangle::getLength();
}

string Square::toString()
{
    stringstream side;
    side<<getSide();
    return"A Square with side=" + side.str() + " which is a subclass of " + Rectangle::toString();
}
