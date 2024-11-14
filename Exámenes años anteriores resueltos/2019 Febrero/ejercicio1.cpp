/*
 * ejercicio1.cpp
 *
 *  Created on: 12/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
#include <array>
using namespace std;

const int TAM = 10;
typedef array<int,TAM> TArray;

void menorEstricto(TArray& a, bool& hayMe,int& mE);

int main()
{
	TArray a1 = {{4,7,5,3,5,7,9,32,45,8}};
	TArray a2 = {{4,7,5,3,5,7,3,32,45,8}};
	TArray a3 = {{4,7,5,3,5,7,3,32,2,8}};
	bool hayME;
	int mE;

	menorEstricto(a1,hayME,mE);

	if (hayME) {
		cout << "El menor estricto del primer array es: " << mE << endl;
	} else {
		cout << "El primer array no tiene menor estricto\n";
	}

	menorEstricto(a2,hayME,mE);

	if (hayME) {
		cout << "El menor estricto del segundo array es: " << mE << endl;
	} else {
		cout << "El segundo array no tiene menor estricto\n";
	}

	menorEstricto(a3,hayME,mE);

	if (hayME) {
		cout << "El menor estricto del tercer array es: " << mE << endl;
	} else {
		cout << "El tercer array no tiene menor estricto\n";
	}

    return 0;
}

void menorEstricto(TArray& a, bool& hayMe,int& mE){
    int menor = a[0];
    hayMe = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] < menor){
            menor = a[i];
            hayMe = true;
        }else if(menor == a[i]){
            hayMe = false;
        }
    }
    mE = menor;
}
