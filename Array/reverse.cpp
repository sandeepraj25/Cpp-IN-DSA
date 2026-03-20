#include<iostream>
using namespace std;

// int main(){
//     int arr[6]={1,5,6,8,3,4};
//     for(int i=0;i<=5;i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=5;i>=0;i--){
//     cout<<arr[i]<<" ";
//     }
// }

// another method of print reverse

int main(){
    int arr[5]={14,2,5,8,9};
    int start=0, end=4;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}