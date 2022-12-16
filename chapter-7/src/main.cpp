#include <iostream>

int main() {
    try {
        int age = 10;
        if (age >= 18) {
            std::cout << "Access granted, you're old enough\n";
        }
        else {
            throw(age);
        }
    }
    catch(int num) {
        std::cout << "Access denied, you must be at least 18 or older\n";
        std::cout << "Age: " << num << "\n";
    }
}
