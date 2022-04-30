#include<iostream>
using namespace std;

class A {

    public:
     void sayHello() {
        cout<<"Hello Sumit"<<endl;
    }

    int sayHello(string name,int n) {
        cout<<"Hello Sumit"<<endl;
        return 1;
    }

    void sayHello(string name) {
        cout<<"Hello"<<name<<endl;
    }
};

int main() {

    A obj1;
    obj1.sayHello();

    return 0;
}