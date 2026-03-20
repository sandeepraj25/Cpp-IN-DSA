#include <iostream>
using namespace std;

int binarysearch(int n, int arr[], int key)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // mid value find kro
        mid = (start + end) / 2;
        
        // mid value==key
        if (arr[mid] == key)
        return mid;
        
        // mid value <keys
        
        else if (arr[mid] < key)
        start = mid + 1;

        // else mid-1;
        else 
        end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter element of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter Your Keys: ";
    cin >> key;

    cout << binarysearch(n, arr, key);
};
