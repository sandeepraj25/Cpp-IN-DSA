#include<iostream>
using namespace std;
void fun(int **p1)
{
    *p1 = *p1+1;
}

int main()
{
    int n=10;
    int *p = &n;//single pointer
    int **p2 = &p;  //double pointer
    int ***p3 = &p2; //triple pointer
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;

    // modify the value 

    *p = *p +5; //single pointer
    **p2 = **p2 +5; // double pointer
    ***p3 = ***p3+10; //triple pointer
    cout<<n;

    cout<<p<<endl;
    fun(p2);
    cout<<p<<endl;
}