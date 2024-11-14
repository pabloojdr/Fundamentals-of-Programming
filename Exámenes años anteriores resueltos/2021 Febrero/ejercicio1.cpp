/*
 * ejercicio1.cpp
 *
 *  Nombre: Pablo Julián Campoy Fernández
 *  Numero PC:
 */

#include <iostream>
#include <array>

using namespace std;

const int N = 4;
const int M = 5;
typedef array<int,M> TFila;
typedef array<TFila, N> TMatriz;

bool sonEspejo(TMatriz& mat1, TMatriz& mat2);

int main() {
    TMatriz m1 = {{{{1,2,3,4,5}},
                   {{6,7,8,9,10}},
                   {{11,12,13,14,15}},
                   {{16,17,18,19,20}}}};

    TMatriz m2 = {{{{5,4,3,2,1}},
                   {{10,9,8,7,6}},
                   {{15,14,13,12,11}},
                   {{20,19,18,17,16}}}};

    TMatriz m3 = {{{{5,4,3,2,1}},
                   {{10,9,8,7,6}},
                   {{15,14,13,12,11}},
                   {{20,1,18,17,16}}}};

    if (sonEspejo(m1,m2)){
        cout << "Las matrices son espejo una de la otra" << endl;
    }else{
        cout << "Las matrices no son espejo una de la otra" << endl;
    }

    if (sonEspejo(m1,m3)){
        cout << "Las matrices son espejo una de la otra" << endl;
    }else{
        cout << "Las matrices no son espejo una de la otra" << endl;
    }
}

 bool filaEspejo(TMatriz& mat1, TMatriz& mat2, int i);

 bool sonEspejo(TMatriz& mat1, TMatriz& mat2){
    int res = 0;
    for(int i = 0; i < N; i++){
        if(filaEspejo(mat1, mat2, i)){
            res++;
        }
    }

    return res >= N;
 }

 bool filaEspejo(TMatriz& mat1, TMatriz& mat2, int i){
     int k = M-1;
     int j = 0;
     int num = 0;
     while(mat1[i][j] == mat2[i][k] and j < M and M > 0 ){
        k--;
        j++;
        num++;
     }

     return num >= M;
 }




