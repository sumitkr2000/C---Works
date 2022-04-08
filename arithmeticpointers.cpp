#include<iostream>
using namespace std;

int main() {

     int n = 5;

     int *p1 = &n;

     cout<<*p1<<endl;

     int *p2 = 0;
     p2 = &n;

     cout<<*p2<<endl;

     int num = 5;
     int a = num;
     cout<<"before "<<num<<endl;
     a++;
     cout<<"After "<<num<<endl;

     int *p = &num;
     cout<<"before "<<num<<endl;
     (*p)++;
     cout<<"After "<<num<<endl;

     int *q = p1;

     cout<<p1<<" "<<q<<endl;
     cout<<*p1<<" "<<*q<<endl;

     int i = 3;
     int *t = &i;

     cout<<*t<<endl;

     (*t)++;

     cout<<*t<<endl;

     cout<<t<<endl;

     t =t+1;

     cout<<t<<endl;

}