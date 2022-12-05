#include <iostream>

class Car {
public:
  std::string brand;
  std::string model;
  int year;
  int maxSpeed(int speed);

  Car(std::string arg_brand, std::string arg_model, int arg_year) {
    brand = arg_brand;
    model = arg_model;
    year = arg_year;
  }
};

int Car::maxSpeed(int speed) { return speed; }

int main() {
  Car car1("BMW", "X5", 1999);

  std::cout << "Car 1\nBrand: " << car1.brand << "\n";
  std::cout << "Model: " << car1.model << "\n";
  std::cout << "Year: " << car1.year << "\n";
  std::cout << "Maximum speed: " << car1.maxSpeed(230) << "kmph\n";
  std::cout << "\n";

  Car car2("Ford", "Mustang", 1969);

  std::cout << "Car 2\nBrand: " << car2.brand << "\n";
  std::cout << "Model: " << car2.model << "\n";
  std::cout << "Year: " << car2.year << "\n";
  std::cout << "Maximum speed: " << car2.maxSpeed(162) << "kmph\n";
}
