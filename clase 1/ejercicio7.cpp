// Analizar si dos vectores leídos, A y B, son iguales, sabiendo que las dimensiones de A y
// Bson M y N respectivamente.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int M, N;
    cout<<"Ingrese el tamaño de A: ";
    cin>>M;
    cout<<"Ingrese el tamaño de B: ";
    cin>>N;
    if(M==N){
        int A[M], B[N];
        for(int i=0; i<M; i++){
            cout<<"Ingrese el valor de A["<<i<<"]: ";
            cin>>A[i];
            }
        for(int i=0; i<N; i++){
            cout<<"Ingrese el valor de B["<<i<<"]: ";
            cin>>B[i];
            }
        for(int i=0; i<M; i++){
            if(A[i]!=B[i]){
                cout<<"Los vectores no son iguales";
                return 0;
                }
                }
        cout<<"Los vectores son iguales";
        return 0;
}
    else{
        cout<<"Los vectores no son iguales";
        return 0;
        }
    }