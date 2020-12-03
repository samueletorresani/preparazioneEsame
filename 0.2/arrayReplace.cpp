/*
    Sostituire elementi in un array
    Dati due valori interi x ed y da riga di comando, stampare a video una versione processata
    del seguente array:
    3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8
    nella quale si sono sostituite tutte le istanze di x con il valore y. Se ad esempio x=3 ed y=-1,
    il programma dovrebbe stampare:
    -1, 9, 1, 2, 10, 8, 4, 5, 2, -1, 7, 4, 6, 5, 9, 8
*/

#include <iostream>

using namespace std;

int main (int argc, const char * argv[]){
    if (argc != 3){
        cout<<"errore, non sono stati inseriti 2 argomenti da riga di comando \n";
        return -1;
    }

    int x= atoi (argv[1]);
    int y= atoi (argv[2]);

    const int n= 16;
    int a[16]= {3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8};

    for(int i= 0; i< n; ++i){
        if(x== a[i]){
            a[i]= y;
        }
        cout<<a[i]<<" ";
    }
    return 0;
}