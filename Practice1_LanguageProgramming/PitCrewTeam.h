#ifndef PITCREWTEAM_H
#define PITCREWTEAM_H

#include "F1Team.h"
#pragma once

class PitCrewTeam : public F1Team {
    private:
        int age;
        int experience;

    public:
        // Constructor
        PitCrewTeam(std::string name, int age, int experience);

        void setAge(int age);

        int getAge();

        void setExperience(int experience);

        int getExperience();
};

#endif