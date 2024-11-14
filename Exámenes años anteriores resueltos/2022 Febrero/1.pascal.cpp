/*
 * 1.pascal.cpp
 *
 *  Created on: 09/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>

 const int N = 7;
 typedef array<array<int, N>, N> TSqMat;

 void fillMatrix(TSqMat& mat);
 void printMatrix(TSqMat& mat);

 int main(){
     TSqMat m;
     fillMatrix(m);
     printMatrix(m);

     return 0;
 }

 void fillMatrix(TSqMat& mat){

     for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == 0 or j == 0){
                mat[i][j] = 1;
            }else if(i + j >= N){
                mat[i][j] = 0;
            }else {
                mat[i][j] = (mat[i-1][j] + mat[i][j-1]);
            }
        }
     }
  }

 void printMatrix(TSqMat& mat){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i+j >= N){
                cout << " ";
            }else{
                  cout << mat[i][j] << "  ";
            }
        }
        cout << endl;
    }
 }
