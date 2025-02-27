#pragma once
// garage.h

#include <vector>
#include "car.h"

using namespace std;

class Garage 
{
private:
    vector<Car> cars; // vector to store cars
public:
    Garage();
	void addCar(const Car& car); // add car to garage
    void viewGarage(); // view cars in garage
    void driveCar(); // drive car
	int getCarCount() const; // get number of cars in garage
};