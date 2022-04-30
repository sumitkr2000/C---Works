#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int len = 2*n - 1;

    int min1, min2, mini;

    cout<<"Printing Pattern: "<<endl;

    for(int i = 1; i <= len; i++) {

       for(int j = 1; j <= len; j++) {

           if(i <= len-i) {
               min1 = i-1;
           }
           else{
               min1 = len-i;
           }

           if(j <= len-j) {
               min2 = j-1;
           }
           else{
               min2 = len-j;
           }

           mini = min(min1, min2);

           cout<<n-mini<<" ";
       }
       cout<<endl; 
    }
}