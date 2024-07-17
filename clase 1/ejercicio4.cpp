// Diseñar un algoritmo para crear un vector V, con todas las edades de los alumnos el
// cuarto curso de Ingeniería, desde el vector calcular el promedio de edades.
#include <iostream> 
#include <stdlib.h>
using namespace std;
int main(){
    int alumnos,i,sum=0;
    float prom;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>alumnos;
    int edades[alumnos];
    for(i=0;i<alumnos;i++){
        cout<<"Ingrese la edad del alumno "<<i+1<<": ";
        cin>>edades[i];
        sum=sum+edades[i];
    }
    prom=sum/alumnos;
    cout<<"El promedio de edades es: "<<prom;
    return 0;
}