#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL)
    {
    }
};

class linked_list
{
private:
    Node *head;

public:
    linked_list() : head(NULL)
    {
    }
    ~linked_list() // Deallocate list
    {
        Node *temp;
        while (head != NULL) // passing along the list to delete each node
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
    void fill()
    {
        if (empty())
        {
            int size, value;
            cout << "How many Nodes to fill: ";
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter value to node #" << i + 1 << ": ";
                cin >> value;
                insertAtEnd(value);
            }
        }
    }
    bool found(int value)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return true;
            }
            temp = temp->next;
        }
        return 0;
    }
    int count()
    {
        if (empty())
        {
            return 0;
        }
        int length = 1;
        Node *temp = head;
        while (temp->next != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }
    int occurance(int value)
    {
        if (empty())
        {
            return 0;
        }
        int length = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == value)
                length++;
            temp = temp->next;
        }
        return length;
    }
    void insertAtEnd(int value)
    {
        Node *node = new Node(value);
        if (empty())
        {
            head = node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    void insertAtBegin(int value)
    {
        Node *node = new Node(value);

        node->next = head; // [new]-[n1]-[n2]
        head = node;       // head ---> [new]
    }
    void Delete(int value)
    {
        if (empty())
        {
            cout << "List is already empty\n";
            return;
        }
        // check if element is at first
        if (head->data == value)
        {
            Node *del = head;
            head = head->next;
            delete del;
            cout << "Element deleted Successfully\n";
            return;
        }
        // searching for the element
        Node *temp = head;
        while (temp->next->data != value && temp->next != NULL)
        {
            temp = temp->next;
        }
        // if element not found
        if (temp->next == NULL)
        {
            cout << "Element Not Found\n";
            return
        }
        // Delete this element
        Node *del = temp->next;
        temp->next = del->next;
        delete del;
        cout << "Element deleted Successfully\n";
        return;
    }
    void Delete_fisrt()
    {
        if (empty())
        {
            cout << "List Is Already Empty\n";
            return;
        }
        if (head->next == NULL)
        {
            head = NULL;
            cout << "Element Deleted Successfully\n";
            cout << "List become Empty Now\n";
            return;
        }
        Node *del = head;
        head = head->next;
        delete del;
        cout << "Element Deleted Successfully\n";
    }
    void pop()
    {
        if (empty())
        {
            cout << "List is Already Empty\n";
            return;
        }
        if (head->next == NULL)
        {
            head = NULL;
            cout << "Element Deleted Successfully\n";
            cout << "List become Empty Now\n";
            return;
        }
        Node *del = head;
        Node *temp = NULL;
        while (del->next != NULL)
        {
            temp = del;
            del = del->next;
        }
        temp->next = NULL;
        delete del;
        cout << "Element Deleted Successfully\n";
    }
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << '\t';
            temp = temp->next;
        }
        cout << endl;
    }
};