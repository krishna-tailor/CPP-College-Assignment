// Program To Convert Meters To Kilometers

#include <iostream>
using namespace std;

class Distance
{
    int km, m;

public:
    Distance(int km = 1, int m = 20)
    {
        this->km = km;
        this->m = m;
    }

    operator int()
    {
        int totalM = 0;
        if (km >= 1)
        {
            totalM = km * 1000;
        }

        totalM += m;
        return totalM;
    }
};

int main()
{
    system("clear");
    Distance d(1, 20);
    int totalM = d;
    cout << "Total Meter After Conversion Is: " << totalM << endl;
}