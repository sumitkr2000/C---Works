#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* top = NULL;

void push(Node* tp, int element) {

    Node* temp = new Node();
    temp -> data = element;
    temp -> next = tp;
    tp = temp;
}

void pop() {

    Node* temp = top;
    top = top -> next;
    temp -> next = NULL;
    free(temp);
}

bool empty() {

    if(top == NULL) {
        return true;
    }
    else{
        return false;
    }
}

int peek() {

     if(top != NULL) {
        return top -> data;
     }
     return -1;
}

int main() {

    push(top,76);
    cout<<peek()<<endl;
}