#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car();
    Car(std::string, int, int);

    void setNumDoors(int);
    int getNumDoors() const;

    void displayInfo() const override;
};

#endif