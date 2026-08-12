// Rectangle and area program using inheritence

#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length, width;
    Rectangle() {}
    Rectangle(float length, float width)
    {
        this->length = length;
        this->width = width;
    }
};

class Area : public Rectangle
{
public:
    Area(float length, float width)
    {
        Rectangle(this->length = length, this->width = width);
    }

    void area()
    {
        cout << "Area : " << length * width;
    }
};
int main()
{
    system("clear");
    Area a(10,20);
    a.area();
}