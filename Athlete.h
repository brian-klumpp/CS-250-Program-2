#ifndef ATHLETE_H
#define ATHLETE_H

    // Defining athlete class

class Athlete
{

    private:
    
    int m_height;
    int m_weight;
    char m_gender;
    
    protected:

    public:
    
    Athlete();
    Athlete(int height, int weight, char gender);

    int getHeight() const;
    void setHeight(int height);
    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

#endif // ATHLETE_H
