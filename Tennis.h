//
//  Tennis.h
//  CS 250 Program 2
//
//  Created by Brian Klumpp on 10/15/24.
//


#ifndef TENNIS_H
#define TENNIS_H
#include "Athlete.h"

    // Defining tennis class

    class Tennis : public Athlete
{
    private:
   
    int m_serveSpeed;
    bool m_serveAndVolley;

    protected:

    
    public:
    
    Tennis();
    Tennis(int serveSpeed, bool serveAndVolley);

    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);
    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif // TENNIS_H
