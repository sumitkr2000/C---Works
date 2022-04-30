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

class germanSepherd: public Dog {

};

int main() {

    germanSepherd g;
    g.speak();

    cout<<"Age of g is "<<g.age;

    return 0;
}