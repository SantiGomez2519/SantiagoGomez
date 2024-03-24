#ifndef ROLES_H
#define ROLES_H

#include "TeamDriverA.h"
#include "F1Team.h"
#include "PitCrewTeam.h"
#include "TeamDriverB.h"

class FlapAdjust : public F1Team, public TeamDriverA, public PitCrewTeam{
    private:
        int flapPosition;

    public:
        // Constructor
        FlapAdjust(std::string name, int age, int experience, int flapPosition);

        int getFlapPosition(); // Obtener la posición del alerón

        void AdjustFlap();
};

class FrontJack : public F1Team, public TeamDriverB, public PitCrewTeam {
    private:
        double jackHeight;

    public:
        // Constructor
        FrontJack(std::string name, double jackHeight);

        void extendJack(); // Extiende el gato delantero
        void retractJack(); // Retrae el gato delantero
        double getJackHeight();
};

class RearJack : public F1Team, public TeamDriverA, public PitCrewTeam {
    private:
        double jackHeight;

    public:
        // Constructor
        RearJack(std::string name, double jackHeight);

        void extendJack(); // Extiende el gato trasero
        void retractJack(); // Retrae el gato trasero
        double getJackHeight();
};

class Steadier : public F1Team, public TeamDriverB, public PitCrewTeam {
    private:
        int stabilityLevel;

    public:
        // Constructor
        Steadier(std::string name, int stabilityLevel);

        void stabilizeCar(); // Estabiliza el coche
        int getStabilityLevel(); // Obtiene el nivel de estabilidad
};

class TyreGunner : public F1Team, public TeamDriverA, public PitCrewTeam {
    private:
        double tyrePressure;

    public:
        // Constructor
        TyreGunner(std::string name, double tyrePressure);

        void inflateTyre(); // Infla el neumático
        void deflateTyre(); // Desinfla el neumático
        double getTyrePressure(); // Obtiene la presión del neumático
};

class TyreOff : public F1Team, public TeamDriverB, public PitCrewTeam {
    private:
        std::string tyreCondition;

    public:
        // Constructor
        TyreOff(std::string name, std::string tyreCondition);

        void getTyreCondition(std::string tyreCondition); // Obtiene la condición de los neumáticos

        void removeTyre(); // Quita el neumático
};

class TyreOn : public F1Team, public TeamDriverA, public PitCrewTeam {
    private:
        std::string tyreType;

    public:
        // Constructor
        TyreOn(std::string name, std::string tyreType);

        void getTyreType(std::string tyreType); // Obtiene el tipo de neumático a colocar

        void placeTyre(); // Coloca el neumático
};

#endif
