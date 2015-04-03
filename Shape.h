#include<iostream>
using namespace std;

class Shape{
    private:
        string color;
        bool filled;


    public:
        Shape();
        Shape(string, bool);
        void setColor(string);
        void setFilled(bool);
        string getColor();
        bool isFilled();
        string toString();
};
