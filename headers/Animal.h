#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name, color, diet, habitat, sounds;
    bool isPet;
    int age;
    double weight, height;

public:
    Animal();
    Animal(const string&, const string&, const string&, const string&, const string&,
           bool, int, double, double);
    Animal(const Animal&);
    virtual ~Animal();

    string getAnimalName() const;
    void setAnimalName(const string&);

    string getAnimalColor() const;
    void setAnimalColor(const string&);

    string getAnimalDiet() const;
    void setAnimalDiet(const string&);

    string getAnimalHabitat() const;
    void setAnimalHabitat(const string&);

    string getAnimalSounds() const;
    void setAnimalSounds(const string&);

    bool getAnimalIsPet() const;
    void setAnimalIsPet(bool);

    int getAnimalAge() const;
    void setAnimalAge(int);

    double getAnimalWeight() const;
    void setAnimalWeight(double);

    double getAnimalHeight() const;
    void setAnimalHeight(double);

    virtual void make_sound() const;
    virtual void printInfo() const;

    virtual string getType() const = 0;
};

#endif
