#include <iostream>
#include "Person.h"

// Function declaration
PersonList createPersonList(int n);

int main() {
    int n;
    std::cout << "Enter the number of people: ";
    std::cin >> n;

    // Create a PersonList
    PersonList personList = createPersonList(n);

    // Display the person list
    std::cout << "Person List:" << std::endl;
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << personList.people[i].name << ", Age = " << personList.people[i].age << std::endl;
    }

    // Free dynamically allocated memory
    delete[] personList.people;

    return 0;
}
