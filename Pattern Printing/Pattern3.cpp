#include <iostream>
using namespace std;

// int main(){
//     int row,col;

//     for(row=1;row<=5;row=row+1){
//         for(col=1;col<=5-row;col=col+1){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     int n;

//     cout<<"Enter Your number";
//     cin>>n;
//     for(row=1;row<=n;row=row+1){

//         for(col=1;col<=n-row;col=col+1){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     int n;
//     cout<<"Enter your number";
//     cin>>n;
//     for(row=1;row<=n;row=row+1){
//         for(col=1;col<=n-row;col=col+1){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1){
//             cout<<row;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5 - row; col = col + 1){
//              cout << " ";
//             for (char name = 'A'; name <= 'A' + row - 1; name = name + 1)
//             {
//                 cout << name << " ";
//             }
//             cout << endl;
//         }
//     }
// }

int main(){
    int row,col;
    for(row=1;row<=5;row=row+1){
        for(col=1;col<=5-row;col=col+1){
            cout<<" ";
        }
        for(col=row;col>=1;col=col-1){
            cout<<col;
        }
       cout<<endl;
    }
}