#include "stack.h"
int main()
{
    Stack stack;
    cout << "\n =============== Stack =============== \n";
    char option;
    int choice;
    do
    {
        cout << "Operations\n";
        cout << "1- Push\n";
        cout << "2- Pop\n";
        cout << "3- Peak\n";
        cout << "4- Count\n";
        cout << "5- Display\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            stack.push(value);
            break;
        }
        case 2:
        {
            stack.pop();
            break;
        }
        case 3:
        {

            if (stack.empty()) //
            {
                cout << "Stack is Empty\n";
            }
            else
            {
                cout << "Top Element is " << stack.peak() << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Stack Contains " << stack.count() << " elements\n";
            break;
        }
        case 5:
        {
            stack.display();
            break;
        }
        }

        cout << "Do you want to continue[Y/N]: ";
        cin >> option;
    } while (toupper(option) == 'Y');

    return 0;
}