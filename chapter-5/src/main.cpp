#include <algorithm>
#include <cctype>
#include <ctype.h>
#include <iostream>
#include <string>

class Animal {
public:
  void makeSound() { std::cout << "The animal makes a sound\n"; }
};

class Cat : public Animal {
public:
  void makeSound() { std::cout << "The cat mews\n"; }
};

class Dog : public Animal {
public:
  void makeSound() { std::cout << "The dog barks\n"; }
};

int main() {
  std::string animal;

  std::cout << "Enter the type of the animal: ";
  std::getline(std::cin, animal);

  // Transform the string inside animal variable into a lowercase one
  std::transform(animal.begin(), animal.end(), animal.begin(), ::tolower);

  if (animal == "cat") {
    Cat cat;
    cat.makeSound();
  } else if (animal == "dog") {
    Dog dog;
    dog.makeSound();
  } else {
    Animal animal;
    animal.makeSound();
  }
}
