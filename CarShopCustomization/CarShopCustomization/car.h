#pragma once
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Car
{
public: // names for each part (uses strings)
    string engine;
    string tire;
    string body;
    string transmission;
    string brakes;
    // flags to track whether each part has been purchased
    bool enginePurchased = false;
    bool tirePurchased = false;
    bool bodyPurchased = false;
    bool transmissionPurchased = false;
    bool brakesPurchased = false;
    bool isComplete() const { return enginePurchased && tirePurchased && bodyPurchased && transmissionPurchased && brakesPurchased; } // check if all parts have been purchased

    void viewCar() const
    {
        cout << "Your Customized Car: " << endl;
        cout << "---------------------" << endl;
        cout << "Engine: " << engine << endl; // set chosen parts to car class
        cout << "Tire: " << tire << endl;
        cout << "Body: " << body << endl;
        cout << "Transmission: " << transmission << endl;
        cout << "Brakes: " << brakes << endl;
    };
    void driveCar(Car& car)
    {
        if (car.enginePurchased && car.tirePurchased && car.bodyPurchased && car.transmissionPurchased && car.brakesPurchased) // check if all parts have been purchased
        {
            cout << "You have successfully customized your car!" << endl;
            cout << "You have: \n" << car.engine << "\n" << car.tire << "\n" << car.body << "\n" << car.transmission << "\n" << car.brakes << " installed on your car." << endl;
        }
    };

    // functions to allow user to select each part
    void engineChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices);
    void tireChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices);
    void bodyChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices);
    void transmissionChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices);
    void brakesChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices);
};