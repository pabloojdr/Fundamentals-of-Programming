/*
 * ejercicio4.cpp
 *
 *  Created on: 13/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>


 const int NROWS = 3;
 const int NCOLS = 4;

 struct TRegistro{
     int numero;
     int frecuencia;
 };
 typedef array<array<int, NROWS>, NCOLS> TMat;
 typedef array<TRegistro, 1> TVec;

 struct TDatos{
     TVec vect;
     int num;
 };

 void leerDatos(TMat& ma);
 void mostraDatos(TMat& ma);
 int calcFrec(TDatos& d, int n, TMat& m);
 void calcularValores(TDatos& d, TMat& m);

 int main(){

     return 0;
 }

 void calcularValores(TDatos& d, TMat &m, int k){
     for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){

        }
     }
 }
 void anyadirFrecuencia(int& n);
 void buscarPos(TDatos& d, int n);

 int calcFrecuencia(TDatos& d, int n, TMat& m){
     int frec = 0;
     for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            if(n == m[i][j]){
                anyadirFrecuencia(n, d);
                frec = d.vect[buscarPos(d, n)].frecuencia;
            } else{

            }
        }
     }

     return frec;
 }

 void anyadirFrecuencia(int& n, TDatos& d){
    for(int i = 0; i < d.num; i++){
        if(n == d.vect[i].numero){
            d.vect[i].frecuencia++;
        }
    }
 }

 int buscarPos(TDatos& d, int n){
     int i = 0;
     while(n != d.vect[i].numero and i < d.num){
        i++;
     }

     return i;
 }

 void leerDatos(TMat& ma){
     for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            cin >> ma[i][j];
        }
     }
 }

 void escribirDatos(TMat& ma){
 }
