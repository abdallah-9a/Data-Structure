#include "queue.h"
int main()
{
    Queue queue;
    cout << "\n =============== Queue ============== \n";
    char option;
    int choice;
    do
    {
        cout << "Operations\n";
        cout << "1- Enqueue\n";
        cout << "2- Dequeue\n";
        cout << "3- Front\n";
        cout << "4- Count\n";
        cout << "5- display\n";
        cout << "Enter yourchoice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            queue.Enqueue(value);
            break;
        }
        case 2:
        {
            queue.Dequeue();
            break;
        }
        case 3:
        {
            if (queue.empty())
                cout << "Queue is empty\n";
            else
                cout << "Front element is " << queue.Front() << endl;
            break;
        }
        case 4:
        {
            cout << "Queue contains " << queue.count() << " Elements\n";
            break;
        }
        case 5:
        {
            queue.Display();
            break;
        }
        }

        cout << "Do you want to continue[Y/N]: ";
        cin >> option;
    } while (toupper(option) == 'Y');
}