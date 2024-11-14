/*
 * ejercicio1.cpp
 *
 *  Created on: 15/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
using namespace std;

const unsigned TAM = 9;

typedef unsigned TArray[TAM];

// funcion que calcula el valor dominante del array a
unsigned repeticiones(unsigned pos, const TArray& a) {
    unsigned res = 1;

    for (unsigned i = pos+1; i < TAM; i++) {
        if (a[pos] == a[i]) {
            res++;
        }
    }

    return res;
}

// funcion que calcula el valor dominante del array a
int valorDominante(const TArray& a) {
    int res = -1;
    unsigned cont = 0;

    while (cont <= TAM/2
           && repeticiones(cont,a) <= TAM/2) {
        cont++;
    }
    if (cont <= TAM/2) {
        res = a[cont];
    }

    return res;
}

int main() {
    TArray a1 = {3,4,3,2,3,1,3,3,1},
           a2 = {4,4,3,2,3,1,3,3,1},
           a3 = {1,3,2,1,4,4,4,4,4};

    cout << "El elemento dominante del primer array es: "
         << valorDominante(a1) << endl;
    cout << "El elemento dominante del segundo array es: "
         << valorDominante(a2) << endl;
    cout << "El elemento dominante del tercer array es: "
         << valorDominante(a3) << endl;

    return 0;
}
