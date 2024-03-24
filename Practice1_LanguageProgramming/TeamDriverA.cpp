#include "TeamDriverA.h"
#include <iostream> 

// Constructor
TeamDriverA::TeamDriverA(std::string name, int drivingSkill, double reactionTime)
    : F1Team(name, 0), PitCrewTeam(name, 0, 0) { // Llama al constructor de las clases base
    this->drivingSkill = drivingSkill;
    this->reactionTime = reactionTime;
}

// Método para que el conductor A conduzca
void TeamDriverA::workA() {
    std::cout << "Team Driver A is working." << std::endl;
}

// Setter para la habilidad de conducción A
void TeamDriverA::setDrivingSkillA(int drivingSkill) {
    this->drivingSkill = drivingSkill;
}

// Getter para la habilidad de conducción A
int TeamDriverA::getDrivingSkillA() {
    return drivingSkill;
}
