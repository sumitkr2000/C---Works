#include<iostream>
using namespace std;

class Animal {

    public:
    int weight;
    int age;

    public:
     void bark() {
        cout<<"Barking"<<endl;
    }

};

class Human {

    public:
    string colour;

    public:
    void speak() {
        cout<<"Speaking"<<endl;
    }
};

class Hybrid: public Animal, public Human{


};

int main() {

    Hybrid hb;

    hb.bark();
    hb.speak();
    
    return 0;
}