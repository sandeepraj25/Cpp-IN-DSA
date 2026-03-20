#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 6, 9, 3, 7};
    char index = 'x';
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == 6)
        {
            cout<<"Your Index is "<<i;
            return 0;
        }
    }
   
}