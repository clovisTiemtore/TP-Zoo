#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <iostream>

using namespace std;

class Mammal : public Animal{
    private : 
    
        string furColor;

    public :

        Mammal();
        Mammal(const string&, const string&, const string&,
               const string&, const string&,
               bool, int, double, double, const string&);
        Mammal(const Mammal&);
        ~Mammal() = default;
        
        string getFurColor() const;
        void setFurColor(const string&);
        
        string getType() const override { return "Mammal"; }
        void make_sound() const override;
        void printInfo() const override;
                
};


#endif