// Creating Class For Complex Image , And Demonstrating Constructor With Default Arguments

#include <iostream>
using namespace std;

class Complex
{
private:
    float real, image;

public:
    Complex(float real = 10.2, float image = 12.4)
    {
        this->image = image;
        this->real = real;
    }

    void display()
    {
        cout << real << " + " << image << "i" << endl;
    }
};

int main()
{
    system("clear");
    Complex c1, c2(12.4, 16.5);
    cout << "=== Complex Number Of Constructor With Default Arguments ===\n";
    c1.display();
    
    cout << "\n=== Complex Number Of Constructor With Given Arguments ===\n";
    c2.display();
}