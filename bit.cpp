#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {

         int b = n & 1;
         ans = (b * pow(10, i) ) + ans;
         n = n >> 1;
         i = i + 1;
    }
    cout << ans << endl;
}