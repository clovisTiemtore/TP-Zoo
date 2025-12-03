#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <iostream>

using namespace std;

class Bird : public Animal {
    private:

        double wingspan;

    public:

        Bird();
        Bird(const string&, const string&, const string&, const string&, const string&,
            bool, int, double, double, double);
        Bird(const Bird&);
        ~Bird() = default;

        double getWingspan() const;
        void setWingspan(double);
        
        void make_sound() const override;
        void printInfo() const override;
        string getType() const override { return "Bird"; }
};

#endif
