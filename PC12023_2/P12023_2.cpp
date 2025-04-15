#include <iostream>
using namespace std;


float busqueda_peso(float arr[], int size, float target){
    if(target <= arr[0]){
        return arr[0];
    }
    if(target >= arr[size-1]){
        return arr[size-1];
    }
    
    int left = 0;
    int right = size-1;
    
    while(left<=right){
        int mid = (left + right)/2;
        if(arr[mid] == target){
            return target;
        }else if(target < arr[mid]){
            if(arr[mid-1]<target){
                return (arr[mid-1]+arr[mid])/2;
            }
            right = mid-1;
        }else if(arr[mid]<target){
            if(target<arr[mid+1]){
                return (arr[mid]+arr[mid+1])/2;
            }
            left = mid+1;
        }
    }
}


int main()
{
    float A[] = {8.8,10.1,14.4,16.6,18.8,20.5};
    float n = 23;
    
    float pv = busqueda_peso(A,6,n);
    cout<<pv<<endl;
    return 0;
}
