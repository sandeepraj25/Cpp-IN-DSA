#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    for(int j = 0; j < col; j++) {
        for(int i = 0; i < row; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printrowmax(int arr[][4], int row, int col)
{
    int index =-1, sum=INT_MIN;
    for(int i=0;i<row;i++)
    {
        int total = 0;
        for(int j=0;j<col;j++)
        total+=arr[i][j];
        if(total>sum)
        {
            sum=total;
            index=i;
        }
    }
    cout<<index<<" ";
}
void printsumdig(int matrix[][3], int row, int col)
{
    int first =0;
    int second = 0;

    //fist dialogonal sum
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    // second dialogonal
     i=0;
     int j=col-1;
    while(j>=0)
    {
        second+=matrix[i][j];
        i++, j--;
    }
    cout<<first<<" "<<second<<" ";
}

int main() {
    //create a 2D array;
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << "Row-wise print:\n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++)
            cout << arr[row][col] << " ";
        cout << endl;
    }

    cout << "\nColumn-wise print:\n";
    printcol(arr, 3, 4);

    //find x=7 in interger

    int x=70;
    for(int row=0; row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        {
            cout<<"Yes ";
            return 0;
        }

    }
    cout<<"No ";

    //Add 2 Matrix 

    int arr1[3][4]={1,5,8,9,5,8,93,69,4,5,0,59};
    int arr2[3][4]={4,5,8,9,6,7,8,12,56,55,66,12};
    int ans [3][4];

for(int row=0;row<3;row++)
for(int col=0;col<4;col++)
{
    ans[row][col]=arr1[row][col]+arr2[row][col];
}
for(int row=0;row<3;row++)
for(int col=0;col<4;col++)
cout<<ans[row][col]<<" ";
//print row index with maximum sum
printrowmax(arr2,3,4);


//print diagonal max sum
int matrix[3][3]={1,2,3,4,5,6,7,8,9};
printsumdig(matrix,3,3);
}
