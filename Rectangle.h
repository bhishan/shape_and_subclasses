#include<iostream>
#include "Shape.h"
class Rectangle:public Shape{
    private:
        double width;
        double length;

    public:
        Rectangle();
        Rectangle(double, double);
        Rectangle(double, double, string, bool);
        void setWidth(double);
        void setLength(double);
        double getWidth();
        double getLength();
        double getArea();
        double getPerimeter();
        string toString();
};
