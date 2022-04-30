#include<iostream>
using namespace std;

class B {

     public:
     int a;
     int b;
      
    public:
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {

        int value1 = this->a;
        int value2 = obj.a;

        cout<<"Value is "<<value2 - value1<<endl;
    }

    void operator() () {

        cout<<"I am Bracket "<<this->a;
    }
};

int main() {

    B obj1, obj2;
    obj1.a = 5;
    obj2.a = 10;

    obj1 + obj2;

    obj1();

    return 0;
}