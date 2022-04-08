#include<iostream>
using namespace std;


int main() {

      int key;
      cout<<"Enter the key you want to search for"<<endl;
      cin>>key;
      
      int arr[10] = {5,7,-2,10,2,-2,0,5,22,1};

      for (int i= 0;i<10;i++) {

          if(arr[i] == key) {
              cout<<"present"<<endl;;
            }
            else{
                cout<<"absent"<<endl;
            }
              
        }
        
    }
    
