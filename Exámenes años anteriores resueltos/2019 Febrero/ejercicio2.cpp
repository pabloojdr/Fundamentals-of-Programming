/*
 * ejercicio2.cpp
 *
 *  Created on: 12/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
#include <string>
#include <array>
using namespace std;

const int TAM = 6;
typedef array<char, TAM> TFila;
typedef array<TFila, TAM> TMatriz;

void cifrar(TMatriz& c, string& t, string& ci);

int main() {
    TMatriz clave = {{ {{'p','k','a','f','5','v'}},
                       {{'e','o','9','t','y','0'}},
                       {{'s','3','z','7','d','j'}},
                       {{'r','b','n','u','m','1'}},
                       {{'2','w','4','h','8','g'}},
                       {{'c','x','6','q','i','l'}},
                    }};
    string texto = "holayadios";
    string cifrado;

    cifrar(clave,texto,cifrado);

    cout << "El texto cifrado es: " << cifrado << endl;

    return 0;
}

void cifrar(TMatriz& c, string& t, string& ci){
    string substring;
    int f1, f2, c1, c2;
    if((int(t.size()) % 2) != 0){
        t = t.substr(0, t.size()-2);
    }

    for(int k = 0; k < t.size(); k = k+2){
        substring = t.substr(k, 2);

        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){
                if(substring[0] == c[i][j]){
                    f1 = i;
                    c1 = j;
                }else if(substring[1] == c[i][j]){
                    f2 = i;
                    c2 = j;
                }
            }
        }
        ci = ci + c[f1][f2] + c[c1][c2];
    }
}
