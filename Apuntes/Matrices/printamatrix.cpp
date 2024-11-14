//printmatrix.cpp
//pabloojdr     19-01-2022

#include <iostream>
#include <array>
using namespace std;

const int NROWS = 3;
const int NCOLUMS = 3;

typedef array<array<int, NCOLUMS>,NROWS> TMat;
void printmat(TMat m);
void readmat(TMat& m); //Pide al usuario los elementos
void identityMatrix(TMat& m);

int main()
{
    TMat pepe;
    TMat juan;
    readmat(pepe);
    printmat(pepe);
    cout << endl;
    identityMatrix(juan);
    printmat(juan);
}

void printmat(TMat m)
{
   for(int i = 0; i < NROWS; ++i){ //rows (lo lee de izquierda a derecha y de 0 a N)
    for(int j = 0; j < NCOLUMS; ++j){ //columns (lo lee de arriba a abajo y de 0 a N)
        cout << m [i][j] << " ";
    }
    cout << endl; //cuando acaba de leer las columnas pasa a la siguiente fila (este cout es de las filas)
    }
}

void readmat(TMat& m) //el & sirve para indicar que el elemento m va cambiando a lo largo del subprograma, primero realiza todo el programa y luego cambia
{
    cout << "Please, enter an element of the matrix: " << endl;

    for(int i = 0; i < NROWS; i++){ //para leer elemento a elemento siempre lo hacemos igual, usando esto
        for(int j = 0; j < NCOLUMS; j++){
                cin >> m[i][j];

        }
    }


}

void identityMatrix(TMat& m)
{

    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLUMS; j++){
            if(i == j){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }

    }

}
