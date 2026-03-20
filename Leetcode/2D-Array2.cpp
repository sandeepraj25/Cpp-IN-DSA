#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<vector<int>> matrix(3, vector<int>(4, 1));
    // // for (int i = 0; i < 3; i++)  //Create 2D Array
    // // {
    // //     for (int j = 0; j < 4; j++)
    // //     {
    // //         cout << matrix[i][j] << " ";
    // //     }
    // //     cout << endl;
    // // }

    // //Find size of row and cols
    // cout<<"Row = "<<matrix.size();
    // cout<<endl;
    // cout<<"Cols = "<<matrix[0].size();

    // take input from users;

    int n, m;
    cout << "Enter Your Row and cols ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}
