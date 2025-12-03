#include "headers/Animal.h"
#include "headers/Reptile.h"
#include <iostream>
using namespace std;

Reptile::Reptile() : 
    Animal(), scalePattern("") 
{}

Reptile::Reptile(const string& name, const string& color, const string& diet,
                 const string& habitat, const string& sounds,
                 bool isPet, int age, double weight, double height,
                 const string& scalePattern) :
    Animal(name, color, diet, habitat, sounds, isPet, age, weight, height),
    scalePattern(scalePattern)
{}

Reptile::Reptile(const Reptile& R) : 
    Animal(R), scalePattern(R.scalePattern) 
{}

string Reptile::getScalePattern() const
{
    return scalePattern; 
}
void Reptile::setScalePattern(const string& sp)
{ 
    scalePattern = sp; 
}

void Reptile::printInfo() const 
{
    cout << "Animal of type Reptile:" << endl;
    cout << "Name : " << getAnimalName() << endl;
    cout << "Color : " << getAnimalColor() << endl;
    cout << "Scale Pattern : " << scalePattern << endl;
    cout << "Diet : " << getAnimalDiet() << endl;
    cout << "Habitat : " << getAnimalHabitat() << endl;
    cout << "Age : " << getAnimalAge() << " y's old" << endl;
    cout << "This animal is " << (getAnimalIsPet() ? "a" : "not a") << " pet" << endl;
    cout << "Weight : " << getAnimalWeight() << "kg" << endl;
    cout << "Height : " << getAnimalHeight() << "cm" << endl;
}

void Reptile::make_sound() const {
    cout << getAnimalSounds() << endl;
}
