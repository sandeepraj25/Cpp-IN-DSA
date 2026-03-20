// Print Prime Number question
// 1. check A is Prime Number or Not
// 2. Find Factorial Of A.
// 3. check B is Prime or Not
// 4. Factorial of B
// 5. B-A is Prime or Not
// 6. B-A ka Factorial

#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n < 2)
    
        return 0;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int fact( int n){
    int ans = 1;
    for(int i = 1; i<=n; i++)
    ans = ans*i;
    return ans;
}

int main()
{
    int a, b;
    cout<<"Enter The Number";
    cin>>a>>b;

    // call function
 
    cout<<prime(a)<<endl;
    cout<<fact(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<fact(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
}