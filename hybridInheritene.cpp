#include<iostream>
using namespace std;

class A {

    public:
     void fun1() {
        cout<<"inside fun1"<<endl;
    }

};

class B: public A {

   public:
    void fun2() {
        cout<<"inside fun2"<<endl;
    }
};

class D {

    public:
    void fun4() {
        cout<<"inside fun4"<<endl;
    }
};

class C: public A, public D {

    public:
    void fun3() {
        cout<<"inside fun3"<<endl;
    }
};

int main() {

    A obj1;
    obj1.fun1();
    
    cout<<endl;

    B obj2;
    obj2.fun1();
    obj2.fun2();
    cout<<endl;

    C obj3;
    obj3.fun1();
    obj3.fun3();
    obj3.fun4();
    cout<<endl;

    D obj4;
    obj4.fun4();
    cout<<endl;

    
    return 0;
}