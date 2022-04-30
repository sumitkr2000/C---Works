#include<iostream>
using namespace  std;

int getSum(int arr[], int size) {

    int sum = 0;

    //base case
    if(size == 0) {
        return 0;
    }

    sum = arr[0] + getSum(arr+1, size-1);

    return sum;
}

int main() {

    int arr[5] = {4,9,8,2,1};
    int size = 5;

    int ans = getSum(arr, 5);

    cout<<"Sum is "<<ans;
}