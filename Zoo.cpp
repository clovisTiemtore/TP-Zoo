#include "headers/Zoo.h"
#include <iterator>
#include <algorithm>
#include "headers/Mammal.h"
#include "headers/Bird.h"
#include "headers/Reptile.h"
#include "headers/KnnDouble.h"
#include "headers/KnnString.h"
#include <map>
#include <algorithm>

using namespace std;

Zoo::Zoo() : 
    name("") 
{}

Zoo::Zoo(const string& n) : 
    name(n)
{}

Zoo::Zoo(const Zoo& Z) : 
    name(Z.name), animals(Z.animals) 
{}

Zoo::~Zoo()
{
    for (Animal* a : animals) {
        delete a;
    }
}

string Zoo::getName() const
{ 
    return name; 
}

void Zoo::setName(const string& n) 
{ 
    name = n; 
}

void Zoo::addAnimal(Animal* a) {
    if (animals.size() < MAX_CAPACITY) {
        animals.push_back(a);
    } else {
        cout << "Can't add more animal, the Zoo is full." << endl;
    }
}

void Zoo::listAnimals() const {
    cout << "Zoo: " << name << endl;
    for (Animal* a : animals) {
        a->printInfo();
        cout << endl;
    }
}

int Zoo::searchAnimalByName(const string& name) const {
    for (size_t i = 0; i < animals.size(); i++) {
        if (animals[i]->getAnimalName() == name) {
            return (int)i;
        }
    }
    return -1;
}

void Zoo::removeAnimalByName(const string& name) {
    int index = searchAnimalByName(name);
    if (index == -1) {
        cout << "This Animal is not in the zoo." << endl;
        return;
    }
    delete animals[index];
    animals.erase(animals.begin() + index);
}

double Zoo::averageAgeForType(const string& type) const {
    int totalAge = 0, count = 0;

    for (const Animal* a : animals) {
        if ((type == "Mammal" && dynamic_cast<const Mammal*>(a)) ||
            (type == "Bird" && dynamic_cast<const Bird*>(a)) ||
            (type == "Reptile" && dynamic_cast<const Reptile*>(a))) {
            totalAge += a->getAnimalAge();
            count++;
        }
    }
    return count > 0 ? (double)totalAge / count : 0.0;
}

string Zoo::predictTypeWithKNNDouble(const Animal& target, int k) const {
    vector<pair<double,double>> trainData;
    vector<string> types;

    for (const Animal* a : animals) {
        trainData.push_back({a->getAnimalWeight(), a->getAnimalHeight()});
        if (dynamic_cast<const Mammal*>(a)) types.push_back("Mammal");
        else if (dynamic_cast<const Bird*>(a)) types.push_back("Bird");
        else if (dynamic_cast<const Reptile*>(a)) types.push_back("Reptile");
    }

    pair<double,double> targetData = {target.getAnimalWeight(), target.getAnimalHeight()};
    KNNDouble knn(k);
    vector<int> neighbors = knn.findNearestNeighbours(trainData, targetData);

    map<string,int> count;
    for (int idx : neighbors) count[types[idx]]++;
    return max_element(count.begin(), count.end(),
                       [](auto& a, auto& b){ return a.second < b.second; })->first;
}

string Zoo::predictTypeWithKNNString(const Animal& target, int k) const {
    vector<vector<string>> trainData;
    vector<string> types;

    for (const Animal* a : animals) {
        trainData.push_back({a->getAnimalColor(), a->getAnimalDiet(),
                             a->getAnimalHabitat(), a->getAnimalSounds()});
        if (dynamic_cast<const Mammal*>(a)) types.push_back("Mammal");
        else if (dynamic_cast<const Bird*>(a)) types.push_back("Bird");
        else if (dynamic_cast<const Reptile*>(a)) types.push_back("Reptile");
    }

    vector<string> targetData = {target.getAnimalColor(), target.getAnimalDiet(),
                                 target.getAnimalHabitat(), target.getAnimalSounds()};
    KNNString knn(k);
    vector<int> neighbors = knn.findNearestNeighbours(trainData, targetData);

    map<string,int> count;
    for (int idx : neighbors) count[types[idx]]++;
    return max_element(count.begin(), count.end(),
                       [](auto& a, auto& b){ return a.second < b.second; })->first;
}
