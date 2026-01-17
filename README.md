# TP-Zoo :

Ce projet en C++ est une simulation de gestion de zoo conçue pour mettre en pratique les piliers de la **Programmation Orientée Objet (POO)**. Il permet de manipuler différentes espèces animales à travers une structure hiérarchique rigoureuse.

---

## Installation et Compilation

### Prérequis
* Un compilateur C++ (GCC).

### Compilation
Le projet utilise des en-têtes séparés dans un dossier `headers`. Utilisez la commande suivante pour compiler :

```bash
g++ main.cpp Animal.cpp Mammal.cpp Bird.cpp Reptile.cpp Zoo.cpp -Iheaders -o zoo_app
```
Puis pour observer

```
.\zoo_app.exe
```
