#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int key) {

    //base case
    if(size == 0) {
        return 0;
    }

    if(arr[0] == key) {
        return 1;
    }
    else{
        bool remainingArray = isPresent(arr+1, size-1, key);
        return remainingArray;
    }
}

int main() {

     int arr[5] = {1,2,10,4,5};

     int size = 5;

     int key;
     cout<<"Enter the key you want to search"<<endl;
     cin>>key;

     bool ans = isPresent(arr, size, key);
     
     if(ans) {
         cout<<"Key Present";
     }
     else{
         cout<<"Key Absent";
     }

     return 0;
}