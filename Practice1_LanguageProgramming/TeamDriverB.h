#ifndef TEAMDRIVERB_H
#define TEAMDRIVERB_H

#include "F1Team.h"
#include "PitCrewTeam.h"

class TeamDriverB: public F1Team, public PitCrewTeam {
    private:
        int drivingSkill;
        double reactionTime;

    public:
        // Constructor
        TeamDriverB(std::string name, int drivingSkill, double reactionTime);

        void workB();

        void setDrivingSkillB(int drivingSkill);

        int getDrivingSkillB();
};

#endif
