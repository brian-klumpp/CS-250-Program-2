//
//  Header.h
//  CS 250 Program 2
//
//  Created by Brian Klumpp on 10/15/24.
//

#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H
#include <string>
#include "Athlete.h"

using namespace std;

    // Defining Volleyball class 

    class Volleyball : public Athlete {
   
    private:
        
    string m_position;
    float m_reactionTime;
        
        
    protected:
        

    public:
    
    Volleyball();
    Volleyball(string position, float reactionTime);
        
    string getPosition() const;
    void setPosition(const string& position);
    
    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};

#endif // VOLLEYBALL_H
