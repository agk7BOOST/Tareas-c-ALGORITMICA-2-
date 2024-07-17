// Se mantiene en memoria un vector A de N elementos. Hacer un algoritmo que
// permitaobtener la sumatoria de todos los elementos ubicados en posiciones pares.
// Ejemplo: si N=10, A={1,2,3,4,5
// ,6,7,8,9,10}, la sumatoria de los elementos ubicados
// en posiciones pares es 1+3+5+7+9=25.
#include <iostream>
using namespace std;
int main(){
    int n, i, suma=0;
    cout<<"Ingrese el numero de elementos del vector: ";
    cin>>n;
    int A[n];
    for(i=0; i<n; i++){
        cout<<"Ingrese el elemento "<<i+1<<": ";
        cin>>A[i];
    }
    for(i=0; i<n; i++){
        if(i%2==0 and i!=0){
            suma+=A[i];
        }
    }
    cout<<"La sumatoria de los elementos ubicados en posiciones pares es: "<<suma<<endl;
    return 0;
}