/*
 * ejercicio3.cpp
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
 #include <string>

 const int MAX_PAL_DIST = 20;
 typedef array<string, MAX_PAL_DIST> TPalabras;

 struct TDatos {
    TPalabras pal;
    unsigned npal;
 };


 bool esta(string& pal, TDatos& d);
 int sumaASCII(string& s);
 string toUp(string& s);
 bool isLower(char& c);
 bool sameASCII(string& patron, string& pal);
 void escribirDatos(TDatos& d);

 int main(){

    TDatos d;
    string patron;
    string s;

    cout << "Introduzca el patron: ";
    cin >> patron;
    patron = toUp(patron);

    cout << "Introduzca el texto (FIN para terminar): ";

    d.npal = 0;
    while(s != "FIN"){
        if(sameASCII(patron, s) and (!esta(s, d))){
            d.pal[d.npal] = s;
            d.npal++;
        }
        cin >> s;
    }

    escribirDatos(d);

    return 0;
 }

 bool esta(string& pal, TDatos& d){
    bool res = false;

    for(int i = 0; i < d.npal; i++){
        if(pal == d.pal[i]){
            res = true;
        }
    }
    return res;
 }

 int sumaASCII(string& s){
    int sum = 0;
    s = toUp(s);

    for(int i = 0; i < int(s.size()); i++){
        sum += s[i];
    }

    return sum;
 }

 bool sameASCII(string& patron, string& pal){
    bool resultado = false;

    if(sumaASCII(patron) == sumaASCII(pal)){
        resultado = true;
    }

    return resultado;
 }

 void escribirDatos(TDatos& d){
    cout << "Las palabras que cumplen la condicion son: " << endl;
    for(int i = 0; i < d.npal; i++){
        cout << d.pal[i] << " ";
    }
 }

 string toUp(string& s){

    for(int i = 0; i < s.size(); i++){
        if(isLower(s[i])){
            s[i] = s[i] + 'A' - 'a';
        }
    }

    return s;
 }

 bool isLower(char& c){
    bool res = false;
    if(c >= 'a' and c <= 'z'){
        res = true;
    }

    return res;
 }

