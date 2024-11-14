/*
 * ejercicio3.cpp
 *
 *  Created on: 11/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>
 #include <string>

 const int MAX_CAR_PATRON = 5;
 const int MAX_PAL_DIST = 20;

 typedef array<char, MAX_CAR_PATRON> TLetters;

 struct TPat{
     TLetters letter;
     int numlet;
 };

 typedef array<string, MAX_PAL_DIST> TVect; //Array that will include

 struct TDatos{
     TVect vec;
     int numpal;
 };

 bool isIn(char& c, TPat& p);
 bool isInWord(string& s, TDatos& d);
 bool notContain(string& s, char& c);
 void compare(TPat& p, TDatos& d);

 int main(){
     string patron;
     string chain;
     TPat pat;
     TDatos d;

     pat.numlet = 0;

     cout << "Introduzca un patron (longitud maxima = " << MAX_CAR_PATRON << "): ";
     cin >> patron;
     while(patron.size() > MAX_CAR_PATRON){
        cout << "Introduzca un patron (longitud maxima = " << MAX_CAR_PATRON << "): ";
        cin >> patron;
     }

     for(int i = 0; i < int(patron.size()); i++){
        if(!isIn(patron[i], pat)){
            pat.letter[pat.numlet] = patron[i];
            pat.numlet++;
            }
        }

     cout << "Introduzca un texto (FIN para terminar): ";
     cin >> chain;
     while(chain != "FIN"){
        if(!isInWord(chain, d)){
            d.vec[d.numpal] = chain;
            d.numpal++;
        }
        cin >> chain;
     }

     compare(pat, d);

     return 0;
 }

 bool isIn(char& c, TPat& p){
     int i = 0;
     while(i < p.numlet and p.letter[i] != c){
        i++;
     }

     return i < p.numlet;
 }

 bool isInWord(string& s, TDatos& d){
    int i = 0;
    while(i < d.numpal and d.vec[i] != s){
        i++;
    }

    return i < d.numpal;
 }

 bool contain(string& s, char& c){
    int i = 0;
    while(i < int(s.size()) and s[i] != c){
        i++;
    }

    return i < int(s.size());
 }

 void compare(TPat& p, TDatos& d){
      cout << "Palabras que comparten letra con las letras del patron: " << endl;
      for(int i = 0; i < p.numlet; ++i){
            cout << p.letter[i] << ": ";

            for(int j = 0; j < d.numpal; j++){
                if(contain(d.vec[j], p.letter[i]) == true){
                    cout << d.vec[j] << " ";
                }
            }
            cout << endl;
      }
 }


