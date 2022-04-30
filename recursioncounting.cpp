#include<iostream>
using namespace std;

void counting(int n) {
    
    //base case
    if(n == 0) {
        return;
    }

    //recursive relation
    cout<<n<<" ";
    counting(n-1);

}

int main() {

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Printing counting"<<endl;
    counting(n);

    return 0;
}