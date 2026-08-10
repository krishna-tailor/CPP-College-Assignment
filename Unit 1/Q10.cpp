// Program To Create A Default Constructor, And Initialize The Time Class members With 0 and Display Them

#include <iostream>
using namespace std;

class Time
{
public:
    int hour, minute, second;
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    void display()
    {
        cout << "==== Time ====\n"
             << hour << ":" << minute << ":" << second << endl;
    }
};
int main()
{
    system("clear");
    Time t;
    t.display();
}