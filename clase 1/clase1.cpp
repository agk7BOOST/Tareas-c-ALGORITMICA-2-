// Ejecute un programa que: permita definir un arreglo unidimensional de tamaño n, n debe ser
// una constante con el tamaño a elección. Cargar el arreglo de forma manual. Imprimir el
// tamaño y los valores del arreglo*/

#include <iostream>
#include <stdlib.h>
using namespace std; 
int main(){
    int n, i=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        arr[i]=rand() % 10 + 10; 
    }
    cout<<"Tu puto arreglo es de dimension "<<n<<"\n";
    for(int num:arr){
        cout<<num<<"\n";
    }
    return 0;
}