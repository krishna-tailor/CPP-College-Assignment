// Overlaoding + operator and add two complex numbers

#include <iostream>
using namespace std;

class Complex
{
    int real, image;

public:
    Complex() {};
    Complex(int real, int image)
    {
        this->real = real;
        this->image = image;
    }

    Complex operator+(Complex other)
    {
        Complex temp;
        temp.real = real + other.real;
        temp.image = image + other.image;
        return temp;
    }

    void display()
    {
        cout << "Complex Number After Adding Two Number\n"
             << real << " + " << image << "i\n";
    }
};
int main()
{
    system("clear");
    Complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
}