#include "PitCrewTeam.h"

// Constructor
PitCrewTeam::PitCrewTeam(std::string name, int crewAge, int crewExperience) : F1Team(name, crewAge) {
    age = crewAge;
    experience = crewExperience;
}
// Setter and Getter for age
void PitCrewTeam::setAge(int crewAge) {
    age = crewAge;
}

int PitCrewTeam::getAge() {
    return age;
}

// Setter and Getter for experience
void PitCrewTeam::setExperience(int crewExperience) {
    experience = crewExperience;
}

int PitCrewTeam::getExperience() {
    return experience;
}
