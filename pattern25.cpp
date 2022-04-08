#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        
        int j = 1;
    while(j<=n-i+1) {

            cout<<"*";
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    int k = 1;
    while(k<=n) {

        int l = 1;
        while(l<=k) {

            cout<<"*";
            l=l+1;
        }
        cout<<endl;
        k=k+1;
    }
}