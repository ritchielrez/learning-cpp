#include <cmath>
#include <iostream>

int main()
{
    double angle;
    std::cout << "Type the angle(in radians): ";
    std::cin >> angle;

    std::cout << "Cosine of the angle: " << cos(angle) << "\n";
    std::cout << "Sine of the angle: " << sin(angle) << "\n";
    std::cout << "Tangent of the angle: " << tan(angle) << "\n";
}