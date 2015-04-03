#include<iostream>
#include "Shape.h"
using namespace std;

class Circle:public Shape{

    private:

        double radius;
        const double valueOfPie = 3.14159;

    public:
        Circle();
        Circle(double);
        Circle(double, string , bool);
        void setRadius(double);
        double getRadius();
        double getArea();
        double getPerimeter();
        string toString();
};
