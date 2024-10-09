#include <iostream>
using namespace std;

// Base Class Vehicle
class Vehicle {
public:
    void vehicle() {
        cout << "I am a vehicle" << endl;
    }
};

// Derived class TwoWheeler (inherits from Vehicle)
class TwoWheeler : public Vehicle {
public:
    void twoWheeler() {  // Corrected method name to follow naming conventions
        cout << "I have Two wheels" << endl;
    }
};

// Derived Class Bike (inherits from TwoWheeler)
class Bike : public TwoWheeler {
public:
    void bike() {
        cout << "I am a bike" << endl;
    }
};

int main() {
    // Create an object of Class Bike
    Bike myBike;  // Corrected to match the class name

    // Call methods of Bike, TwoWheeler, and Vehicle through Bike object
    myBike.bike();         // Bike's method
    myBike.twoWheeler();   // TwoWheeler's method
    myBike.vehicle();      // Vehicle's method

    return 0;
}
