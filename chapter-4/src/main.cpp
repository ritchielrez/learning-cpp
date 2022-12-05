#include <iostream>

class Car {
public:
    std::string brand;
    std::string model;
    int year;
};

int main() {
    Car car1;

    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    std::cout << "Car 1\nBrand: " << car1.brand << "\n";
    std::cout << "Model: " << car1.model << "\n";
    std::cout << "Year: " << car1.year << "\n\n";

    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    std::cout << "Car 2\nBrand: " << car2.brand << "\n";
    std::cout << "Model: " << car2.model << "\n";
    std::cout << "Year: " << car2.year << "\n";
}
