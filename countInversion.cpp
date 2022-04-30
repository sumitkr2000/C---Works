#include<iostream>
using namespace  std;

int mergeArray(int *arr, int s, int e) {

    int inv = 0;
    int mid = s + (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying values
    int mainArrayIndex = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i = 0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {

          if(first[index1] < second[index2]) {
              arr[mainArrayIndex++] = first[index1++];
          }
          else{
              arr[mainArrayIndex++] = second[index2++];
              inv += len1 - index1;
          }
    }
    while(index1<len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    return inv;

    delete[] first;
	delete[] second;
}

int mergeSort(int *arr, int s, int e) {

    int inv = 0;
    //base case
    if(s>=e) {
        return inv;
    }

    int mid = s + (e-s)/2;

    //recursive call
    //for left part
    inv += mergeSort(arr, s, mid);

    //for right part
    inv += mergeSort(arr, mid+1, e);

    inv += mergeArray(arr, s, e);

    return inv;
}

int main() {

    int arr[8] = {3, 5, 6, 9, 1, 2, 7, 8};

    int n = 8;

    cout<<"No of inversions: "<<mergeSort(arr, 0, n-1);

    return 0;
}