#include<iostream>
using namespace std;

int main()
{
    char arr[5]= "1234";
    char *ptr= arr;
    cout<<arr<<endl; // print value 
    cout<<ptr<<endl; // print value

    cout<<(void*)arr<<endl; //print address
    cout<<(void*)ptr<<endl; //print address

    char name = 'a';
    char *ptr1 = &name;
    cout<<(void*)&name<<endl;
    cout<<(void*)&ptr1;

    return 0;
}