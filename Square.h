#include <iostream>
#include "Rectangle.h"
using namespace std;

class Square:public Rectangle{

    private:


    public:
        Square();
        Square(double);
        Square(double, string, bool);
        void setSide(double);
        double getSide();
        string toString();

};
