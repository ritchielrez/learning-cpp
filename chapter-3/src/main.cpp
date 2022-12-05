#include <iostream>

int main() {
    std::string cars[] = {"Volvo", "BMW", "Mercedes", "Lamborghini"};

    for(std::string car: cars) {
        std::cout << car << "\n";
    }
}

