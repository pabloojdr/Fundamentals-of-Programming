/*
 * 2.inorder.cpp
 *
 *  Created on: 09/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <string>
 #include <array>

 const int MAXNUMSORTEDDIFFWORDS = 100;
 typedef array<string, MAXNUMSORTEDDIFFWORDS> Sortedwords;

 bool inOrder(string &s);
 void printData(Sortedwords& ar);
 bool esta(Sortedwords& ar, string& s);

 int main(){
     string s;
     Sortedwords sw;

     cout << "Enter a series. The word 'end' finishes the input: " << endl;

     int i = 0;
     cin >> s;
     while(s != "end"){
        if(inOrder(s) and (!esta(sw, s))){
            sw[i] = s;
            i++;
        }
        cin >> s;
     }

     printData(sw);

     return 0;

 }

 bool inOrder(string &s){
     int i = 1;
     while(i <= int(s.size()) and s[i-1] <= s[i]){
        i++;
     }

     return (i >= int(s.size()));
 }

 bool esta(Sortedwords& ar, string& s){
     int i = 0;
     while(ar[i] != s and i < MAXNUMSORTEDDIFFWORDS){
       i++;
     }
     return (i < MAXNUMSORTEDDIFFWORDS);
 }

 void printData(Sortedwords& ar){
     for(int i = 0; i < MAXNUMSORTEDDIFFWORDS; i++){
        cout << ar[i] << " ";
     }
 }

