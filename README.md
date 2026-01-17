# TP-Zoo :

Ce projet en C++ est une simulation de gestion de zoo conçue pour mettre en pratique les piliers de la **Programmation Orientée Objet (POO)**. Il permet de manipuler différentes espèces animales à travers une structure hiérarchique rigoureuse.

## Concepts POO Illustrés

Le projet met en œuvre plusieurs concepts clés :
* **Héritage** : Utilisation d'une classe de base `Animal` déclinée en `Mammal`, `Bird`, et `Reptile`.
* **Polymorphisme** : Gestion dynamique des comportements spécifiques à chaque espèce lors du parcours du zoo.
* **Encapsulation** : Protection des données membres et interface via des headers (`.h`).

---

## Architecture du Projet

Le zoo est organisé selon la hiérarchie suivante :
* **Animal (Classe de base)** : Définit les attributs communs (nom, âge, etc.).
    * **Mammal** : Spécificités des mammifères.
    * **Bird** : Gestion des attributs liés aux oiseaux.
    * **Reptile** : Caractéristiques propres aux reptiles.
* **Zoo** : Classe maîtresse qui agit comme un conteneur pour gérer l'ensemble des animaux.



---

## Installation et Compilation

### Prérequis
* Un compilateur C++ (GCC, Clang ou MSVC).

### Compilation
Le projet utilise des en-têtes séparés dans un dossier `headers`. Utilisez la commande suivante pour compiler :

```bash
g++ main.cpp Animal.cpp Mammal.cpp Bird.cpp Reptile.cpp Zoo.cpp -Iheaders -o zoo_app
```

Exécution
Sur Linux / macOS : 
``` g++ main.cpp GaussianGenerator.cpp SinWaveGenerator.cpp StepGenerator.cpp TimeSeriesDataSet.cpp Distance.cpp KNN.cpp TimeSeriesGenerator.cpp -o test ```
Sur Windows :
```
.\zoo_app.exe
```
