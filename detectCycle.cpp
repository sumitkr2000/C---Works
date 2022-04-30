#include <iostream>
#include <map>
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

// detecting cycle in LL using map
bool detectCycle(Node *head)
{

    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {

        if (visited[temp] == true)
        {
            cout << "Cycle present on node: " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// detecting cycle in a LL using floyd's algorithm
Node *floydDetectCycle(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}

// finding the starting node of the cycle
Node *startingNode(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *temp = floydDetectCycle(head);
    Node *slow = head;

    while (slow != temp)
    {
        slow = slow->next;
        temp = temp->next;
    }

    return slow;
}

// removing the cycle
void removeCycle(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    Node *start = startingNode(head);
    Node *temp = start;

    while (temp->next != start)
    {
        temp = temp->next;
    }

    temp->next = NULL;
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

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    printNode(head);

    // INSERTION AT TAIL
    Node *tail = node1;
    printNode(head);

    insertAtTail(tail, 12);
    printNode(head);

    insertAtTail(tail, 15);
    printNode(head);

    insertAtTail(tail, 17);
    printNode(head);

    tail->next = head->next;
    // printNode(head);

    if (floydDetectCycle(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    Node *ans = startingNode(head);

    cout << "Starting node is: " << ans->data << endl;

    removeCycle(head);
    printNode(head);

    if (floydDetectCycle(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }

    return 0;
}