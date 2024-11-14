/*
 * ejercicio4.cpp
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
 #include <string>

 const int TAM_CAR = 5;
 const int MAX_PAL_DIST = 30;

 struct TPalabras{
     string palabra;
     int repatron;
 };

 typedef array<char, TAM_CAR> TPat;
 typedef array<TPalabras, MAX_PAL_DIST> TVect;

 struct TDatos{
     TVect vect;
     int num;
 };

 void leerPatron(string& s);

 int main(){
     string patron;

     leerPatron(patron);
     return 0;
 }

 bool noRepetidas(string& s);
 void leerPatron(string& s){
     while(s.size() != 5 or not noRepetidas(s)){
        cout << "Introduzca un patron (long = " << TAM_CAR << ", sin letras repetidas): ";
        cin >> s;
     }
 }

 bool noRepetidas(string& s){
     int i = 1;
     while(i < s.size() and s[i] != s[i-1]){
        i++;
     }

     return i >= s.size();
 }
