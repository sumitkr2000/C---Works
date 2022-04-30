#include<iostream>
using namespace std;

int fibonacci(int n) {
    
    int a = 0;
    int b = 1;
    int fib = 0;

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    for(int i = 2; i<=n; i++) {

        fib = a + b;
        
        a = b;
        b = fib;

    }
    return fib;
}

int main() {
      
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int ans = fibonacci(n);
    cout<<n<<"th fibonacci number is "<<ans;
   
}