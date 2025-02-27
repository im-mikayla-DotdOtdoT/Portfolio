#include <iostream>
#include <vector>
#include "garage.h"
#include "car.h"

using namespace std;

Garage::Garage() 
{
	cars = vector<Car>(); // data structure to store cars
}
int Garage::getCarCount() const // get car count
{
    return cars.size(); // return car count
}
void Garage::addCar(const Car& car)
{
    if (cars.size() < 3) // if garage is not full; only 3 cars allowed
    {
        cars.push_back(car); // add car to vector
        cout << "Car added to garage." << endl;
    }
    else
    {
        cout << "Garage is full. Cannot add another car." << endl;
    }
}
void Garage::viewGarage()
{
    cout << "Cars in Garage:" << std::endl; // display cars in garage
    for (size_t i = 0; i < cars.size(); ++i) // for loop to display choices
    {
        cout << "Car " << i + 1 << ":" << std::endl; // display car number
        cout << "---------------------" << endl;
        cars[i].viewCar(); // view cars in garage
        cout << endl;
    }
}
void Garage::driveCar()
{
    if (cars.empty()) // if no cars in garage
    {
        cout << "You have no cars in your garage. Please add a car first." << endl;
        return;
    }

    cout << "Select a car to drive:" << endl;
    for (size_t i = 0; i < cars.size(); ++i) // display choices
    {
        cout << i + 1 << ". "; // display car number
        cars[i].viewCar(); // view cars
        cout << endl;
    }

    int selection; // user selection
    cout << "Enter the number of the car you want to drive: "; // get user selection
    cin >> selection;

    if (selection < 1 || selection > cars.size())
    {
        cout << "Invalid selection." << endl;
        return;
    }

    Car& selectedCar = cars[selection - 1];
    if (selectedCar.isComplete())
    {
        cout << "You have successfully customized your car!" << endl;
        cout << "You have: \n" << selectedCar.engine << "\n" << selectedCar.tire << "\n" << selectedCar.body << "\n" << selectedCar.transmission << "\n" << selectedCar.brakes << " installed on your car." << endl;
        cout << "Would you like to drive your car? (y/n): ";
        char drive;
        cin >> drive;
        if (drive == 'y')
        {
            cout << "You have successfully driven your car!" << endl;
        }
        else
        {
            cout << "You have not driven your car." << endl;
        }
    }
    else
    {
        cout << "You must purchase all parts before driving your car." << endl;
    }
}
