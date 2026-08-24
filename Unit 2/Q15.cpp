// Over Loading Operator * Using Friend Function

#include <iostream>
using namespace std;

class Multiplication
{
    int num;

public:
   
    Multiplication(int num = 0) { this->num = num; }
    friend Multiplication operator*(Multiplication obj1, Multiplication obj2);

    void display()
    {
        cout << "Product of Number After Multiplying two object's number, num = " << num << endl;
    }
};

Multiplication operator*(Multiplication obj1, Multiplication obj2)
{
    Multiplication temp;
    temp.num = obj1.num * obj2.num;

    return temp;
}
int main()
{
    system("clear");
    Multiplication m1(10),m2(20),m3;
    m3 = m1 * m2;
    m3.display();
}