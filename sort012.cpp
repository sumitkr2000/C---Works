#include<iostream>
using namespace std;

int main() {

     int n;
     cin>>n;
     
     int arr[9] = {0,2,2,1,0,1,1,0,2};

     int i = 0, j = n-1; 

     while(i<=j) {

         if(arr[i] = 0) {
             i++;
         }
         else if(arr[j] == 2) {
             j--;
         }
         else if(arr[i] == 1 | arr[j] == 1) {
             swap
         }
         else{
             swap(arr[i], arr[j]);
             i++;
             j--;
         }
     }
     cout<<arr[9]<<endl;

}