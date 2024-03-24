#ifndef F1TEAM_H
#define F1TEAM_H

#pragma once
#include <string>

class F1Team {
    protected:
        std::string name;
        int foundationYear;

    public:
        // Constructor
        F1Team(std::string name, int foundationyear);

        // Setters and Getters
        void setName(std::string name);

        std::string getName();

        void setFoundationYear(int year);

        int getFoundationYear();
};

#endif //f