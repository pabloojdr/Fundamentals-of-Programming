/*
 * ejercicio2.cpp
 *
 *  Created on: 08/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble Grado en Ingeniería Informática y Matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
using namespace std;
#include <array>

const int TAM = 10;
typedef array<int, TAM> TVector;

void readArray(TVector& v);
void printArray(TVector& v);
int orderSub(TVector& v);

int main(){
    TVector v1;
    readArray(v1);
    printArray(v1);

    cout << endl;
    cout << "La longitud de la mayor subsucesion es: " << orderSub(v1);

    return 0;
}


void readArray(TVector& v){
    for(int i = 0; i < TAM; i++){
        cout << "Please, enter the element of the " << i+1 << " position: ";
        cin >> v[i];
    }
}

void printArray(TVector& v){
    for(int i = 0; i < TAM; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int orderSub(TVector& v){
    int sum = 1;
    int maxsum = 0;
    for(int i = 1; i < TAM+1; i++){
        if(v[i-1] <= v[i]){
            sum++;
        } else{
            if(sum >= maxsum){
                maxsum = sum;
            }
            sum = 1;
        }
    }

    return maxsum;
}
