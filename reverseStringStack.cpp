#include<iostream>
#include<stack>
using namespace std;

int main() {

    string name = "sumit";

    stack<char> s;

    for(int i = 0; i < name.length(); i++) {
        s.push(name[i]);
    }

    string ans = "";

    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }
    
    cout<<"Reverse of "<<name<<" is "<<ans<<endl;

    return 0;
}