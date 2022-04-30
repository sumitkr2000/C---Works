#include<iostream>
using namespace std;

class Animal {

    public:
     void Speak() {
        cout<<"Speaking"<<endl;
    }

};

class Dog: public Animal {

    public:
    void Speak() {
        cout<<"Barking"<<endl;
    }
};

int main() {

    Dog d;
    d.Speak();
    
    return 0;
}