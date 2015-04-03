#include<iostream>
#include<sstream>
#include "Circle.h";
using namespace std;

Circle::Circle()
{
    setRadius(1.0);
}

Circle::Circle(double uradius)
{
    setRadius(uradius);
}

Circle::Circle(double uradius, string ucolor, bool ufilled):Shape(ucolor, ufilled)
{
    setRadius(uradius);
}

void Circle::setRadius(double uradius)
{
    radius = uradius;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return valueOfPie* radius * radius;
}

double Circle::getPerimeter()
{
    return 2*valueOfPie*radius;
}

string Circle::toString()
{
    stringstream radius;
    radius<<getRadius();
    return "A Circle with radius=" + radius.str() + "which is a subclass of " + Shape::toString();
}
