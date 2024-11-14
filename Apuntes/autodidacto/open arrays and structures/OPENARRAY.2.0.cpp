#include <iostream>
#include <array>

using namespace std;

const int N = 200;

typedef array<int,N> TVec;

struct TOVec {
    TVec arr;
    int nelements;
};

int positionelement(TOVec a, int n);
void addnum(TOVec& a);
void eliminatenumnoorder(TOVec& a);
void eliminatenumorder(TOVec& a);
void printarr(TOVec a);
void readarr(TOVec& a);


int main(){
    TOVec a;
    a.nelements=0;
    readarr(a);
    printarr(a);


    addnum(a);
    printarr(a);
    eliminatenumnoorder(a);
    printarr(a);
    eliminatenumorder(a);
    printarr(a);


}
void readarr(TOVec& a){
    cout<<"PLEASE ENTER AN ARRAY ENDING WITH A 0: "<<endl;
    int i=0;
    while(cin>>a.arr[i] and a.arr[i]!=0){
        ++i;
        ++a.nelements;
    }
}

void printarr(TOVec a){
    cout<<"ARRAY: "<<endl;
    for(int i=0; i<a.nelements; ++i){
        cout<<a.arr[i]<<" ";
    }
    cout<<endl;
}

int positionelement(TOVec a, int n){
    int i=0;
    int pos=0;
    while(a.arr[i]!=n){
        pos++;
        ++i;
    }
    return pos;
}

void addnum(TOVec& a){
    int n;
    cout<<"Please enter a number to add: "<<endl;
    cin>>n;

    if(a.nelements<N){
        a.arr[a.nelements]=n;
        ++a.nelements;
    }
}

void eliminatenumnoorder(TOVec& a){
    int n;
    cout<<"Please enter a number to eliminate: "<<endl;
    cin>>n;

    int pos = positionelement(a,n);

    if(pos!=-1){
        a.arr[pos]=a.arr[a.nelements-1];
        a.nelements--;
    }
}

void eliminatenumorder(TOVec& a){
    int n;
    cout<<"Please enter a number to eliminate (order is kept): "<<endl;
    cin>>n;
    TOVec b=a;

    int pos = positionelement(a,n);

    if(pos!=-1){
        int i=0;
        while(a.arr[i]<pos+1){
            b.arr[i]=a.arr[i];
            ++i;
        }

        while(b.arr[i]>=pos+1){
            b.arr[i]=a.arr[i+1];
            ++i;

        }

        b.nelements--;
        a.nelements--;

    }

    a.arr = b.arr ;
}

