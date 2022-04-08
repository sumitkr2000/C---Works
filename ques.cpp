#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int p = 2*n-1;

    int i = 1;

    while(i<=p) {

        cout<<n<<" ";
        int j = 2;
        while(j<=p){

            cout<<n-1<<" ";
            j=j+1; 
        }
        cout<<endl;
        i=i+1;
    }
}