#include <iostream>
using namespace std;

class Array
{
private:
    int size;   //
    int length; // actually number of elements
    int *items;

public:
    Array(int s)
    {
        size = s;
        length = 0;
        items = new int[size];
    }
    ~Array()
    {
        delete[] items;
    }
    int get_size()
    {
        return size;
    }
    int get_length()
    {
        return length;
    }
    int get_index(int num)
    {
        for (int i = 0; i < length; i++)
        {
            if (items[i] == num)
                return i;
        }
        return -1;
    }
    bool IsFound(int num)
    {
        return get_index(num) != -1;
    }
    void fill(int n, int op)
    {
        if ((n > size && op == 1) || (n + length > size && op == 2))
        {
            cout << "OUT Of Array Range\n";
            return;
        }
        else
        {

            if (op == 1)
            {
                length = 0;
                for (int i = 0; i < n; i++)
                {
                    cout << "Enter element no " << i + 1 << ": ";
                    cin >> items[i];
                    length++;
                }
            }
            else if (op == 2)
            {
                int range = length;
                for (int i = range; i < range + n; i++)
                {
                    cout << "Enter Element No " << i << '\t';
                    cin >> items[i];
                    length++;
                }
            }
        }
    }
    void Display()
    {
        cout << "\n========== Array Elements ==========\n";
        for (int i = 0; i < length; i++)
        {
            cout << items[i] << '\t';
        }
        cout << '\n';
    }
    void Append(int num)
    {
        if (size > length)
        {
            items[length] = num;
            length++;
            cout << "Element Appended Successfully...\n";
        }
        else
        {
            Enlarge(size + 1);
            Append(num);
        }
    }
    void Insert(int pos, int num)
    {
        if (size > length)
        {
            for (int i = length; i >= pos - 1; --i)
            {
                items[i] = items[i - 1];
            }
            items[pos - 1] = num;
            cout << "Element Inserted Successfully... \n";
        }
        else
        {
            cout << "Array IS Full...\n";
        }
    }
    void Enlarge(int newsize)
    {
        int *newarr = new int[newsize];
        for (int i = 0; i < size; i++)
        {
            newarr[i] = items[i];
        }
        delete[] items;
        items = newarr;
        size = newsize;
        cout << "Size of the Array Become " << get_size() << endl;
    }
    void search(int num)
    {
        for (int i = 0; i < length; i++)
        {
            if (items[i] == num)
            {
                cout << "Element Position: " << i + 1 << endl;
                return;
            }
        }
        cout << "Element NOT Found...\n";
    }
    void Delete(int num)
    {
        int ind = get_index(num);
        if (ind != -1)
        {
            for (int i = ind; i < size; i++)
            {
                items[i] = items[i + 1];
            }
            length--;
            items[length] = 0; // clear the last element
            cout << "Deletion Done Successfully...\n";
        }
        else
        {
            cout << "Element NOT Found...\n";
        }
    }
};

/*
   Methods to add:
   - Enlarge
   - Merge

*/