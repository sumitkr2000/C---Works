#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;

    l.push_front(1);
    l.push_back(2);

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;;
    
    l.erase(l.begin());
    cout<<l.size()<<endl;

    list<int> n(5,100);

    for(int i:n) {

        cout<<i<<" ";

    }
}