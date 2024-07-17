// Escribir un programa que permita la creación y carga manual de un arreglo bidimensional
// Mat de M x N del tipo entero (deben ser positivos). Imprimir el arreglo en pantalla.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int i,j,M,N=0;
    while(M<=0 or N<=0){
    cout<<"Imprime las dimensiones del vector (MxN): \n";
    cin>>M;
    cin>>N;
    }
    int mat[M][N];
    for(i=1; i<=M; i++){
        for(j=1;j<=N;j++){
            mat[i][j]=rand() % 89 + 10;
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}