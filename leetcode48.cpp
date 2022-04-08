#include<iostream>
#include<vector>
using namespace std;

int main() {

    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Rotating Matrix by 90 degree:-"<<endl;
     
        for(int j = 0; j<3; j++) {
            
            for(int  i = 2; i>=0; i--) {
                
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}