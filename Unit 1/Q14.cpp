// Allocating String Size Using Dynamic Constructor

#include <iostream>
using namespace std;

class String
{
    char *ch;

public:
    String(int size)
    {
        ch = new char[size];
    }

    void display()
    {
        cout << "Memory Allocated SuccessFully\n";
    }
};
int main()
{
    system("clear");
    String s(10);
    s.display();
}