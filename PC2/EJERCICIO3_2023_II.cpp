/*
Dado un arreglo de longitud n de valores enteros positivos, extraiga la subsucesión creciente de
mayor longitud, utilizando punteros para recorrer los arreglos necesarios. Por ejemplo, en el arreglo 
*/

#include<iostream>
using namespace std;

void maximoCreciente(int* p, int len){
    int maxSize = 1;
    int inicio = 0;
    int aux;
    
    for(int i=0; i<len; i++){
        aux = i;
        int size = 0;
        while(*(p+aux)<*(p+aux+1) && aux<len-1){
            aux++;
            size++;
        }
        
        if(size > maxSize){
            inicio = i;
            maxSize = size;
        }
        
    }
    
    for(int i=inicio; i<=inicio+maxSize; i++){
            cout<<*(p+i)<<" ";
    }
}


int main(){
    
    int n[] = {1,3,5,2,3,4,9,3,6,3,6};
    int *p = n;
    
    maximoCreciente(p,11);
    
    return 0;
}
