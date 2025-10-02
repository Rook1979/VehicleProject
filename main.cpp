// Stephan Ulbrich
// CIS 1202 101
// 10-05-2025

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
    std::string manufacturer;
    int year, doors, towing;

    // Vehicle
    std::cout << "Vehicle:\n";
    std::cout << "Enter manufacturer: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter year built: ";
    std::cin >> year;
    std::cin.ignore();
    Vehicle v(manufacturer, year);
    v.displayInfo();
    std::cout << "\n";

    // Car
    std::cout << "Car:\n";
    std::cout << "Enter manufacturer: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter year built: ";
    std::cin >> year;
    std::cout << "Enter number of doors: ";
    std::cin >> doors;
    std::cin.ignore();
    Car c(manufacturer, year, doors);
    c.displayInfo();
    std::cout << "\n";

    // Truck
    std::cout << "Truck:\n";
    std::cout << "Enter manufacturer: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter year built: ";
    std::cin >> year;
    std::cout << "Enter towing capacity: ";
    std::cin >> towing;
    Truck t(manufacturer, year, towing);
    t.displayInfo();

    return 0;
}