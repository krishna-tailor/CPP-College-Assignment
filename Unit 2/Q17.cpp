// User Define Conversion , Converting Data Type Of Object From Class To Int

#include <iostream>
using namespace std;

class Time
{
    int hour, min;

public:
    Time(int hour = 1, int min = 20)
    {
        this->hour = hour;
        this->min = min;
    }

    operator int()
    {
        int totalMin = 0;
        if (hour >= 1)
            totalMin = hour * 60;

        totalMin += min;
        return totalMin;
    }
};
int main()
{
    system("clear");
    Time t(2, 3);
    int totalTime = t;
    cout << "Total Minutes After Converting = " << totalTime << endl;
}