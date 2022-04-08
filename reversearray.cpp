#include<iostream>
using namespace std;

int main(){

     int n;
     cin>>n;
     cout<<"Printing Reverse of array"<<endl;

     int arr[10] = {4,66,8,34,2,0,-44,18,24,1};

     for(int i=(n-1);i>=0;i--) {

        cout<<arr[i]<<" ";
     }

}