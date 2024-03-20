#include <iostream>
#include "Person.h"

// Function declaration
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Create a sample PersonList
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[3];
    for (int i = 0; i < 3; ++i) {
        originalList.people[i].name = "Alice";
        originalList.people[i].age = 30;
    }

    // Shallow copy the PersonList
    PersonList copiedList = shallowCopyPersonList(originalList);

    // Display the copied PersonList
    std::cout << "Copied Person List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    // Free dynamically allocated memory
    delete[] originalList.people;

    return 0;
}
