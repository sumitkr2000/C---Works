#include<iostream>
using namespace std;

int isPresent(int arr[][4], int target, int i, int j) {

    for(int i = 0; i<3; i++) {
         for(int j = 0; j<4; j++) {
             if(arr[i][j] == target) {
                 return 1;
             }
        }
    }
    return 0;
}
void PrintRowSum(int arr[][4], int i, int j) {

    for(int i = 0; i<3; i++) {
        int sum = 0;
         for(int j = 0; j<4; j++) {
             sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}
cout<<endl;

//for columnwise sum
void PrintColSum(int arr[][4], int i, int j) {

    for(int i = 0; i<4; i++) {
        int sum = 0;
         for(int j = 0; j<3; j++) {
             sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main() {

     int arr[3][4];
    //for rowwise printing
     for(int i = 0; i<3; i++) {
         for(int j = 0; j<4; j++) {
             cin>>arr[i][j];
         }
     }

     //for columnwise printing
    /*for(int i = 0; i<4; i++) {
         for(int j = 0; j<3; j++) {
             cin>>arr[j][i];
        }
        cout<<endl;
    }*/

     for(int i = 0; i<3; i++) {
         for(int j = 0; j<4; j++) {
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element you want to search"<<endl;
    int target;
    cin>>target;

   if(isPresent(arr, target, 3, 4)) {

       cout<<"Element is Present"<<endl;
   }
   else{
       cout<<"Element is absent"<<endl;
   }

   PrintRowSum(arr, 3, 4);
   PrintColSum(arr, 3, 4);
}