//
//  Athlete.cpp
//  CS 250 Program 2
//
//  Created by Brian Klumpp on 10/15/24.
//
#include "Athlete.h"

    
    Athlete::Athlete() : m_height(0), m_weight(0), m_gender('M') {}

    Athlete::Athlete(int height, int weight, char gender)
    : m_height(height), m_weight(weight), m_gender(gender) {}

    // Getting height
    int Athlete::getHeight() const {
    return m_height;
}
    // Setting height
    void Athlete::setHeight(int height) {
    m_height = height;
}
    // Getting weight
    int Athlete::getWeight() const {
    return m_weight;
}
    // Seeting weight
    void Athlete::setWeight(int weight) {
    m_weight = weight;
}
    // Getting gender
    char Athlete::getGender() const {
    return m_gender;
}
    // setting gender
    void Athlete::setGender(char gender) {
    m_gender = gender;
}

#include "Athlete.h"
