#include <iostream>
#include "Person.h"

// Function declaration
Person* createPersonArray(int n);

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    // Create an array of Person structs
    Person* persons = createPersonArray(n);

    // Display the array of persons
    std::cout << "Array of Persons:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << persons[i].name << ", Age = " << persons[i].age << std::endl;
    }

    // Free dynamically allocated memory
    delete[] persons;

    return 0;
}
