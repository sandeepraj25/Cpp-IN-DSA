// Multiplication of two number using function

#include<iostream>
using namespace std;

int Mul(int m, int n){
    int ans = m*n;
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter Your 1st Number"<<endl;
    cin>>a;
    cout<<"Enter Your 2nd Number"<<endl;
    cin>>b;

    // Function call
    int Result = Mul(a,b);
    cout<<"The Multiplication of two Number is"<<Result<<endl;
}