#include<iostream>
using namespace std;

int main() {

    int num = 5;

    cout<<num<<endl;

    cout<<"Address of num is "<< &num<<endl;

    int *ptr = &num;

    cout<<"Value is "<<*ptr<<endl;

    cout<<"Adress is "<<ptr<<endl;

    double d = 4.5;

    double *p2 = &d;

    cout<<"Value is "<<*p2<<endl;

    cout<<"Adress is "<<p2<<endl;

    cout<<"Size of int is "<<sizeof(int)<<endl;

    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;

    cout<<"Size of pointer is "<<sizeof(p2)<<endl;
}