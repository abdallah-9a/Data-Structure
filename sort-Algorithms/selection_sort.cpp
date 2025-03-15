#include <iostream>
using namespace std;
void selections_sort(int nums[], int n)
{
    int indx;
    for (int i = 0; i < n - 1; i++)
    {
        indx = i;
        for (int j = i + 1; j < n; j++)
        {
            // if (nums[indx] < nums[j])   // For descending sort
            if (nums[indx] > nums[j]) // For ascending sort
                indx = j;
        }
        // swap
        swap(nums[i], nums[indx]);
    }
}
int main()
{
    int nums[] = {80, 45, 28, 10, 56, 0, -10};
    int n = sizeof(nums) / sizeof(nums[0]);
    selections_sort(nums, n);
    cout << "Elements After Sorting \n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}