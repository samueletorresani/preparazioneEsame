//ricerca elemento in un array

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]){
    if(argc<2){
        cout<<"errore";
        return -1;
    }
    int x = atoi(argv[1]);
    int n= argc - 2;
    bool found= false;
    for(int i=0; i<n; ++i){
        if(atoi(argv[i+2])== x){
            found= true;
            i= n;
        }
    }
    cout<<(found?"true":"false")<<endl;
    return 0;
}
