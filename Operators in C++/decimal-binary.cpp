#include <iostream>
using namespace std;
// binary to decimal
int main(){
    // int num;
    // cout<<"Enter the Number";
    // cin>>num;
    // int rem, ans=0, mul=1;

    // while(num>0){
    //     rem= num%2; //remainder

    //     num = num/2; //quotient

    //     ans = rem*mul+ans;  //answer

    //     mul = mul*10; // multiplication by 10
    // }
    // cout<<ans<<endl;

    //decimal to binary
    int num;
    cout<<"Enter The Number";
    cin>>num;
    int mul = 1, rem, ans=0;

    while (num>0)
    {
        rem=num%10;
        num=num/10;
        ans= mul*rem+ans;
        mul*=2;
        /* code */
    }
    cout<<ans<<endl;
    
}