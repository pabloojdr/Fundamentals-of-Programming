//07.bytes.cpp
//Pablo Julián Campoy Fernández 18-10-2021

#include <iostream>
using namespace std;

int main() {
    int b, B, KB, MB;
    cout << "Input bytes: ";
    cin >> b;

    MB = ((b/1024)/1024);
    KB = (b - (10241024MB)/1024;
    B = (b - (MB10241024)-(KB*1024));

    cout << MB << " MegaBytes, " << KB << " KiloBytes and " << B << " Bytes.";

    return 0;
}

