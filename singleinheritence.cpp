#include<iostream>
using namespace std;

class Animal {

    public:
    int weight;
    int age;

};

class Dog: public Animal{
    
    public:
    void speak() {
        cout<<"Speaking"<<endl;
    }
};

int main() {

    Dog d;
    d.speak();

    cout<<"Age of d is "<<d.age;

    return 0;
}