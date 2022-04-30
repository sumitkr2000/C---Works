#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int d) {

        this -> data = d;
        this -> next = NULL;
    }
    
    //destructor
    ~Node(){
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int d) {

    //empty list
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = tail;
    }

    //non-empty list
    //assuming that the element is present in the list
    else{

        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
        
    }
}

void deleteNode(Node* &tail, int value) {
    
    //empty list
    if(tail == NULL) {
        cout<<"Nothing is in the list to delete"<<endl;
    }

    //non-empty list
    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr -> data != value) {
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;

    //1 node
    if(prev == curr) {
        tail = NULL;
    }
    
    //>=2 node
    else if(tail == curr) {

        tail = prev;
    }

    curr -> next = NULL;
    delete curr;
}

void print(Node* &tail) {

    if(tail == NULL){
        cout<<"List is Empty"<<endl;
    }

    Node* temp = tail;

    do{
        cout<<temp -> data<<" ";
        temp = temp -> next;
    } while(temp != tail);
    cout<<endl;
}

int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 8);
    print(tail);

    insertNode(tail, 8, 10);
    print(tail);

    insertNode(tail, 10, 6);
    print(tail);

    insertNode(tail, 8, 20);
    print(tail);

    deleteNode(tail, 20);
    print(tail);


    return 0;
}