#include "F1Team.h"

// Constructor
F1Team::F1Team(std::string name, int foundationYear){
    this->name = name;
    this->foundationYear = foundationYear;
}

// Setter and Getter for name
void F1Team::setName(std::string teamName) {
    name = teamName;
}

std::string F1Team::getName() {
    return name;
}

// Setter and Getter for foundationYear
void F1Team::setFoundationYear(int year) {
    foundationYear = year;
}

int F1Team::getFoundationYear() {
    return foundationYear;
}
