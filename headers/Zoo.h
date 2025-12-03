#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <iostream>
#include <vector>

using namespace std;

class Zoo {
    private:

        string name;
        static const int MAX_CAPACITY = 200;
        vector<Animal*> animals;

    public:

        Zoo();
        Zoo(const string&);
        Zoo(const Zoo&);
        ~Zoo();

        string getName() const;
        void setName(const string&);

        void listAnimals() const;
        void addAnimal(Animal*);

        int searchAnimalByName(const string&) const;
        void removeAnimalByName(const string&);
        double averageAgeForType(const string&) const;

        string predictTypeWithKNNDouble(const Animal&, int) const;
        string predictTypeWithKNNString(const Animal&, int) const;

        
};

#endif
