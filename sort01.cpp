#include<iostream>
using namespace std;

int main() {

     int arr[8] = {0,1,0,1,1,1,0,0};

      int i = 0, j=7;
       
       while(i<j) {
           
           while(arr[i] == 0 && i<j) {
               i++;
           }
           while(arr[j] == 1 && i<j) {
               j--;
           }
           if(arr[i] == 1 && arr[j] == 0 && i<j) {
               swap(arr[i], arr[j]);
               i++;
               j--;
           }
       }
       cout<<arr[i]<<" "<<arr[j]<<endl;
       
    }