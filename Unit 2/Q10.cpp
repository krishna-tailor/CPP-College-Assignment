// Function Over Loading Where A Function Add Two Integer Or Three Integer Nubmber

#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int num1, int num2)
    {
        cout << "Addition Of 2 Integer Number Is: " << num1 + num2;
    }

    void add(int num1, int num2, int num3)
    {
        cout << "\nAddition Of 3 Integer Number Is: " << num1 + num2 + num3 << endl;
    }
};
int main()
{
    system("clear");
    Addition a;
    a.add(1,2);
    a.add(1,2,3);
}