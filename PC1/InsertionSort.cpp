#include<iostream>

using namespace std;


void InsertionSort(int arr[], int n){
	
	for(int i=0; i<=n-1;i++){
		int key = arr[i];
		int j = i-1;
		
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		
		arr[j+1] = key;
	}
	
}

void imprimir(int arr[], int n){
	
	for(int i=0; i<=n-1; i++){
		cout<<arr[i]<<" ";
	}
	
}

int main(){
	
	int arr[] = {10,2,3,19,12,6,7};
	
	InsertionSort(arr,7);
	imprimir(arr,7);
	
	return 0;
}
