// Program To Find Area of Rectangle and return object

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int lenght, breadth,Area;
    Rectangle(){}
    Rectangle(int l, int b)
    {
        lenght = l;
        breadth = b;
    }

    Rectangle area()
    {
        Rectangle temp(lenght,breadth);
        temp.Area = lenght * breadth;
        return temp;
    }
};
int main()
{
    Rectangle r1(100,800), r2;
    system("clear");
    r2 = r1.area();
    cout<<"Area = " << r2.Area;
}