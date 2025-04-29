/* 
Suma y promedio usando funciones con punteros
Declara un arreglo de 10 enteros. Escribe una función que reciba un puntero al
arreglo y su tamaño, y calcule la suma y el promedio. Devuelve ambos valores
usando punteros como parámetros por referencia.

el usuario debe ingresar valores hasta que ingrese -1
*/

#include<iostream>
using namespace std;


void SumProm(int* p, int size){
    int suma=0;
    float promedio;
    for(int i=0; i<size; i++){
        suma = suma + *p;
        p=p+1;
    }
    
    promedio = float(suma)/size;
    
    cout<<"suma: "<<suma<<endl;
    cout<<"promedio: "<<promedio<<endl;
}

int main(){
    int n=0;
    int i=0;
    int arr[100];
    do{
        cout<<"ingrese un numero: ";
        cin>>n;
        if(n!=-1){
            arr[i] = n;
            i++;
        }
    }while(n != -1);
    
    int size = i;
    int* p = arr;
    
    SumProm(p,size);
    
    return 0;
}
