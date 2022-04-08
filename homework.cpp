#include<iostream>
using namespace std;

int main() {

    char ch;
    cin>> ch;
    if ('a'<=ch && ch<='z') {
    cout<<"This is lowercase"<<endl;
    }
    else if('A'<=ch && ch<='Z') {
    cout<<"This is uppercase"<<endl;
    }
    else if('0'<=ch && ch<='9') {
    cout<<"This is numeric"<<endl;
    }

}