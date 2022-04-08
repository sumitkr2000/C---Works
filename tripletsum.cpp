#include<iostream>
using namespace std;

int main() {

     int arr[10] = {1,2,3,4,5,6,7,8,9,10};

     int ans = 15;

     for(int i = 0;i<10;i++) {

         for(int j = i+1;j<10;j++) {

             for(int k = j+1;k<10;k++) {

                 if(arr[i] + arr[j] + arr[k] == ans) {

                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                 }
             }
         }
     }

}