#include<iostream>
using namespace std;

int main() {

     int n;
     cout<<"Enter the size of 1st array"<<endl;
     cin>>n;
    
    int arr1[3] = {4,5,1};

    int num1 = 0;

    for(int i = 0; i<n; i++) {

        num1 = arr1[i] + num1 * 10;
    }
    cout<<"First digit is "<<num1<<endl;

    int m;
    cout<<"Enter the size of 2nd array"<<endl;
    cin>>m;

    int arr2[3] = {3,4,5};

    int num2 = 0;

    for(int j = 0; j<m; j++) {

        num2 = arr2[j] + num2 * 10;
    }
    cout<<"Second digit is "<<num2<<endl;

    cout<<"Sum of 1st array and 2nd araay is "<<num1 + num2<<endl;

}