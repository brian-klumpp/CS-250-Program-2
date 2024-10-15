//
//  main.cpp
//  CS 250 Program 2
//
//  Author: Brian Klumpp
//
// Last edited 10/14/2024
//
// This program will define and use classes that can help a local universities athletic department


#include <iostream>
#include "Athlete.h"
#include "Volleyball.h"
#include "Tennis.h"

using namespace std;

// Provided int main

int main() {
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina;
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');

    if (martina.getGender() == 'F') {
        cout << "Martina serve speed: " << martina.getServeSpeed() << endl;
    }

    Volleyball kerri;
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    Volleyball giba("Outside Hitter", 23.2);
    giba.setGender('M');

    if (kerri.getGender() == 'F') {
        cout << "Kerri is an " << kerri.getPosition() << endl;
    }

    return 0;
}
