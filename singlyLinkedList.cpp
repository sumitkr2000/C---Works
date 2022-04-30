#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *tail, int p, int d)
{

    // inserting at head in this function
    if (p == 1)
    {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deletePosition(Node *&head, int p)
{

    // delete head
    if (p == 1)
    {

        Node *temp = head;

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

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

void printNode(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isCircularList(Node *head)
{

    if (head == NULL)
    {
        return true;
    }

    Node *curr = head->next;

    while (curr != NULL && curr != head)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    Node *node1 = new Node(10);
    // cout<<node1-> data<<endl;
    // cout<<node1-> next<<endl;

    // INSERTION AT HEAD
    Node *head = node1;
    printNode(head);
    /*
        insertAtHead(head,12);
        printNode(head);

        insertAtHead(head,15);
        printNode(head);

    */
    // INSERTION AT TAIL
    Node *tail = node1;
    printNode(head);

    insertAtTail(tail, 12);
    printNode(head);

    insertAtTail(tail, 15);
    printNode(head);

    // INSERTION AT POSITION
    insertAtPosition(head, tail, 4, 17);
    printNode(head);

    // deletePosition(head, 3);
    // printNode(head);

    bool ans = isCircularList(head);

    if (ans)
    {
        cout << "List is Circular" << endl;
    }
    else
    {
        cout << "List is not circular" << endl;
    }

    return 0;
}