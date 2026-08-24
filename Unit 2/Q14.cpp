// Overloading - operator and subtracting two distance objects

#include <iostream>
using namespace std;

class Distance
{
    int distance;

public:
    Distance() {};
    Distance(int distance) { this->distance = distance; }

    Distance operator-(Distance other)
    {
        Distance temp;
        temp.distance = distance - other.distance;
        return temp;
    }

    void display()
    {
        cout << "Distance After Subtracting Two Distance Objects, Distance = " << distance << endl;
    }
};

int main()
{
    system("clear");
    Distance d1(10), d2(20), d3;
    d3 = d2 - d1;
    d3.display();
}