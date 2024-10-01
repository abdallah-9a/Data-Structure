#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

class Stack
// Operations ======>     1- Push   2- POP    3- Peak/Top   4- Count     5- Display
{
public:
    Node *head;
    Stack() : head(NULL) {}
    ~Stack()
    {
        Node *temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool empty()
    {
        return (head == NULL);
    }
    void push(int value)
    {
        Node *node = new Node(value);
        node->next = head;
        head = node;
        cout << "Element Added Successfully\n";
    }
    void pop()
    {
        if (empty())
        {
            cout << "Can't delete, Stack is empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Element Removed Successfully\n";
    }
    int peak()
    {
        // if (empty())     ===> it can't use to be able to use -1 as an element in stack
        // {
        //     // cout << "Stack is Empty\n";
        //     return -1;
        // }
        return head->data;
    }
    int count()
    {
        Node *temp = head;
        int length = 0;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};