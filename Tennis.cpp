//
//  Tennis.cpp
//  CS 250 Program 2
//
//  Created by Brian Klumpp on 10/15/24.
//


#include "Tennis.h"


    Tennis::Tennis() : Athlete(), m_serveSpeed(0), m_serveAndVolley(false) {}

    Tennis::Tennis(int serveSpeed, bool serveAndVolley)
    : Athlete(), m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}

    // getting serve speed
    int Tennis::getServeSpeed() const {
    return m_serveSpeed;
}
    // setting serve speed
    void Tennis::setServeSpeed(int serveSpeed) {
    m_serveSpeed = serveSpeed;
}
    // getting serve and volley
    bool Tennis::getServeAndVolley() const {
    return m_serveAndVolley;
}
    // Setting serve and volley
    void Tennis::setServeAndVolley(bool serveAndVolley) {
    m_serveAndVolley = serveAndVolley;
}
