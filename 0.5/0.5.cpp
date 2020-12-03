/*
    Massimo comun denominatore e Minimo comune multiplo
    Dati in ingresso due numeri interi, stampare a video il loro massimo comun denominatore ed
    il loro minimo comune multiplo. Ad esempio, dati i numeri 4 e 6, il loro MCD è 2, ed il loro
    MCM è 12.
*/

#include <iostream>

using namespace std;

int mcd(int a, int b){
    int mcd= 1;
    int min_ab= (a<b)?a:b;
    for(int i=min_ab; i>0; --i){
        if(a%b== 0 && b%i== 0){
            mcd= i;
            i= 0;
        }
    }
    return mcd;
}

int main(int argc, const char* argv[]){
    if(argc!= 3){
        cout<<"errore: il programma deve essere chiamato con 2 parametri da riga di comando \n";
        return -1;
    }
    int a= atoi(argv[1]);
    int b= atoi(argv[2]);
    cout<<mcd(a, b)<<endl;