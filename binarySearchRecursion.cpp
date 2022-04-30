#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key) {

    //base case

    //element not found
    if(s>e) {
        return false;
    }
    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == key) {
        return true;
    }
    if(key>arr[mid]) {
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main() {

    int arr[6] = {2,4,6,10,14,18};

    int size = 6;

    int key;
    cout<<"Enter the key you want to search for"<<endl;
    cin>>key;

    int s = 0;
    int e = size-1;

     bool ans = binarySearch(arr, s, e, key);
     
     if(ans) {
         cout<<"Key Present";
     }
     else{
         cout<<"Key Absent";
     }

     return 0;
}