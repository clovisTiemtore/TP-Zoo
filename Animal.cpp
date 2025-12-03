#include "headers/Animal.h"
#include <iostream>

using namespace std;

Animal::Animal():
    name(""), color(""), diet(""), habitat(""), sounds(""),
    isPet(false), age(0), weight(0.0), height(0.0)
{}

Animal::Animal(const string& n, const string& c, const string& d, const string& h, const string& s,
               const bool isP, int a, double w, double he) : 
    name(n), color(c), diet(d), habitat(h), sounds(s), isPet(isP), age(a), weight(w), height(he)
{}

Animal::Animal(const Animal& A):
    name(A.name), color(A.color), diet(A.diet), habitat(A.habitat), sounds(A.sounds),
    isPet(A.isPet), age(A.age), weight(A.weight), height(A.height)
{}

Animal::~Animal()
{
}

string Animal::getAnimalName() const
{
    return name;
}

void Animal::setAnimalName(const string& n)
{
    name = n;
}

string Animal::getAnimalColor() const
{
    return color;
}

void Animal::setAnimalColor(const string& c)
{
    color = c;
}

string Animal::getAnimalDiet() const
{
    return diet;
}

void Animal::setAnimalDiet(const string& d)
{
    diet = d;
}

string Animal::getAnimalHabitat() const
{
    return habitat;
}

void Animal::setAnimalHabitat(const string& h)
{
    habitat = h;
}

string Animal::getAnimalSounds() const
{
    return sounds;
}

void Animal::setAnimalSounds(const string& s)
{
    sounds = s;
}

bool Animal::getAnimalIsPet() const
{
    return isPet;
}

void Animal::setAnimalIsPet(const bool isP)
{
    isPet = isP;
}

int Animal::getAnimalAge() const
{
    return age;
}

void Animal::setAnimalAge(const int a)
{
    age = a;
}

double Animal::getAnimalWeight() const
{
    return weight;
}

void Animal::setAnimalWeight(const double w)
{
    weight = w;
}

double Animal::getAnimalHeight() const
{
    return height;
}

void Animal::setAnimalHeight(const double he)
{
    height = he;
}

void Animal::make_sound() const
{
    cout << sounds << "\n";
}

void Animal::printInfo() const 
{
    cout << "Animal of unknown type:" << endl;
    cout << "Name : " << name << endl;
    cout << "Color : " << color << endl;
    cout << "Diet : " << diet << endl;
    cout << "Habitat : " << habitat << endl;
    cout << "Age : " << age << " y's old" << endl;
    cout << "This animal is " << (isPet ? "a" : "not a") << " pet" << endl;
    cout << "Weight : " << weight << "kg" << endl;
    cout << "Height : " << height << "cm" << endl;
}
