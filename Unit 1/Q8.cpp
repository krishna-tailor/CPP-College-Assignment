#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    float price;
    void display()
    {
        cout << "===== Book Details =====\n\n"
             << "Title: " << title
             << "Price: " << price << endl;
    }
};

int main()
{
    system("clear");
    Book b1 = {"Ansci C Book", 350};
    string Book ::*Title;
    Title = &Book ::title;

    cout << "Title: " << b1.*Title;

    float Book ::*Price;
    Price = &Book ::price;

    cout << "Price: " << b1.*Price << endl;

    void (Book ::*func)() = &Book ::display;
    (b1.*func)();
}