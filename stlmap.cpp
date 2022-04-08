#include<iostream>
#include<map>
using namespace std;

int main() {

    map<int,string> m;

    m[19] = "Sumit";
    m[11] = "Kumar";
    m[18] = "Rai";

    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(18);\
     for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<m.count(-11)<<endl;

    auto it = m.find(11);

    for(auto i =it; i!=m.end(); i++) {
        cout<<(*i).first<<endl;
    }
}