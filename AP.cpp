#include<iostream>
using namespace std;

int AP(int n) {

    int ans = (3 * n) + 7;

    return ans;
}

int main() {

    int n;
    cin>>n;

    cout<<n<<"th number is "<<AP(n)<<endl;

    return 0;
}