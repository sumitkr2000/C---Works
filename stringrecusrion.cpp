#include<iostream>
#include<string>
using namespace  std;

void reverseString(string s, int i, int size) {
    
    //base case
    if(i > s.length()) {
        return;
    }
    //recursive relation
    cout<<s[size-i-1];
    i++;

    reverseString(s, i, size);
}

int main() {

    string s = "sumit";
    
    int size = 5;

    cout<<"Reverse of "<<s<<" is ";

    reverseString(s, 0, size);
}