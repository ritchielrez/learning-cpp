#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main() {
    string firstName = "John ";
    string secondName = "Doe";

    // Simple string concatenation
    // string fullName = firstName + secondName;
    // Or
    string fullName = firstName.append(secondName);

    cout << "The person's fullname is " << fullName << "\n";
    cout << "Length of their fullname is " << fullName.length() << "\n";

    getline(cin, fullName);
    cout << "The person's fullname is " << fullName << "\n";
}
