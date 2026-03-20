#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr=arr;

    // print address of 1st elements which index is 0;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print address of 2nd elements which index is 1;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //print value of 0 index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    //sare address ko ek sath print krdo
    for(int i=0;i<5;i++){
        cout<<arr+i<<endl;
    }
    // print all the value
    for(int i=0;i<5;i++){
        cout<<*arr+i<<endl;
    }
    // print all value
    for(int i=0;i<5;i++){
        cout<<ptr[i]<< " ";
    }

    //Print all the address
    for(int i=0;i<5;i++){
        cout<<*ptr+i<<endl;
    }

    Print all the value perform arthmetic operation p++, p--;
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        p++;
    }

    //addtion
    ptr = ptr+3;
    cout<<*ptr;

    ptr= ptr-2;
    cout<<*ptr;
}