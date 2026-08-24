// Overloading Operator ++ And Increaseing The Value Of And Object

#include <iostream>
using namespace std;

class Counter
{
    int number = 10;

public:
    void operator++()
    {
        number++;
    }
    void display(bool val)
    {
        cout << "New Value Of Number After Operator Overloading, number = " << number << endl;
    }

    void display()
    {
        cout << "\nNew Value Of Number After Operator Overloading, number = " << number << endl;
    }
};
int main()
{
    system("clear");
    Counter c;
    c.display();
    ++c;
    c.display(false);
}