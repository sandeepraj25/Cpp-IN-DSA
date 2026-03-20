#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);

    int left = start;
    int right = mid + 1;
    int index = 0;

    // Compare both halves
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    // Remaining left elements
    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    // Remaining right elements
    while (right <= end)
    {
        temp[index++] = arr[right++];
    }

    // Copy back to original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid);   // Left side
    mergesort(arr, mid + 1, end); // Right side

    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6, 3, 1, 2, 3, 8, 9, 10, 7, 3, 10};
    int n = 11;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

