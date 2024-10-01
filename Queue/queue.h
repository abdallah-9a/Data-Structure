#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

// FiFo
class Queue // [head]-[n]-[n]-[n]-[n]-[tail]
// Operations ===>    1- EnQueue   2- Dequeue  3- Front   4- count   5- Display
{
public:
    Node *head;
    Node *tail;
    Queue() : head(nullptr), tail(nullptr) {}
    ~Queue()

    {
        // while (head != NULL)
        // {
        //     Dequeue();
        // }
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
    void Enqueue(int value)
    {
        Node *node = new Node(value);
        if (empty())
        {
            head = node;
            tail = node;
            cout << "Element Added Successfully\n";
            return;
        }
        tail->next = node;
        tail = node;
        cout << "Element Added Successfully\n";
    }
    void Dequeue() // in other words ==> Pop but first element
    {
        if (empty())
        {
            cout << "Can't Delete, Queue Is Empty\n";
            return;
        }
        Node *del = head;
        head = head->next;
        delete del;
        cout << "Dequeued Successfully\n";
        if (head == nullptr)
        {
            tail = NULL;
            cout << "Queue become Empty Now\n";
        }
    }
    int Front()
    {
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
    void Display()
    {
        if (empty())
        {
            cout << "No Elements, Queue is empty\n";
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }
        cout << endl;
    }
};