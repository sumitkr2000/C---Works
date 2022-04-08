#include<iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;
    
    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
     int count = 0;
     
     for(int i = 0; name[i] != 0; i++) {
        count++;
    }
    return count;
}

int main() {

        char name[20];

        cout<<"Enter your name"<<endl;
        cin>>name;

        //name[2] = '\0';

        cout<<"Your name is "<<name<<endl;;
        int l = getLength(name);
        cout<<"Length of name is "<<l<<endl;
        reverse(name, l);
        cout<<"Reverse of name is "<<name<<endl;

}