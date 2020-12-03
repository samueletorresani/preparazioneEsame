/*
    Invertire un array (blocco 2)
    Dato in ingresso da riga di comando un array, stamparlo in ordine inverso
*/

#include <iostream>

using namespace std;

int main (int argc, const char * argv[]){
    for( int i = 1; i<argc; ++i){
        cout<< argv[i]<<" "<<endl;
    }
    for(int i= argc- 1; i >= 1; --i){
        cout<< argv[i]<<" ";
    }
    return 0;
}
