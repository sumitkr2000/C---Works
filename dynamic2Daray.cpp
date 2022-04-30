#include<iostream>
using namespace std;

int main() {

     int row;
     cout<<"Enter row"<<endl;
     cin>>row;

    int col;
    cout<<"Enter column"<<endl;
    cin>>col;

    int** arr = new int*[row];

    cout<<"Enter the elements"<<endl;

    //creating a 2D array
    for(int i = 0; i < row; i++) {
        arr[i] = new int[row];
    }

    //taking input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        cin>>arr[i][j];
        }
    }

    cout<<"Printing 2D array"<<endl;

    //printing output
     for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i = 0; i < row; i++) {
       delete[] arr[i];
    }

    delete[] arr;

    return 0;
}