/*
 * ejercicio1.cpp
 *
 *  Created on: 01/09/2017
 *      Alumno:
 *      Titulación:
 *      Grupo:
 *      PC usado:
 */

#include <iostream>

using namespace std;

const unsigned FIL = 3;
const unsigned COL = 4;

typedef unsigned TFila[COL];
typedef TFila TMatriz[FIL];

/*  devuelve la suma de los mayores impares de cada
 *  fila de la matriz m
 */

bool isEven(int a);

unsigned sumaMayoresImpares(const TMatriz& m) {
    int greatestEven = 0;
    int sum = 0;
    for(int i = 0; i < FIL; i++){
        for(int j = 0; j < COL; j++){
            if(isEven(m[i][j])){
                    if(greatestEven < m[i][j]){
                        greatestEven = m[i][j];
                    }
            }
        }
        sum += greatestEven;
    }

    return sum;
}

bool isEven(int a){
    bool even = false;
    if((a % 2) != 0){
        even = true;
    }

    return even;
}

// muestra por pantalla el contenido de la matriz m
void escribir(const TMatriz& m) {
    for (unsigned f = 0; f < FIL; f++) {
        for (unsigned c = 0; c < COL; c++) {
            cout << m[f][c] << " ";
        }
		cout << endl;
	}
	cout << endl;

}

int main() {
	TMatriz m = { {6,4,12,2},
                  {5,2,7,3},
                  {4,9,5,11}
                };
	unsigned suma;

	/* Mostramos la matriz */
	cout << "El contenido de la matriz de prueba es: \n";
	escribir(m);

	/* Probamos nuestra función sumaMayoresImpares */
	suma = sumaMayoresImpares(m);

    cout << "La suma de los mayores impares de las filas es: " << suma << endl;


	return 0;
}

