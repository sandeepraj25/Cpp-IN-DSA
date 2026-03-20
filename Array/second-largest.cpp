#include<iostream>
using namespace std;

int main(){
    int second = INT_MIN;
    int ans= INT_MIN;
    int arr[6]={1,5,9,7,3,6};

    for(int i=0;i<6;i++){
    if(arr[i]>ans)
    ans=arr[i];
    }
    for(int i=0;i<6;i++)
    {
        if(ans!=arr[i])
        {
        second=max(second,arr[i]);
        };
    }
    cout<<second;
}