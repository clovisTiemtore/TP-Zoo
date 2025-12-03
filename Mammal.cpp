#include "headers/Animal.h"
#include "headers/Mammal.h"
#include <iostream>

using namespace std;

Mammal::Mammal() :
    Animal(), furColor("")
{}

Mammal::Mammal(const string& name, const string& color, const string& diet,
               const string& habitat, const string& sounds,
               bool isPet, int age, double weight, double height,
               const string& furColor) :
    Animal(name, color, diet, habitat, sounds, isPet, age, weight, height),
    furColor(furColor)
{}

Mammal::Mammal(const Mammal& M) :
    Animal(M), furColor(M.furColor)
{}

string Mammal::getFurColor() const 
{
    return furColor;
}

void Mammal::setFurColor(const string& fc) 
{
    furColor = fc;
}

void Mammal::printInfo() const 
{
    cout << "Animal of type Mammal:" << endl;
    cout << "Name : " << getAnimalName() << endl;
    cout << "Color : " << getAnimalColor() << endl;
    cout << "Fur Color : " << furColor << endl;
    cout << "Diet : " << getAnimalDiet() << endl;
    cout << "Habitat : " << getAnimalHabitat() << endl;
    cout << "Age : " << getAnimalAge() << " y's old" << endl;
    cout << "This animal is " << (getAnimalIsPet() ? "a" : "not a") << " pet" << endl;
    cout << "Weight : " << getAnimalWeight() << "kg" << endl;
    cout << "Height : " << getAnimalHeight() << "cm" << endl;
}

void Mammal::make_sound() const {
    cout << getAnimalSounds() << endl;
}
