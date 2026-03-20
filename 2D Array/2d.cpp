#include <iostream>
using namespace std;

int main()
{
    // Array create krna hai jo store karega address
    int n, m; // n = rows and m = cols
    cin >> n >> m;

    int **ptr = new int *[n];

    // created 2D array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ptr[i][j];

    // print the value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ptr[i][j] << " ";
            cout<<endl;
    }

    //Realese the memory 
    for(int i=0;i<n;i++)
    delete[] ptr[i];

    delete[] ptr;
}