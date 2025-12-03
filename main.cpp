#include <iostream>
#include "headers/Zoo.h"
#include "headers/Mammal.h"
#include "headers/Bird.h"
#include "headers/Reptile.h"

using namespace std;

int main() {
    Zoo zoo("MyZoo");

    zoo.addAnimal(new Mammal("Lion", "Yellow", "Carnivore", "Savannah", "Roar", false, 5, 190.0, 120.0, "Brown"));
    zoo.addAnimal(new Bird("Parrot", "Green", "Herbivore", "Tropical", "Squawk", true, 2, 1.0, 25.0, 0.5));
    zoo.addAnimal(new Reptile("Snake", "Brown", "Carnivore", "Forest", "Hiss", false, 4, 10.0, 200.0, "Scaled"));

    cout << "\n=== Liste des animaux ===" << endl;
    zoo.listAnimals();

    cout << "\n=== Recherche ===" << endl;
    cout << "Index du Lion: " << zoo.searchAnimalByName("Lion") << endl;

    cout << "\n=== Suppression ===" << endl;
    zoo.removeAnimalByName("Snake");
    zoo.listAnimals();

    cout << "\n=== Moyenne d_age ===" << endl;
    cout << "Mammals: " << zoo.averageAgeForType("Mammal") << endl;
    cout << "Birds: " << zoo.averageAgeForType("Bird") << endl;

    return 0;
}
