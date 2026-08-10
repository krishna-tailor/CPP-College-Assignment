// Program To Demonstrate Destructor
#include <iostream>
using namespace std;

class Demo
{
    public:
        Demo()
        {
            cout<<"\nConstructor Called\n";
        }

        ~Demo()
        {
            cout<<"Destructor Called\n";
        }
};
int main()
{
    system("clear");
    cout<<"In The Main Function";
    Demo d;
    cout<<"Back To Main Function\n";
}