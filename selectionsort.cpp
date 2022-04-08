#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int arr[5] = {64, 25, 12, 22, 11};

    for(int i = 0; i<n-1; i++) {

          for(int j = i+1; j<n; j++) {

              if(arr[j] < arr[i]) {
                  swap(arr[i], arr[j]);
              }
          }

    }
}