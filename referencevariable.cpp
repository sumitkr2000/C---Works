#include<iostream>
using namespace std;

int& function(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

void update(int &n) {
    n++;
}

int main() {

     /*
     int i = 5;
     
     //creating reference variable

     int &j = i;

     cout<<i<<endl;
     i++;
     cout<<i<<endl;
     j++;
     cout<<j<<endl;
     cout<<i<<endl;
     */

    int n = 5;

    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;

    function(n);
}