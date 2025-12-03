#include "headers/Animal.h"
#include "headers/Bird.h"
#include <iostream>
#include "headers/Bird.h"

using namespace std;

Bird::Bird() : 
    Animal(), wingspan(0.0)
{}

Bird::Bird(const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds,
           bool isPet, int age, double weight, double height,
           double wingspan) :
    Animal(name, color, diet, habitat, sounds, isPet, age, weight, height),
    wingspan(wingspan)
{}

Bird::Bird(const Bird& B) : 
    Animal(B), wingspan(B.wingspan) 
{}

double Bird::getWingspan() const
{ 
    return wingspan; 
}
void Bird::setWingspan(double w)
{ 
    wingspan = w; 
}

void Bird::printInfo() const
{
    cout << "Animal of type Bird:" << endl;
    cout << "Name : " << getAnimalName() << endl;
    cout << "Color : " << getAnimalColor() << endl;
    cout << "Wingspan : " << wingspan << "m" << endl;
    cout << "Diet : " << getAnimalDiet() << endl;
    cout << "Habitat : " << getAnimalHabitat() << endl;
    cout << "Age : " << getAnimalAge() << " y's old" << endl;
    cout << "This animal is " << (getAnimalIsPet() ? "a" : "not a") << " pet" << endl;
    cout << "Weight : " << getAnimalWeight() << "kg" << endl;
    cout << "Height : " << getAnimalHeight() << "cm" << endl;
}

void Bird::make_sound() const {
    cout << getAnimalSounds() << endl;
}
