//diagonalmatrix.cpp
//pabloojdr     19-01-2022

#include <iostream>
#include <array>
using namespace std;
const int N = 4;

typedef array<array<int, N>, N> TMat;
bool isDiagonal(TMat a);
void readmat(TMat& a);
void printmat(TMat a);

int main()
{
    TMat b;
    readmat(b);
    isDiagonal(b);

    if(isDiagonal(b) == true){
        cout << "The Matrix is diagonal.";
    }

    else{
        cout << "The Matrix is not diagonal.";
    }

}

bool isDiagonal(TMat m)
{
    bool diag = true; //desde el principio vamos a asumir que es diagonal
    int i = 0, j = 0;

    while(diag and i < N){ //vamos a abrir un loop mientras sea diagonal (el programa cambia diag por su valor, que es true) (para que no fuese diagonal tendríamos que poner (not diag) NO USAR ! PARA NEGAR
        while(diag and j < N){ //para poner la otra condición también podríamos usar otro while dentro del while con while(i < N). Tenemos que ponerlo en ese orden, ya que daría error con el compiler.
            if((i != j and m[i][j] != 0) or (i == j and m[i][j] == 0)){
                    diag = false;
                }
                j++;
            }
        j = 0; //tenemos que ponerla a 0 ya que anteriormente se había quedado como un 4 al ir sumandolo hasta N = 4. Podemos ponerla aquí o debajo del primer while, es lo mismo.
        i++;
    }

    return diag;
}

void readmat(TMat& a)
{
    cout << "Please, enter the elements of the matrix: " << endl;
    for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> a[i][j];
            }

    }
}

void printmat(TMat a)
{

}
