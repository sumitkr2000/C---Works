#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int i=2;i<n;i++) {

        if(n%i==0) {

            cout<<"is not a Prime Number"<<endl;
            break;

        }
        else{
            cout<<"is a Prime Number"<<endl;
            break;
        }
    }
}