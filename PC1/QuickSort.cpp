#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    int pivot = arr[mid];
    int i = low;
    int j = high;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (low < j) quicksort(arr, low, j);
    if (i < high) quicksort(arr, i, high);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 1,4,9,8,10,12,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}

