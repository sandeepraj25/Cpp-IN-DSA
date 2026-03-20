#include<iostream>
using namespace std;
// pass by reference here no use of pointer
void swapping(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(){
// int num = 10;
// int &temp = num; //num and temp are same
// cout<<temp<<endl;
// temp++;
// cout<<num<<endl;
// cout<<&temp<<endl;
// cout<<&num<<endl;

int first = 10, second = 20;
swapping(first,second);
cout<<first<<" "<<second;
}