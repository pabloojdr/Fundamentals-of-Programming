/*
 * ejercicio1.cpp
 *
 *  Created on: 13/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
#include <array>
using namespace std;

const int NELMS = 10;
typedef array<int, NELMS> Datos;

int calcularMedia(const Datos& a);

int buscar_mayig_media(const Datos& a){
    int i = 0;
    int media;
    media = calcularMedia(a);

    while(a[i] <= media){
        i++;
    }

    return i;
}

int calcularMedia(const Datos& a){
    int sum = 0;
    for(int i = 0; i < NELMS; i++){
        sum += a[i];
    }

    return sum / NELMS;
}

void leer(Datos& a)
{
	cout << "Introduce " << a.size() << " números: " ;
	for (int i = 0; i < int(a.size()); ++i) {
		cin >> a[i];
	}
}

int main()
{
	Datos a;
	leer(a);
	int idx = buscar_mayig_media(a);
	cout << "El primer elemento mayor o igual que la media se encuentra en "
		 << idx << endl;
}
