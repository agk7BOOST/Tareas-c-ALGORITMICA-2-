// Leer un vector de N componentes y luego hallar la suma y el promedio de las
// componentes que están en los lugares pares y de las que se encuentran en posiciones
// impares.
#include <iostream>
using namespace std;
int main(){
    int n, i, sumaPares = 0, sumaImpares = 0;
    float promedioPares, promedioImpares;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;
    int vector[n];
    for (i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    for (i = 0; i < n; i++){
        if (i % 2 == 0){
            sumaPares += vector[i];
        }else{
            sumaImpares += vector[i];
        }
    }
    promedioPares = sumaPares / (n / 2);
    promedioImpares = sumaImpares / (n / 2);
    cout << "La suma de los elementos en posiciones pares es: " << sumaPares;
    cout << " El promedio de los elementos en posiciones pares es: " << promedioPares;
    cout << " La suma de los elementos en posiciones impares es: " << sumaImpares;
    cout << " El promedio de los elementos en posiciones impares es: " << promedioImpares;
    return 0;
}