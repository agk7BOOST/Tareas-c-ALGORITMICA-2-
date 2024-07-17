// Ejecute un programa que permita definir un arreglo unidimensional de tamaño n, n deberá
// estar entre 5 y 15. Cargar el arreglo de forma automática. Imprimir el tamaño y los valores
// del arreglo. 
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){ 
    int i,n=0;
    while(n<5 or n>15){
        cout<<"Escribe un numero dentro de un intervalo cerrado el 5 al 15 \n";
        cin>>n;
    }
    cout<<"El arreglo es de dimension "<<n<<endl;
    int arr[n];
    for(i=0;i<n;i++){
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    }
}