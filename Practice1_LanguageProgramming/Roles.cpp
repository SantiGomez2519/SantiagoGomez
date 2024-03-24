#include "Roles.h"
#include <iostream>

// Implementación de FlapAdjust

FlapAdjust::FlapAdjust(std::string name, int age, int experience, int flapPosition)
    : F1Team(name, 0), TeamDriverA(name, age, 0.0), PitCrewTeam(name, age, experience) {
    this->flapPosition = flapPosition;
}

int FlapAdjust::getFlapPosition() {
    return flapPosition;
}

void FlapAdjust::AdjustFlap() {
    std::cout << "Adjusting flap" << std::endl;
}

// Implementación de FrontJack

FrontJack::FrontJack(std::string name, double jackHeight)
    : F1Team(name, 0), TeamDriverB(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->jackHeight = jackHeight;
}

void FrontJack::extendJack() {
    std::cout << "Extending front jack" << std::endl;
}

void FrontJack::retractJack() {
    std::cout << "Retracting front jack" << std::endl;
}

double FrontJack::getJackHeight() {
    return jackHeight;
}

// Implementación de RearJack

RearJack::RearJack(std::string name, double jackHeight)
    : F1Team(name, 0), TeamDriverA(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->jackHeight = jackHeight;
}

void RearJack::extendJack() {
    std::cout << "Extending rear jack" << std::endl;
}

void RearJack::retractJack() {
    std::cout << "Retracting rear jack" << std::endl;
}

double RearJack::getJackHeight() {
    return jackHeight;
}

// Implementación de Steadier

Steadier::Steadier(std::string name, int stabilityLevel)
    : F1Team(name, 0), TeamDriverB(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->stabilityLevel = stabilityLevel;
}

void Steadier::stabilizeCar() {
    std::cout << "Stabilizing the car" << std::endl;
}

int Steadier::getStabilityLevel() {
    return stabilityLevel;
}

// Implementación de TyreGunner

TyreGunner::TyreGunner(std::string name, double tyrePressure)
    : F1Team(name, 0), TeamDriverA(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->tyrePressure = tyrePressure;
}

void TyreGunner::inflateTyre() {
    // Código para inflar el neumático
    std::cout << "Inflating tyre" << std::endl;
}

void TyreGunner::deflateTyre() {
    // Código para desinflar el neumático
    std::cout << "Deflating tyre" << std::endl;
}

double TyreGunner::getTyrePressure() {
    return tyrePressure;
}

// Implementación de TyreOff

TyreOff::TyreOff(std::string name, std::string tyreCondition)
    : F1Team(name, 0), TeamDriverB(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->tyreCondition = tyreCondition;
}

void TyreOff::getTyreCondition(std::string tyreCondition) {
    // Código para obtener la condición de los neumáticos
    this->tyreCondition = tyreCondition;
}

void TyreOff::removeTyre(){
    std::cout << "Removing tyre" << std::endl;

}

// Implementación de TyreOn

TyreOn::TyreOn(std::string name, std::string tyreType)
    : F1Team(name, 0), TeamDriverA(name, 0, 0.0), PitCrewTeam(name, 0, 0) {
    this->tyreType = tyreType;
}

void TyreOn::getTyreType(std::string tyreType) {
    // Código para obtener el tipo de neumático a colocar
    this->tyreType = tyreType;
}

void TyreOn::placeTyre(){
    std::cout << "Placing tyre" << std::endl;
}
