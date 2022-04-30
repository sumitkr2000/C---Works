#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {

        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{

    int len = 0;
    Node *&temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{

    if (head == NULL)
    {

        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else
    {

        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{

    if (tail == NULL)
    {

        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else
    {

        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int p, int d)
{

    // inserting at head in this function
    if (p == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    // inserting at postition in this fucntion
    Node *temp = head;
    int cnt = 1;

    while (cnt < p - 1)
    {

        temp = temp->next;
        cnt++;
    }

    // inserting at end of this function
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deletePosition(Node *&head, int p)
{

    // delete head
    if (p == 1)
    {

        Node *temp = head;

        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // delete any position and tail
    else
    {

        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < p)
        {

            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    /*
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 14);
    print(head);

    insertAtHead(head, 16);
    print(head);
    */
    Node *tail = node1;
    print(head);

    insertAtTail(tail, head, 12);
    print(head);

    insertAtTail(tail, head, 14);
    print(head);

    insertAtTail(tail, head, 16);
    print(head);

    insertAtPosition(head, tail, 3, 13);
    print(head);

    insertAtPosition(head, tail, 1, 8);
    print(head);

    insertAtPosition(head, tail, 7, 18);
    print(head);

    deletePosition(head, 4);
    print(head);

    cout << "Length of LinkedList is " << getLength(head) << endl;

    return 0;
}