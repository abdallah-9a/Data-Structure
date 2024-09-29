#include <iostream>
#include "array.h"
using namespace std;
int main()
{
    int choice;
    int size;
    char option;
    cout << "============================== Array ==============================\n\n";
    cout << "Enter Array Size: ";
    cin >> size;
    Array arr(size);
    do
    {
        system("cls"); // if not use consol app remove it
        cout << "Operations: \n";
        cout << "1.Fill Array\n";
        cout << "2.Append\n";
        cout << "3.Insert\n";
        cout << "4.Search\n";
        cout << "5.Delete\n";
        cout << "6.Length && Size\n";
        cout << "7.Enlarge\n";
        cout << "8.Display\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int n, op;
            cout << "1.Fill From the Beginning\n";
            cout << "2.Continue from the last element\n";
            cin >> op;
            cout << "Enter Number of Elements to fill: ";
            cin >> n;
            // Add constraint if user input op either 1 nor 2
            arr.fill(n, op);
            break;
        }
        case 2:
        {
            int value;
            cout << "Enter an Element: ";
            cin >> value;
            arr.Append(value);
            break;
        }
        case 3:
        {
            int pos, num;
            cout << "Enter The Position of Element: ";
            cin >> pos;
            cout << "Enter The Element: ";
            cin >> num;
            arr.Insert(pos, num);
            break;
        }
        case 4:
        {
            int num;
            cout << "Enter Element: ";
            cin >> num;
            arr.search(num);
            break;
        }
        case 5:
        {
            int num;
            cout << "Enter Element: ";
            cin >> num;
            arr.Delete(num);
            break;
        }
        case 6:
        {
            cout << "Length Of Array: " << arr.get_length() << "\t" << "Size Of Array: " << arr.get_size() << endl;
            break;
        }
        case 7:
        {
            int newsize;
            cout << "Enter New Size: ";
            cin >> newsize;
            arr.Enlarge(newsize);
            break;
        }
        case 8:
        {
            arr.Display();
            break;
        }
        }
        cout << "Do you want to continue [Y/N]: ";
        cin >> option;
    } while (toupper(option) == 'Y');
}
