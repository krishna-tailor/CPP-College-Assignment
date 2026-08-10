// Program To Find Area Of Circle

#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float area()
    {
        return radius * radius * 3.14;
    }
};
int main()
{
    system("clear");
    Circle c(4);
    cout<<"Area of Circle Is: " << c.area() << endl;
}