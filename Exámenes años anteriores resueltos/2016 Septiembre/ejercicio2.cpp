/*
 * ejercicio2.cpp
 *
 *  Created on: 16/07/2022
 *      Alumno:
 *      Titulación:
 *      Grupo:
 *      PC usado:
 */


#include <iostream>

using namespace std;

const unsigned MAX = 10;

typedef unsigned TElementos[MAX];

struct Conjunto {
	TElementos elementos;
	unsigned numElem;
};

void leer(Conjunto& c) {

	do {
		cout << "Introduzca el numero de elementos a leer (<= " << MAX << "): ";
		cin >> c.numElem;
	} while (c.numElem > MAX);

	cout << "Introduzca " << c.numElem << " numeros naturales diferentes: ";
	for (unsigned i = 0; i < c.numElem; i++) {
		cin >> c.elementos[i];
	}
}

void escribir(const Conjunto& c) {

	cout << "Los elementos del conjunto son: ";
	for (unsigned i = 0; i < c.numElem; i++) {
		cout << c.elementos[i] << " ";
	}
	cout << endl;
}

bool noEsta(const unsigned& c, const Conjunto& res){
    int i = 0;
    while(i < res.numElem and c != res.elementos[i]){
        i++;
    }

    return i >= res.numElem;
}

void calcularInterseccion(const Conjunto& c1, const Conjunto& c2, Conjunto& res) {
    res.numElem = 0;
    for(unsigned i = 0; i < c1.numElem; i++){
        for(unsigned j = 0; j < c2.numElem; j++){
            if(c1.elementos[i] == c2.elementos[j] and noEsta(c1.elementos[i], res)){
                res.elementos[res.numElem] = c2.elementos[j];
                res.numElem++;
            }
        }
    }
}

void calcularUnion(const Conjunto& c1, const Conjunto& c2, Conjunto& res, bool& exito) {
	res.numElem = 0;
        for(int i = 0; i < c1.numElem; i++){
            if(noEsta(c1.elementos[i], res)){
                res.elementos[res.numElem] = c1.elementos[i];
                res.numElem++;
            }
        }

        for(int j = 0; j < c2.numElem; j++){
            if(noEsta(c2.elementos[j], res)){
                res.elementos[res.numElem] = c2.elementos[j];
                res.numElem++;
            }
        }
        if(res.numElem > MAX){
            exito = false;
        }else{
            exito = true;
        }

}


int main() {

	Conjunto c1, c2, c3, c4;
	bool exito;


	cout << "Primer conjunto:\n";
	leer(c1);


	cout << "\nSegundo conjunto:\n";
	leer(c2);


	calcularInterseccion(c1,c2,c3);
	cout << "\nInterseccion:\n";
	escribir(c3);

	calcularUnion(c1,c2,c4,exito);
	if (exito) {
		cout << "\nUnion:\n";
		escribir(c4);
	} else {
		cout << "\nLa Union no se ha podido realizar\n";
	}

	return 0;


}
