#include <iostream>
#define N 10
#define A 4
using namespace std;
int main (){
    //definire un vettore di interi di dieci elelementi, caricare il vettore con un valore che per ogni posizione è ugualea all'indice+2
    int vett [N];
    for (int i=0; i<N; i++){
        vett[i]=i+2;
        cout<<vett[i]<<endl<<endl;
    }

    //caricare vettore da tastiera, fare somma, media, massimo e minimo, massimo dei negativi ed il minimo dei positivi

    int somma = 0;
    float media;
    int massimo = -10000000;
    int minimo = 10000000;
    int massNeg = -10000000;
    int minPos = 10000000;
    int vettore[A];
    for (int a = 0; a < A; a++){
        cin>> vettore [a];
        somma + = vettore[a];
        if (massimo < vettore[a]){
            massimo = vettore[a];}
        if (minimo > vettore[a]){
            minimo = vettore[a];}
        if (vettore[a] < 0 && massNeg < vettore[a]){
            massNeg = vettore[a];
        }
        if (vettore [a] > 0 && vettore[a] < minPos){
            minPos = vettore [a];
        }
    }
    cout<<"il tuo vettore e' ";
    for (int a = 0; a < A; a++) {
        cout<<vettore[a];
        if (a < A-1)
            cout<<", ";
        else
            cout<<".";
    }
    media = float (somma)/A;
        cout<<endl<< "la somma e' "<<somma<<endl;
        cout<<"la media e' "<<media<<endl;
        cout<<"il massimo e' "<<massimo<<endl;
        cout<< "il minimo e' "<<minimo<<endl;
        cout<<"il massimo dei negativi e' "<<massNeg<<endl;
        cout<<"il minimo dei positivi e' "<<minPos<<endl;

    return 0;
}
