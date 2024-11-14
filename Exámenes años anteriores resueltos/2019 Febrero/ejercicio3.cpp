/*
 * ejercicio3.cpp
 *
 *  Created on: 12/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>
 #include <string>

 const int MAX_PAL_DIST = 20;

 struct TRegistro{
     string palabra;
     int inicio;
     int fin;
 };

 typedef array<TRegistro, MAX_PAL_DIST> TVec;

 struct TDatos{
     TVec vec;
     int numpal;
 };

 int buscarPos(string& t, TDatos& d);
 void mostrarDatos(TDatos d);

 int main(){
     string texto;
     TDatos datos;

     cout << "Introduzca un texto (FIN para terminar): " << endl;

     int i = 1;
     int j = 0;
     datos.numpal = 0;

     cin >> texto;

     while(texto != "FIN"){
        j = buscarPos(texto, datos);
        if(j < datos.numpal){
            datos.vec[j].fin = i;
            }else{
            datos.vec[datos.numpal].palabra = texto;
            datos.vec[datos.numpal].inicio = i;
            datos.vec[datos.numpal].fin = i;
            datos.numpal++;
            }

        cin >> texto;
        i++;
        }

     mostrarDatos(datos);
     return 0;
}



 int buscarPos(string& t, TDatos& d){
    int i = 0;
    while(i < d.numpal and t != d.vec[i].palabra){
        i++;
    }

    return i;
 }

 void mostrarDatos(TDatos d){
     cout << "Palabras y posiciones primera y ultima: " << endl;

    for(int i = 0; i < d.numpal; i++){
        cout << d.vec[i].palabra << " "
             << d.vec[i].inicio << " "
             << d.vec[i].fin << endl;
    }
 }
