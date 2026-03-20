// simple program using void to print "Hello Coder Army"

#include <iostream>
using namespace std;

void fun()
{                               // function declare
    cout << "Hello Coder Army"; // print hello coder army
}
int main()
{
    fun(); // call the function
}

// sum of two number using void

#include <iostream>
using namespace std;
void Sum(int m, int n)   // function declaration
{
    int result = m + n; 
    cout << result << endl;
}

int main()
{
    int a, b;
    cout << "Enter Your 1st Number" << endl;
    cin >> a;
    cout << "Enter Your 2nd Number" << endl;
    cin >> b;

    // call the function
    Sum(a, b);
}

