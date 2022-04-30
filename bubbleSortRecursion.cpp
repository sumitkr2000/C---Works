#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    //base case
    if(n == 0 || n == 1) {
        return;
    }

    for(int i = 0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    //recursive call
    bubbleSort(arr, n-1);
}

int main() {

    int arr[6] = {10,55,3,99,546,0};

    int n = 6;

    bubbleSort(arr, n);

    cout<<"Printing sorted array: ";

    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}