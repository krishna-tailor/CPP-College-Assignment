// Compositing Composite Objectes
#include <iostream>
using namespace std;

class Engine
{
public:
    int engineNo, manufacturedDate;
    Engine() {}
    Engine(int engineNo, int manufacturedDate)
    {
        this->engineNo = engineNo;
        this->manufacturedDate = manufacturedDate;
    }
};

class Car
{
private:
    string companyName;
    int carNo;
    Engine e1;

public:
    Car(int engineNo, int manufacturedDate, string companyName, int carNo)
    {
        e1 = Engine(engineNo, manufacturedDate);
        this->companyName = companyName;
        this->carNo = carNo;
    }

    void show()
    {
        cout << "==== Car Detials ====\n"
             << "Engine Number: " << e1.engineNo
             << "\nEngine Manufactured Date: " << e1.manufacturedDate
             << "\nCar Company Name: " << companyName
             << "\nCar Number: " << carNo << endl;
    }
};

int main()
{
    system("clear");
    Car c1(456, 2007, "BMW", 1111);
    c1.show();
}