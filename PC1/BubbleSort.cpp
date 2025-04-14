#include<iostream>
using namespace std;


void BubbleSort(int arr[], int n){
	
	for(int i=0; i<n-1; i++){
		
		for(int j=0; j<n-i-1; j++){
			
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
		}
		
		
	}
	
}

void imprimir(int arr[], int n){
	
	for(int i=0; i<=n-1; i++){
		cout<<arr[i]<<" ";
	}
	
}





int main(){
	
	int arr[] = {10,2,3,19,12,6,7};
	
	BubbleSort(arr,7);
	imprimir(arr,7);
	
	
	return 0;
}
