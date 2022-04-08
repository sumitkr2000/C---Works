#include<iostream>
using namespace std;

int setbit1(int a) {

    int ans = 0;
    while(a!=0) {

            ans = ans + (a&1);
            a=a>>1;
        }
    return ans;
}

int setbit2(int b) {

    int ANS = 0;
    while(b!=0) {

            ANS = ANS + (b&1);
            b=b>>1;
    }
    return ANS;
}

int main() {

    int a,b;
    cin>>a>>b;

    cout<<setbit1(a) + setbit2(b)<<endl;

    return 0;
}