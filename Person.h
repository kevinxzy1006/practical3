#ifndef PERSON_H
#define PERSON_H

#include <string>

// Define Person struct
struct Person {
    std::string name;
    int age;
};

// Define PersonList struct
struct PersonList {
    Person* people;
    int numPeople;
};

#endif // PERSON_H
