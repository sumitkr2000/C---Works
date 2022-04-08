#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    
    int arr[6] = {1,7,3,6,5,6};

    int sum=0;
    int leftsum=0;

    for(int i=0 ; i<n ; i++){
        sum=sum+arr[i];
    }

    for(int i=0; i<n ; i++) {
        
        sum=sum-arr[i];
        
        if(leftsum==sum) {
            cout<<"The pivot index is "<< i<<endl;
        }
        else{
            leftsum=leftsum + arr[i];
        }
    }  
}