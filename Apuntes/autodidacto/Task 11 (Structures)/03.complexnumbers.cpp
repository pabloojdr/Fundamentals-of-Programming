//03.complexnumbers.cpp
//pabloojdr     09-02-2022

#include <iostream>
using namespace std;

struct TComp{
    float re, im;
};

TComp sumComp(TComp a, TComp b);
TComp subComp(TComp a, TComp b);
TComp mulComp(TComp a, TComp b);
TComp divComp(TComp a, TComp b);
void printComp(TComp d);

int main()
{
    TComp w = {2, 1};
    TComp v = {4, 3};


    printComp(sumComp(w, v));
    printComp(subComp(w, v));
    printComp(mulComp(w, v));
    printComp(divComp(w, v));

    return 0;

}

TComp sumComp(TComp a, TComp b){
    TComp c;

    c.re = a.re + b.re;
    c.im = a.im + b.im;

    return c;
}

TComp subComp(TComp a, TComp b){
    TComp c;

    c.re = a.re - b.re;
    c.im = a.im - b.im;

    return c;
}

TComp mulComp(TComp a, TComp b){
    TComp c;

    c.re = (a.re * b.re) - (a.im * b.im);
    c.im = (a.re * b.im) + (b.re * a.im);

    return c;
}

TComp divComp(TComp a, TComp b){
    TComp c;

    c.re = ((a.re * b.re) + (a.im * b.im)) / ((b.re * b.re) + (b.im * b.im));
    c.im = ((a.im * b.re) - (a.re * b.im)) / ((b.re * b.re) + (b.im * b.im));

    return c;
}


void printComp(TComp d){
    cout << d.re << ", " << d.im << endl;
}
