// Desarrollar un algoritmo que permita crear un Vector A de N elementos y cargar con
// valores numéricos en cada posición del Vector. La Dimensión y los valores
// individualesdeben ser cargados por el usuario.
#include <iostream>
using namespace std;
int main(){
    int n, i=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){ 
        cout<<"Dale un valor al elemento "<<i<<" del vector \n";
        cin>>arr[i];
    }
    for(int num:arr){
        cout<<num<<"\n";
    }
    return 0;
}