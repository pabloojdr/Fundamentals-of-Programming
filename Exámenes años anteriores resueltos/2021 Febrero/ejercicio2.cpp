/*
 * ejercicio2.cpp
 *
 *  Created on: 10/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <string>

 void leerDatos(string& sg, string& se, string& sl);
 bool isNumber(string& s);
 string calISBN(string& sg, string& se, string& sl);


 int main(){
     string group;
     string editor;
     string book;
     string isbn;

     leerDatos(group, editor, book);

     cout << group << " " << editor << " " << book << " " << endl;

     cout << "The ISBN code is: " << isbn << endl;
     return 0;
 }

 void leerDatos(string& sg, string& se, string& sl){
    int tamg = 1;
    int tamel = 4;

    while(int(sg.size()) != tamg or !isNumber(sg)){
        cout << "Please, enter the group's code: ";
        cin >> sg;
    }

    while(int(se.size()) != tamel or !isNumber(se)){
        cout << "Please, enter the editor's code: ";
        cin >> se;
    }

    while(int(sl.size()) != tamel or !isNumber(sl)){
        cout << "Please, enter the book's code: ";
        cin >> sl;
    }
 }

 bool isNumber(string& s){
    int i = 0;
    while(i < s.size() and s[i] <= '9' and s[i] >= '0'){
        i++;
    }

    return i >= s.size();
 }

 int toInteger(char& c);
 char toString(int n);

 string calISBN(string& sg, string& se, string& sl){
    string s = sg + se + sl;
    int sum = 0;
    int control = 0;
    char charcon;

    for(int i = 0; i < s.size(); i++){
        sum += (toInteger(s[i]) * (i+1));
    }
    control = sum % 11;
    if(control == 10){
        charcon = 'X';
    }else {
        charcon = toString(control);
    }

    return sg + se + sl + charcon;
 }

 int toInteger(char &c){
     return int(c) - int('0');
 }

 char toString(int n){
     return char(n + int('0'));
 }
