// Dado un vector de N elementos, hacer un algoritmo que permita hallar el mayor y el
// menor elemento del vector con sus posiciones respectivas.
#include <iostream>
#include <stdlib.h>
using namespace std; 
int main(){
    int n, i, mayor, menor, posmayor, posmenor;
    cout<<"Ingrese el numero de elementos del vector: ";
    cin>>n;
    int vector[n];
    for(i=0; i<n; i++){
        vector[i]=rand()%100;
        cout<<vector[i]<<" ";
    }
    mayor=vector[0];
    menor=vector[0];
    posmayor=0;
    posmenor=0;
    for(i=0; i<n; i++){
        if(vector[i]>mayor){
            mayor=vector[i];
            posmayor=i;
        }
        if(vector[i]<menor){
            menor=vector[i];
            posmenor=i;
        }
    }
    cout<<"\nEl mayor elemento es: "<<mayor<<" y su posicion es: "<<posmayor;
    cout<<"\nEl menor elemento es: "<<menor<<" y su posicion es: "<<posmenor;
    return 0;
    }