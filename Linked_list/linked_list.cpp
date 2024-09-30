#include <iostream>
#include "linked_list.h"
using namespace std;
int main()
{
    linked_list list;
    cout << "============================= Linked List =============================\n\n";
    char option;
    do
    {
        int choice;
        cout << "Operations\n";
        cout << "1- Create a list\n";
        cout << "2- Insert\n";
        cout << "3- Count of Nodes\n";
        cout << "4- Count of Occurance of an element\n";
        cout << "5- Delete\n";
        // cout << "6- Replace\n";
        cout << "6- Display\n";

        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            list.fill();
            break;
        }
        case 2:
        {
            int op;
            cout << "1- Insert At Beginning of the list\n";
            cout << "2- Insert At End of the list\n";
            cout << "3- Insert At a Specific position\n";
            cout << "Enter type of insertion: ";
            cin >> op;
            if (op == 1)
            {
                cout << "Enter Value to insert: ";
                int value;
                cin >> value;
                list.insertAtBegin(value);
            }
            else if (op == 2)
            {
                cout << "Enter Value to insert: ";
                int value;
                cin >> value;
                list.insertAtEnd(value);
            }
            else if (op == 3)
            {
            }
            else
            {
                cout << "Invalid type, Plz Enter valid type\n";
            }
            break;
        }
        case 3:
        {
            cout << "Size Of the list is: " << list.count() << endl;
            break;
        }
        case 4:
        {
            int value;
            cout << "Enter Element to count : ";
            cin >> value;
            cout << "Occurance of Element " << value << " is: " << list.occurance(value) << " times\n";
            break;
        }
        case 5:
        {
            cout << "Choose type of Deletion \n";
            cout << "1- Specific Value\n";
            cout << "2- First Element\n";
            cout << "3- Last Element (Pop)\n";
            int choice;
            cin >> choice;
            if (choice == 1)
            {
                int value;
                cout << "Enter element to delete: ";
                cin >> value;
                list.Delete(value);
            }
            else if (choice == 2)
            {
                list.Delete_fisrt();
            }
            else if (choice == 3)
            {
                list.pop();
            }
            else
                cout << "Plz enter valid choice\n";
            break;
        }
        case 6:
        {
            list.Display();
            break;
        }
        }
        cout << "Do You want to continue[Y/N]: ";
        cin >> option;
    } while (toupper(option) == 'Y');

    return 0;
}
