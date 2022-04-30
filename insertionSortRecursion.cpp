#include<iostream>
using namespace std;

void insertionSort(int arr[], int i, int n) {

    //base case
    if(i == n) {
        return;
    }
    
    int j = i-1;
    int temp = arr[i];

    while(j>=0) {
        if(arr[j]>temp) {
            arr[j+1] = arr[j];
        } 
        else{
            break;
        }
        j--;
    }
    arr[j+1] = temp;

    //recursive call
    insertionSort(arr, i+1, n);

}

int main() {

    int arr[6] = {6, 5, 4, 3, 2, 1};

     int size = 6;

     insertionSort(arr, 1, 6);

     cout<<"Printing sorted array: ";

     for(int i = 0; i<size; i++) {
         cout<<arr[i]<<" ";
     }
}