#include "TeamDriverB.h"
#include <iostream> 

// Constructor
TeamDriverB::TeamDriverB(std::string name, int drivingSkill, double reactionTime)
    : F1Team(name, 0), PitCrewTeam(name, 0, 0) { // Llama al constructor de las clases base
    this->drivingSkill = drivingSkill;
    this->reactionTime = reactionTime;
}

// Método para que el conductor A conduzca
void TeamDriverB::workB() {
    std::cout << "Team Driver B is working." << std::endl;
}

// Setter para la habilidad de conducción A
void TeamDriverB::setDrivingSkillB(int drivingSkill) {
    this->drivingSkill = drivingSkill;
}

// Getter para la habilidad de conducción A
int TeamDriverB::getDrivingSkillB() {
    return drivingSkill;
}