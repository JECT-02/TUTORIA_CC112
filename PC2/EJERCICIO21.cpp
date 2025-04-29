/* 
Matriz como puntero a arreglo:
Declara una matriz int matriz[3][4]. Escribe una función que reciba la matriz
como puntero a arreglo y que imprima todos los elementos, sin usar índices.
*/

#include<iostream>
using namespace std;

void imprimirMatriz(int* p, int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<*(p + (i*columnas)+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    int matriz[3][4] = {{1,2,3,4},{7,8,9,10},{3,7,9,10}};
    
    int* p = matriz[0];
    
    imprimirMatriz(p,3,4);
    
    return 0;
}
