// Hacer un algoritmo que permita contar los elementos del vector V que sean múltiplos de
// 3y de 5. También se desea obtener el promedio de los elementos ubicados en posiciones
// impares.
#include <iostream>
using namespace std;
int main(){
    int v[10], i, cont=0, suma=0;
    for(i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
    for(i=0; i<10; i++){
        if(v[i]%3==0 && v[i]%5==0){
            cont++;
        }
    }
    for(i=0; i<10; i++){
        if(i%2!=0){
            suma+=v[i];
        }
    }
    cout<<"La cantidad de numeros multiplos de 3 y 5 es: "<<cont<<
    "\nEl promedio de los numeros en posiciones impares es: "<<suma/5
    <<endl;
    return 0;
}