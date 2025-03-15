#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        // while (j >= 0 && arr[j] < key) // decending order
        while (j >= 0 && arr[j] > key) // Ascending order
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{
    int nums[] = {12, -9, 0, -66, 23, 12, 352, 66};
    int n = sizeof(nums) / sizeof(nums[0]);
    insertionSort(nums, n);
    print(nums, n);
}