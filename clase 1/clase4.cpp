// Escriba un programa que permita la creación y carga automática de un arreglo
// bidimensional Mat de M x N del tipo entero. Leer los valores para M y N, deberán ser
// mayor a 1 y menor a 5. Imprimir el arreglo en pantalla
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int M, N, i, j=0;
    while(M>5 or M<1){
        cout<<"Ingrese numero de filas (entre 1 y 5): ";
        cin>>M;
    }
    while(N>5 or N<1){
        cout<<"Ingrese numero de columnas (entre 1 y 5): ";
        cin>>N;
    }
    int arr[M][N];
    for(i=1; i<M;i++){
        for(j=1; j<N; j++){
            arr[i][j]=rand()%10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}