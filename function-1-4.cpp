#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    // Perform shallow copy by copying the struct members
    PersonList newPl;
    newPl.numPeople = pl.numPeople;
    newPl.people = pl.people; // Point to the same array
    
    return newPl;
}
