#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;
    vector<int> a(5,1);

    for(int i:a) {
       cout<<i;
       cout<<endl;
    }

    cout<<"Capacity of v "<<v.capacity()<<endl;

    cout<<"Size of v "<<v.size()<<endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i:v) {
        cout<<i<<endl;
    }

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    cout<<v.at(2)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.pop_back();

    cout<<v.size()<<endl;

    v.clear();
    cout<<v.size()<<endl;

}