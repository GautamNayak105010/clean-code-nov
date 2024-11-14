#include <iostream>
#include <string>
#include <vector>

// Function to filter and print names starting with a specific character
std::vector<std::string> getElementsStartingWith(const std::vector<std::string>& names, char startingChar) {

    std::vector<std::string> output;
    for (const auto& it : names) {
        if (it[0] == startingChar) {
            output.push_back(it);
        }
    }
    return output;
}

void printElementsInArray(std::vector<std::string>& output)
{
    for (const auto& it : output) {
        std::cout<<it<<std::endl;
    }
}
// Main function
int main() {
    std::vector<std::string> names = {"Bosch", "Robert", "Lenovo", "Bengaluru"};
    char startingChar = 'B';

    std::vector<std::string> output=getElementsStartingWith(names, startingChar);
    printElementsInArray(output);

    return 0;
}
