/*
 * ejercicio4.cpp
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

 const int NFILAS = 4;
 const int NCOLUMNAS = 3;

 typedef array<array<int, NCOLUMNAS>, NFILAS> TImagen;

 void leerDatos(TImagen& mat);
 void mostrarDatos(TImagen& mat);
 bool celdaValida(int& f, int& c);
 int media(TImagen& mat, int i, int j);
 TImagen suavizado(TImagen& mat);

 int main(){
     TImagen matriz;
     TImagen b;
     leerDatos(matriz);
     cout << "La matriz introducida es: " << endl;
     mostrarDatos(matriz);
     b = suavizado(matriz);

     cout << "La matriz suavizada es: " << endl;
     mostrarDatos(b);

     return 0;

 }

 TImagen suavizado(TImagen& mat){
     TImagen b;

     for(int i = 0; i < NFILAS; i++){
        for(int j = 0; j < NCOLUMNAS; j++){
            b[i][j] = media(mat, i, j);
        }
     }

     return b;
 }
 int media(TImagen& mat, int i, int j){
     int suma = 0;
     int cont = 0;
     for(int fil = i-1; fil <= i+1; fil++){
        for(int col = j-1; col <= j+1; col++){
            if(celdaValida(fil, col)){
                suma += mat[fil][col];
                cont++;
            }
        }
     }

    return (suma/cont);
 }
 bool celdaValida(int& f, int& c){
     bool res = false;
     if(f >= 0 and f < NFILAS and c >= 0 and c < NCOLUMNAS){
        res = true;
     }

     return res;
 }

 void leerDatos(TImagen& mat){
    for(int i = 0; i < NFILAS; i++){
        for(int j = 0; j < NCOLUMNAS; j++){
            cout << "Introduce el dato de la fila "<< i+1 << " y columna " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
    cout << endl;
 }

 void mostrarDatos(TImagen& mat){
     for(int i = 0; i < NFILAS; i++){
        for(int j = 0; j < NCOLUMNAS; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
     }
     cout << endl;
 }

