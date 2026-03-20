#include <iostream>
using namespace std;

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//         for(row=1;row<=col;row=row+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//         for(row=1;row<=col;row=row+1){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=15;col=col+1){
//         for(row=1;row<=col;row=row+1){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;
//     for(col=1;col<=5;col=col+1){
//         for(row=col;row>=1;row=row-1){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;

//     for(col=1;col<=5;col=col+1){
//         char name = 'a'+col-1;
//         for(row=1; row<=col; row= row+1){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int row, col;

//     for (row = 5; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }
// }

// int main(){
//     int row,col;

//     for(row=1;row<=5;row=row+1){
//         for(col=1;col<=5-row+1;col=col+1){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row,col;

//     for(col=5;col>=1;col=col-1){
//         for(row=1;row<=col;row=row+1){
//         cout<<row<<" ";
//         }
//        cout<<endl<<" "; 
//     }
    
// }

int main(){
    int row,col;

    for(row=1;row<=5;row=row+1){
        for(col=5;col>=5-row+1;col=col-1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
