#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <iostream>

using namespace std;

class Reptile : public Animal {
    private:

        string scalePattern;

    public:

        Reptile();
        Reptile(const string&, const string&, const string&, const string&, const string&,
                bool, int, double, double, const string&);
        Reptile(const Reptile&);
        ~Reptile() = default;

        string getScalePattern() const;
        void setScalePattern(const string&);

        string getType() const override { return "Reptile"; }
        
        void make_sound() const override;
        void printInfo() const override;
};

#endif
