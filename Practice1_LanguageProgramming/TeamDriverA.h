#ifndef TEAMDRIVERA_H
#define TEAMDRIVERA_H

#include "F1Team.h"
#include "PitCrewTeam.h"

class TeamDriverA: public F1Team, public PitCrewTeam {
    private:
        int drivingSkill;
        double reactionTime;

    public:
        // Constructor
        TeamDriverA(std::string name, int drivingSkill, double reactionTime);

        void workA();

        void setDrivingSkillA(int drivingSkill);

        int getDrivingSkillA();
};

#endif
