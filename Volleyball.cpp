//
//  Volleyball.cpp
//  CS 250 Program 2
//
//  Created by Brian Klumpp on 10/15/24.
//

#include "Volleyball.h"

  
    Volleyball::Volleyball() : Athlete(), m_position("Unknown"), m_reactionTime(0.0) {}


    Volleyball::Volleyball(string position, float reactionTime)
    : Athlete(), m_position(position), m_reactionTime(reactionTime) {}
   
    // Getting position
    string Volleyball::getPosition() const {
    return m_position;
}
    // setting postition
    void Volleyball::setPosition(const std::string& position) {
    m_position = position;
}
    // Getting reaction time
    float Volleyball::getReactionTime() const {
    return m_reactionTime;
}
    // setting reaction time
    void Volleyball::setReactionTime(float reactionTime) {
    m_reactionTime = reactionTime;
}

