/*
 * ejercicio2.cpp
 *
 *  Created on: 13/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
#include <string>
#include <array>
using namespace std;

const int FILAS=7;
const int COLUMNAS=12;
typedef array<char, COLUMNAS> TFila;
typedef array<TFila, FILAS> TMatriz;

int conseguirColumna(const TMatriz& imagen, int fil){
  int pos = 0;
  while(pos < COLUMNAS and imagen[fil][pos] != '*'){
    pos++;
  }

  return pos;
}

int diametro(const TMatriz& imagen){
    int diametro = 0;
    for(int i = 0; i < FILAS; i++){
        if(conseguirColumna(imagen, i) < COLUMNAS){
            int k = 0;
            while(k < FILAS and imagen[k][conseguirColumna(imagen, i)] != '*'){
                k++;
            }

            diametro = i - k - 1;
        }
    }

    return diametro;
}

int main() {

    TMatriz imagen1 = {{ {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' '}},
                        {{'*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' '}},
                        {{'*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' '}},
                        {{' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ',' '}},
                    }};
    TMatriz imagen2 = {{ {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ','*',' ','*',' '}},
                        {{' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' '}},
                    }};


    cout << "Diametro circunferencia1: " << diametro(imagen1)<< endl;

    cout << "Diametro circunferencia2: " << diametro(imagen2)<< endl;


    return 0;
}
