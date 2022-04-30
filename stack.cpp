#include<iostream>
using namespace std;

class stack{

    public:
    int top;
    int* arr;
    int size;

    stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0) {
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
        return -1;
    }

    bool empty() {
        if(top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};

int main() {
    


    stack st(5);

    st.push(10);
    st.push(6);
    st.push(12);
    st.push(10);
    st.push(6);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    if(st.empty()) {
        cout<<"Stack khali hai bhai"<<endl;
    }
    else{
        cout<<"Stack khali nahi hai bhai"<<endl;
    }





    /*
    //creating stack
    stack<int> s;
    
    //pushing elements in stack
    s.push(2);
    s.push(3);
    
    //popping elemnts from stack
    s.pop();

    cout<<"Top element is: "<<s.top()<<endl;

    if(s.empty()) {
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    cout<<"Size of stack is: "<<s.size()<<endl;
    */

    return 0;
}