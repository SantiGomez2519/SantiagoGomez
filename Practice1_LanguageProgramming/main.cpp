#include <iostream>
#include <string>

//Including all the C files to link the classes
#include "F1Team.h"
#include "PitCrewTeam.h"
#include "Roles.h"
#include "TeamDriverA.h"
#include "TeamDriverB.h"

using namespace std;

int main() {
    // Creation of Workers (objects)

    //Flap Adjusters
    FlapAdjust flapAdjust1("Santi", 18, 3, 20), flapAdjust2("Juan", 20, 5, 25);

    //Tyre Gunners
    TyreGunner tyreGunner1("John", 25.6), tyreGunner2("Mike", 23.5), tyreGunner3("Sarah", 22.1), tyreGunner4("Emily", 24);

    //Rear Jackers
    RearJack rearJack1("Mateo", 0.7), rearJack2("Lucas", 0.8);

    //Front Jackers
    FrontJack frontJack1("Alex", 0.9), frontJack2("Chris", 0.7);

    //Tyres off
    TyreOff tyreOff1("Mariana", "damaged"), tyreOff2("Laura", "Perfect"), tyreOff3("Jules", "Too Damaged"), tyreOff4("Luis", "Perfect");

    //Tyres On
    TyreOn tyreOn1("Julieta", "Perfect"), tyreOn2("Miguel", "Perfect"), tyreOn3("Chandler", "Perfect"), tyreOn4("Monica", "Perfect");

    //Steadiers
    Steadier steadier1("Phoebe", 10), steadier2("Ross", 8);

    // Calling methods and using methods from parent classes too
    cout << "\nFlap Adjusters" << endl;
    flapAdjust1.AdjustFlap();
    flapAdjust2.workA();

    cout << "\nTyre Gunners" << endl;
    tyreGunner1.getTyrePressure();
    tyreGunner1.deflateTyre();
    tyreGunner2.getTyrePressure();
    tyreGunner3.inflateTyre();
    tyreGunner4.deflateTyre();

    cout << "\nRear Jackers" << endl;
    rearJack1.extendJack();
    rearJack2.retractJack();

    cout << "\nFront Jackers" << endl;
    frontJack1.extendJack();
    frontJack2.retractJack();

    cout << "\nTyre Off" << endl;
    tyreOff1.removeTyre();
    tyreOff2.workB();
    tyreOff3.removeTyre();
    tyreOff4.removeTyre();

    cout << "\nTyre On" << endl;
    tyreOn1.placeTyre();
    tyreOn2.workA();
    tyreOn3.placeTyre();
    tyreOn4.placeTyre();

    cout << "\nSteadiers" << endl;
    steadier1.stabilizeCar();
    steadier2.stabilizeCar();

    return 0;
}