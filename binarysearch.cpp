#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {

    int start = 0;
    int end = n-1;
    int mid = start+ (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int evenarr[6] = {1,3,8,13,16,19};
    int oddarr[5] = {4,6,9,11,17};

    int evenindex = binarysearch(evenarr, 6, 13);
    cout<<"The index of 13 is "<<evenindex<<endl;

    int oddindex = binarysearch(oddarr, 5, 11);
    cout<<"The index of 11 is "<<oddindex<<endl; 

    return 0;

}