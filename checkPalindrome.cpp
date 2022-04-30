#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j) {

    //base case
    if(i>j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }
    else{
        return isPalindrome(str, i+1, j-1);
    }
}

int main() {

    string str = "sumit";

    bool check = isPalindrome(str, 0, str.length()-1);

    if(check) {
        cout<<str<<" is a Palindrome";
    }
    else{
        cout<<str<<" is not a Palindrome";
    }
}