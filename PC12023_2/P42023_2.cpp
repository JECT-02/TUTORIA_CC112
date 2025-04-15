#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void ordenamiento(int arr[], int size){
    int nega[size];
    int posi[size];
    
    int j=0;
    int k=0;
    for(int i=0; i<size; i++){
        if(arr[i]>=0){
            posi[j]=arr[i];
            j++;
        }else{
            nega[k]=arr[i];
            k++;
        }
    }
    
    for(int i=0; i<size; i++){
        if(i<k){
            arr[i] = nega[i];
        }else{
            arr[i] = posi[i-k];
        }
    }
    
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {9, -3, 5, -2, -8, -6, 1, 3};
    
    ordenamiento(arr, 8);
    print(arr,8);
    
}
