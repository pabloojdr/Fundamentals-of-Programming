/*
 * 3.img.cpp
 *
 *  Created on: 10/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

 #include <iostream>
 using namespace std;
 #include <array>

 const int NROWS = 2;
 const int NCOLS = 3;

 typedef array<array<int, NROWS>, NCOLS> TMat;
 typedef array<array<int, 2*NROWS>, NCOLS> TMat2;

 void readMatrix(TMat& mat);
 void printMatrix(TMat& mat);
 void printScaleMatrix(TMat2& mat2);

 TMat2 scaleUp(TMat& mat);

 int main(){
     TMat m1;
     TMat2 mat2;

     readMatrix(m1);

     mat2 = scaleUp(m1);

     printMatrix(m1);
     printScaleMatrix(mat2);
     return 0;
 }

 void fillMat2Even(TMat& mat, TMat2& mat2);
 void fillMat2Odd(TMat2& mat2);
 int mMean(TMat& mat);
 int mateMean(int& r, int& c, TMat2& mat2, int mean);
 bool isNeighbour(int& r, int& c);



 TMat2 scaleUp(TMat& mat){
     TMat2 m2;
     fillMat2Even(mat, m2);
     fillMat2Odd(m2);
     int mean = mMean(mat);

     for(int i = 0; i < 2*NROWS; i = i+2){
        for(int j = 0; j < NCOLS; j++){
            m2[i][j] = mateMean(i, j, m2, mean);
        }
     }
     return m2;
 }

 void fillMat2Even(TMat& mat, TMat2& mat2){
    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            mat2[2*i][j] = mat[i][j];
        }
    }
 }

 void fillMat2Odd(TMat2& mat2){
     for(int i = 1; i < 2*NROWS; i = i+2){
        for(int j = 0; j < NCOLS; j++){
            mat2[i][j] = 0;
        }
     }
 }

 int mMean(TMat& mat){
     int sum = 0;
     for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            sum += mat[i][j];
        }
     }
     return (sum / (NROWS*NCOLS));
 }

 int mateMean(int& r, int& c, TMat2 mat2, int mean){
     int neighbour = 0;
     int sum = 0;
     for(int row = r-1; row < r+1; row++){
        for(int col = c-1; col < c+1; col++){
            if(isNeighbour(row, col)){
                    neighbour++;
                if(mat2[row][col] == 0){
                    sum += mean;
                } else{
                    sum += mat2[row][col];
                }
            }
        }
     }
     return (sum / neighbour);
 }

 bool isNeighbour(int& r, int& c){
     bool res = false;

     if(r >= 0 and r <= NROWS and c <= 0 and c >= NCOLS){
        res = true;
     }
     return res;
 }

 void readMatrix(TMat& mat){
    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            cout << "Please, enter the element of the row " << i+1 << " and column " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
 }

 void printMatrix(TMat& mat){
     for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
     }
     cout << endl;
 }

 void printScaleMatrix(TMat2& mat2){
     for(int i = 0; i < 2*NROWS; i++){
        for(int j = 0; j < NCOLS; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
     }
     cout << endl;
 }
