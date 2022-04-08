#include<iostream>
using namespace std;

int main() {

    int a = 5;

    cout<<(a++)<<endl;
    //5,6
    cout<<(++a)<<endl;
    //7,7
    cout<<(a--)<<endl;
    //7,6
    cout<<(--a)<<endl;   
    //5,5 
}