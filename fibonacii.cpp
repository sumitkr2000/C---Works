#include<iostream>
using namespace std;

int fibonacii(int n) {
    
    int a=0;
    int b = 1;
    
    cout<<a<<" "<<b<<endl;

    for(int i = 0;i<=n;i++) {

        int fib = a+b;
        cout<<fib<<" "<<endl;

        a=b;
        b=fib;

    }

    return fib;

}