#include<iostream>
using namespace std;

void step(int src, int destination) {
    
    cout<<"source "<<src<<" Destination "<<destination<<endl;
    //base case
    if(src == destination) {
        cout<<"Stop"<<endl;
        return;
    }

    //recursive relation
    src++;
    
    step(src, destination);

}

int main() {

    int src = 1;
    int destination = 10;

    step(src, destination);
    
    return 0;
}