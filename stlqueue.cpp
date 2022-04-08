#include<iostream>
#include<queue>
using namespace std;

int main() {

     queue<string> q;

     q.push("Sumit");
     q.push("Kumar");
     q.push("Rai");
     
     cout<<q.size()<<endl;
     
     cout<<q.front()<<endl;
     q.pop();
     cout<<q.front()<<endl;

     cout<<q.size();

}