#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void print(int arr[][8], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void generar(int arr[][8], int vec[], int size){
    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j] = rand()%100;
            vec[k]=arr[i][j];
            k++;
        }
    }
    
}

void ordenar(int vec[], int arr[][8], int size){
    for(int i=0; i<size*size-1; i++){
        for(int j=0; j<size*size-i-1; j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
    
    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j] = vec[k];
            k++;
        }
    }
}




int main(){
    srand(time(0));
    int n;
    do{
        cout<<"Ingrese el orden de la matriz: ";
        cin>>n;
    }while(n<2 || n>8);
    
    int arr[8][8];
    int vec[64];
    
    generar(arr,vec,n);
    print(arr,n);
    cout<<endl;
    cout<<"Matriz Ordenada"<<endl;
    
    ordenar(vec,arr,n);
    print(arr,n);
}
