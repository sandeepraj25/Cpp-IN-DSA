// sum of two number using function

#include <iostream>
using namespace std;

int Sum(int m, int n)   // function declaration
{                    
    int ans = m + n; // Function Define
    return ans;      // Function Define
}

int main()
{
    int a, b;
    cout << "Enter Your 1st No" << endl;
    cin >> a;
    cout << "Enter Your 2nd No" << endl;
    cin >> b;

    // Function Call
    int Result = Sum(a, b);
    cout << "The sum of Two Number is "<<Result<< endl;
}