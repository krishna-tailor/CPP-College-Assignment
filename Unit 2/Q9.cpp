#include <iostream>
using namespace std;

class Shape
{
public:
    float l;
};

class Square : Shape
{
public:
    Square(float l)
    {
        this->l = l;
    }

    void area() { cout << "Area Of Square Is: " << l * l; }
};
int main()
{
    system("clear");
    Square a(2.5);
    a.area();
}