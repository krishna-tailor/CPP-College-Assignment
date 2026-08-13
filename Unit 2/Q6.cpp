// Showing Execution The Flow Of Constructors And Destructors , using inheritence
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {

        cout << "\nBase Class Constructor Called From Derived Class Constructor";
    }

    ~Base()
    {
        cout << "\nBase Class Desturctor Called\n";
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"\nDerived Class Constructor Called";
    }

    ~Derived()
    {
        cout<<"\nDerived Class Destructor Called";
    }
};
int main()
{
    system("clear");
    Derived d;
}