// Leer 2 vectores A y B, ambos de longitud N y luego calcular e imprimir:
// · El vector C que sea la suma de A y B, sabiendo que cada C(i) = A(i) + B(i).
// · Suponer que A y B son de dimensiones M y N Respectivamente.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese el numero de elementos del vector: ";
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<" del vector A: ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<" del vector B: ";
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
        }
    cout<<"El vector C es: ";
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
        }
    return 0;
}