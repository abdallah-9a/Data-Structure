// simple implementation for sorting

#include <iostream>
using namespace std;

void display(int nums[], int n)
{
    for (int i = 0; i < n; i++)
        cout << nums[i] << ' ';
    cout << endl;
}

void bubbleSort(int nums[], int n)
{
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // [12,56,77,23]
        {
            // if (nums[j] < nums[j + 1]) // for descending sort
            if (nums[j] > nums[j + 1]) // for ascending sort
            {
                swap(nums[j], nums[j + 1]);
                flag = false;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "List is already Sorted\n";
    else
        display(nums, n);
}

int main()
{
    int nums[] = {12, 34, 67, 68, 1, -9, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    bubbleSort(nums, n);
    return 0;
}