#include<iostream>
using namespace std;

int main() {
    
    /*int arr[10] = {2,3,4,5,6,7,8,9};

    cout<<"Address of arr is "<< arr <<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of arr is "<< &arr[0] <<endl;

    cout<<*arr<<endl;

    cout<<*arr+1<<endl;

    cout<<*(arr+1)<<endl;

    int i = 3;

    cout<<i[arr]<<endl;
    

   int temp[10] = {10,11,12,13,14,15};

   int *p = &temp[0];

   cout<< sizeof(temp)<<endl;
   cout<< sizeof(&temp)<<endl;
   cout<< sizeof(&p)<<endl;
   cout<< sizeof(p)<<endl;

   cout<<p<<endl;
   cout<<*p<<endl;
   */

  int arr[10];

  cout<<arr<<endl;
  
  //arr = arr+1;

  int *p = &arr[0];
  cout<<p<<endl;
  p=p+1;
  cout<<p<<endl;
}