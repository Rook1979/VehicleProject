#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    virtual ~Vehicle() = default;

    Vehicle();
    Vehicle(std::string, int);

    void setManufacturer(std::string);
    std::string getManufacturer() const;

    void setYearBuilt(int);
    int getYearBuilt() const;

    virtual void displayInfo() const;
};

#endif