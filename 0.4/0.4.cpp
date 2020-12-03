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
        cout<<"errore";
        return -1;
    }
    int x= atoi(argv[1]);
    if(x>0)
        cout<<fibonacci(x)<<endl;
    return 0;
}