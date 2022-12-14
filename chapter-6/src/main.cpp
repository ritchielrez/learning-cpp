#include <fstream>
#include <iostream>

int main() { 
    std::ofstream outputFile("myfile.txt");

    outputFile << "Writing to a file ig";
    outputFile.close();

    std::ifstream inputFile("myfile.txt");
    std::string text;

    std::getline(inputFile, text);
    std::cout << text << "\n";
}
