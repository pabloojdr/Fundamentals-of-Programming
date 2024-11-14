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
 using namespace std;
 #include <string>
 #include <array>

 const int MAX_PAL = 20;

 struct TRegistro{
     int longitudes;
     int ocurrencias;
 };

 typedef array<TRegistro, MAX_PAL> TVector;

 struct TDatos{
     TVector vec;
     int num;
 };

 int posLong(int n, TDatos& d);
 void escribirDatos(TDatos& d);

 int main(){
     string s;
     TDatos d;
     int longitud = 0;


     cout << "Introduzca un texto (FIN para terminar): " << endl;
     cin >> s;

     d.num = 0;
     while(s != "FIN"){
        if(d.num <= posLong(int(s.size()), d)){
            d.vec[d.num].longitudes = s.size();
            d.vec[d.num].ocurrencias = 1;
            d.num++;
        }else{
            d.vec[posLong(int(s.size()), d)].ocurrencias++;
        }

        cin >> s;
     }

     escribirDatos(d);

     return 0;
 }

 int posLong(int n, TDatos& d){
     int i = 0;
     while(n != d.vec[i].longitudes and i < d.num){
        i++;
     }

     return i;
 }

 void escribirDatos(TDatos& d){
     cout << "Longitudes" << " " << "Ocurrencias" << endl;

     for(int i = 0; i < d.num; i++){
        cout << d.vec[i].longitudes << " " << d.vec[i].ocurrencias << endl;
     }
 }
