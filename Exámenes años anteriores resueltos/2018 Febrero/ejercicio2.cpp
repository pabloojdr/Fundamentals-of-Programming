/*
 * ejercicio2.cpp
 *
 *  Created on: 15/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>

 const int F = 3;
 const int C = 3;

 typedef array<array<int, C>, F> TMat;

 void leerMatriz(TMat& m);
 void cimasDeMatriz(TMat& m);

 int main(){
     TMat mat;

     leerMatriz(mat);
     cimasDeMatriz(mat);
     return 0;
 }


 void leerMatriz(TMat& m){
     for(int i = 0; i < F; i++){
        for(int j = 0; j < C; j++){
            cout << "Introduce el elemento de la fila " << i+1 << ", columna " << j+1 <<": ";
            cin >> m[i][j];
        }
     }

 }
 bool esCima(int& fil, int& col, TMat& m, int& n);
 void cimasDeMatriz(TMat& m){
    cout << "Las cimas de la matriz son: "<< endl;

    for(int i = 0; i < F; i++){
        for(int j = 0; j < C; j++){
            if(esCima(i, j, m, m[i][j])){
                cout << "Fila " << i << " columna " << j << " valor " << m[i][j] << endl;
            }
        }
    }
 }

 bool esVecino(int& fil, int& col);
 bool mayorOIgual(int n, int fi, int co, TMat m);
 bool esCima(int& fil, int& col, TMat& m, int& n){
     return  mayorOIgual(n, fil-1,col, m) and mayorOIgual(n, fil+1, col, m) and mayorOIgual(n, fil,col-1, m) and mayorOIgual(n, fil, col+1, m);
 }
 bool mayorOIgual(int n, int fi, int co, TMat m){
     return !esVecino(fi, co) or n >= m[fi][co];
 }
 bool esVecino(int& fil, int& col){
    return fil <= F and fil >= 0 and col <= C;
 }
