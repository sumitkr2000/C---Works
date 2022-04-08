#include<iostream>
using namespace std;

void print0(int arr[], int n) {

    for(int i=0; i<n; i++) {

         if(arr[i] == 0) {
           cout<<arr[i]<<" ";
        }
     }
}
void print1(int arr[], int n) {

    for(int i=0; i<n; i++) {
        
         if(arr[i] == 1) {
           cout<<arr[i]<<" "; 
        }
    }
}
void print2(int arr[], int n) {

    for(int i=0; i<n; i++) {

         if(arr[i] == 2) {
           cout<<arr[i]<<" ";
        }
    }
}

int main() {

    int n;
    cin>>n;
     
    int arr[9] = {0,1,1,1,0,1,1,0,2};

    print0(arr,9);
    print1(arr,9);
    print2(arr,9);

    return 0;
}