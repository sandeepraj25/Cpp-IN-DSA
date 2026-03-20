#include <iostream>
using namespace std;

// print this pattern using i and j, now we can print using row of columns
// int main()
// {
//     int i,j;
//     for (j = 1; j<=5; j= j+1)
//     {
//         for (i = 1; i <= 5; i = i + 1)
//         {
//             cout << "*" << " ";
//         }
//         cout<<endl;
//     }
// }

// another way

// int main(){
//     int row, col;
//     for(col=1;col<=5;col=col+1){
//     for(row=1;row<=5;row=row+1)
//     cout<<"*"<<" ";
//     cout<<endl;
//     }
// }

// now print 10 in row and columns

// int main(){
//     int i,j;
//     for(j=1;j<=5;j++){
//     for (i=1;i<=5;i=i+1){
//         cout<<"10"<<" ";
//     }
//     cout<<endl;
// }
// }

// int main(){
//      int row,col;
//     for(row=1;row<=5; row=row+1){
// for(col=1;col<=5;col=col+1){
//     cout<<row<<" ";
// }
//     cout<<endl;
// }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//     for(row=1;row<=5;row=row+1){
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//     for(row=5;row>=1;row=row-1){
//         cout<<row<<" ";
//     }
//     cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//     for(row=1;row<=5;row=row+1){
//         cout<<row*row*row<<" ";
//     }
//     cout<<endl;
// }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)  // Outer loop for rows
//     {
//         for (col = 1; col <= 5; col++)  // Inner loop for columns
//         {
//             char name = 'a' + col - 1;  // Calculate the character based on the column
//             cout << name << " ";  // Print the character followed by a space
//         }
//         cout << endl;  // After finishing each row, print a newline
//     }

//     return 0;
// }

// int main(){
//     int col;
//     char row;
//     for(col=1;col<=5;col=col+1){
//     for(char row='a'; row<='e'; row= row+1){
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }
// }

int main()
{
    int row, col;
    int count = 1;
    for (col = 1; col <= 5; col = col + 1)
    {
        for (row = 1; row <= 5; row = row + 1)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout<<endl;
    }
}
