// Desarrollar un algoritmo que permita crear un vector A de N elementos numéricos según
// lasiguiente regla: Cargar 1 en A(1), 2 en A(2), ..., N en A (N)
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int N, i=0;
    cin>>N;
    int A[N];
    for(i=0; i<N; i++){
        A[i]=i; 
        cout<<A[i]<<" ";
    }
    return 0;
}