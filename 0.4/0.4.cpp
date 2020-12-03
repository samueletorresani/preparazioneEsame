/*
    Fibonacci
    Dato in ingresso da riga di comando un intero positivo i, stampare in uscita l'i-esimo valore
    della sequenza di Fibonacci. Nella sequenza di Fibonacci i primi due elementi sono uguali
    ad 1, mentre ogni elemento successivo è dato dalla somma dei due elementi che lo
    precedono, ovvero:
    1, 1, 2, 3, 5, 8, 13,...
*/

#include <iostream>

using namespace std;

int fibonacci(int y){
    if(y ==1 || y== 2)
        return 1;
    return fibonacci (y-1) + fibonacci (y-2);
}

int fibonacciIter (int y){
    if(y ==1 || y== 2)
        return 1;
    int*a= new int [y];
    a[0]= 1;
    a[1]= 1;
    for(int i= 2; i< y; ++i){
        a[i]= a[i-1] + a[i-2];
    }
    int res= a[y-1];
    delete[] a;
    return res;
}



int main(int argc, const char* argv[]){
    if(argc!=2){
        cout<<"errore: il numero di argomenti da riga di comando dovrebbe essere 1 \n";
        return -1;
    }
    int x= atoi(argv[1]);
    if(x>0)
        cout<<fibonacci(x)<<endl;
    return 0;
}