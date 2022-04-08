#include<iostream>
using namespace std;

void update(int** q) {

    //q = q+1;

    //*q = *q+1;

    **q = **q+1;
}

int main() {

     int i = 5;
     int *p = &i;
     int **q = &p;

    /* cout<<&i<<endl;
     cout<<p<<endl;
     cout<<&p<<endl;
     cout<<q<<endl;
     cout<<*q<<endl;

     cout<<i<<endl;
     cout<<*p<<endl;
     cout<<**q<<endl;
     */

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<q<<endl;
    update(q);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<q<<endl;

}