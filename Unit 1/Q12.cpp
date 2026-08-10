// Demonstrating Constructor Overloading By Creating Class Of Rectangle

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Default Constructor
    Rectangle()
    {
        length = 19;
        breadth = 20;
    }

    // Parameterized Constructor
    Rectangle(float length, float breadth)
    {
        this->breadth = breadth;
        this->length = length;
    }

    float area()
    {
        return length * breadth;
    }
};
int main()
{
    system("clear");
    Rectangle r1, r2(20, 25);

    cout << "==== Area Of Recatangle Of Default Constructor ====\n"
         << "Area:" << r1.area();

    cout << "\n\n==== Area Of Recatangle Of Parameterized Constructor ====\n"
         << "Area:" << r2.area() << endl;
}