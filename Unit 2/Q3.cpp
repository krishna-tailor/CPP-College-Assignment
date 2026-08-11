// Inheritence Usinf Protected Specifiers

#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int vehicleNo;
    string companyName;

public:
    Vehicle(){}
    Vehicle(string companyName , int vehicleNo)
    {
        this->companyName = companyName;
        this->vehicleNo = vehicleNo;
    }
};

class Car : public Vehicle
{
    public:
        Car(string companyName , int vehicleNo)
        {
            Vehicle(this->companyName = companyName , this->vehicleNo = vehicleNo);
        }

        void display()
        {
            cout<<"==== Printing Protected Members ====\n\n"
                <<"Comapny Name: "<<companyName
                <<"\nVehicle No: "<<vehicleNo;
        }
};
int main()
{
    system("clear");
    Car c("Maruti Suzuki",105);
    c.display();
}