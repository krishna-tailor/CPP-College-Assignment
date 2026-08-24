// Program To Overload Operator - And Change The Sign Of Number

#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int x)
    {
        this->x = x;
    }
    int operator-()
    {
        cout << "Changing The Sign Of Number\n";
        return -x;
    }
};
int main()
{
    system("clear");
    Number n1(10);
    int a = 10;
    a = -n1;
    cout << "Sign of Number a is changed to negative a = " << a << endl;
}