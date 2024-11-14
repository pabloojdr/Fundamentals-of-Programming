/*
 * ejercicio4.cpp
 *
 *  Created on: 14/07/2022
 *      Alumno: Pablo Julián Campoy Fernández
 *      Titulación: Doble grado en ingeniería informática y matemáticas
 *      Grupo: D
 *      PC usado:
 */

#include <iostream>
#include <array>
#include <cctype>
using namespace std;

const int NFILAS = 5;
const int NCOLUMNAS = 7;
typedef array<char, NCOLUMNAS> Fila;
typedef array<Fila, NFILAS> SalaCine;

//--------------------------------------------------------------------------
void inicializar(SalaCine& sc)
{
	for(int i = 0; i < NFILAS; i++){
        for(int j = 0; i < NCOLUMNAS; j++){
            sc[i][j] = 'o';
        }
	}
}
//--------------------------------------------------------------------------
void mostrar(const SalaCine& sc)
{
	for(int i = 0; i < NFILAS; i++){
            int j = 0;
            cout << j << " " << endl;
            cout << "-" << endl;
            cout << i << ": ";
            while(j < NCOLUMNAS){
                cout << sc[i][j] << " ";
                j++;
            }

            cout << endl;
	}
}
//--------------------------------------------------------------------------
void comprar_ticket_consecutivo(SalaCine& sc, int fila_1, int fila_2, int n, bool& ok, int& fil_sel, int& col_sel)
{
    int mfil = 0;
    int mcol = 0;
    int cont = 1;
    int maxcont = 0;
	if(fila_1 <= fila_2 and 0 < n){
        for(int i = fila_1; i < fila_2; i++){
            for(int j = 0; j < NCOLUMNAS; j++){
                if(sc[i][j] != 'x'){
                        cont++;
                    if(i <= mfil){
                        mfil = i;
                    }else if(j <= mcol){
                        mcol = j;
                    }else if(maxcont < cont){
                        maxcont = cont;
                    }
                } else{
                    cont = 1;
                }
            }
        }

        if(maxcont >= n){

            }
        }
	}
}
//------------------------------------
void cancelar_ticket(SalaCine& sc, int fil, int col, bool& ok)
{
	// a completar por el alumno
}
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------
//------------------------------------------------------------------------------
char menu()
{
	char op;
	cout << endl << "Sala de Cine" << endl << endl;
	cout << "A.- Mostrar Sala" << endl;
	cout << "B.- Comprar Ticket Consecutivo" << endl;
	cout << "C.- Cancelar Reserva" << endl;
	cout << "X.- Fin" << endl;
	do {
		cout << "    Opcion ? ";
		cin >> op;
		op = tolower(op);
	} while (! ((op == 'x')||(op >= 'a' && op <= 'c')));
	return op;
}
//------------------------------------------------------------------------------
void leer(const string& msj, int& n, int max)
{
	cout << msj;
	cin >> n;
	while (n < 0 || n >= max) {
		cout << "Error. " << msj;
		cin >> n;
	}
}
//------------------------------------------------------------------------------
void ordenar(int& a, int& b)
{
	if (a > b) {
		int x = a;
		a = b;
		b = x;
	}
}
//------------------------------------------------------------------------------
void compra_consecutiva(SalaCine& sala)
{
	bool ok;
	int fmen, fmay, n;
	int fila, columna;
	leer("Introduzca numero de fila menor: ", fmen, sala.size());
	leer("Introduzca numero de fila mayor: ", fmay, sala.size());
	leer("Introduzca numero de asientos consecutivos: ", n, sala[0].size());
	ordenar(fmen, fmay);
	comprar_ticket_consecutivo(sala, fmen, fmay, n, ok, fila, columna);
	if (ok) {
		cout << "Se han reservado " << n << " asientos consecutivos en la fila "
			 << fila
			 << ", a partir de la columna "
			 << columna
			 << endl;
	} else {
		cout << "Error en operación" << endl;
	}
}
//------------------------------------------------------------------------------
void cancelar_reserva(SalaCine& sala)
{
	int fila, columna;
	bool ok;
	leer("Introduzca numero de fila: ", fila, sala.size());
	leer("Introduzca numero de columna: ", columna, sala[fila].size());
	cancelar_ticket(sala, fila, columna, ok);
	if (ok) {
		cout << "Se ha cancelado la reserva de un asiento en la fila "
			 << fila
			 << " y columna "
			 << columna
			 << endl;
	} else {
		cout << "Error en operación" << endl;
	}
}
//------------------------------------------------------------------------------
int main()
{
	SalaCine sala;
	char op;
	inicializar(sala);
	do {
		op = menu();
		switch (op) {
		case 'a':
			mostrar(sala);
			break;
		case 'b':
			compra_consecutiva(sala);
			break;
		case 'c':
			cancelar_reserva(sala);
			break;
		default:
			if (op != 'x') {
				cout << "Error en operación" << endl;
			}
			break;
		}
	} while (op != 'x');
}
//------------------------------------------------------------------------------
