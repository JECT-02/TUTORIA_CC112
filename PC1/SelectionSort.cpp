#include<iostream>
using namespace std;

// SELECTION SORT

void Selection(int arr[], int n){
	
	for(int i=0; i<= n; i++){
		
		int minIndex = i;
		
		for(int j=i; j<=n-1; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		
		if(minIndex != i){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
		
	}
	
}

void imprimir(int arr[], int n){
	for(int i=0; i<=n-1; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {10,19,3,1,5,18,14};
	
	Selection(arr,7);
	imprimir(arr,7);
	
	return 0;
}
