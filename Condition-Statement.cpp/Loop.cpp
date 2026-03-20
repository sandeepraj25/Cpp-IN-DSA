// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i = i+ 1)
//     {
//         cout << "coder army\n";
//     }
// }

// print hello world 10 times
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i= 0; i<=10; i= i+1){;
//     cout<<"hello world\n";
// }
// return 0;
// }

// print natural number;
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i = i + 1)
//     {
//         cout << i<<endl;
//     }
// }

// square of number print
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i = i + 1)
//     {
//         cout << i*i<<endl;
//     }
// }

//  print all even number up to 10

// #include<iostream>
// using namespace std;

// int main(){
//     int even;
//     cout<<"Enter Your Even Number";
//     cin>>even;
//     for (int even = 2; even <= 10; even= even+2)
//     {
//         cout<<even<<endl;
//     }

// }

//  print all odd number up to 10

// #include <iostream>
// using namespace std;

// int main() {
//     // Loop to print numbers from 1 to 10
//     for (int i = 1; i <= 10; i++) {
//         // Check if the number is odd
//         if (i % 2 != 0) {
//             cout << i << endl;  // Print the odd number
//         }
//     }

//     return 0;
// }

// print all number from 101 to 200

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i= 101; i<=200; i= i+1){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// print a to z

// #include<iostream>
// using namespace std;

// int main(){
//     char name;
//     for(name = 'a'; name<='z'; name= name+1){
//         cout<<name<<endl;
//     }
// }

// print number in reverse order from 10 to 1
// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout<<"Enter the number";
//     cin>> n;
//     for (int i = n; i >=1; i = i-1 )
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }

// print number between 1 to 100 but condition is 3 jump
// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     for(n=1;n<=100;n=n+3){
//         cout<<n<<endl;
//     }
// }

// print table of n like 3;

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Your Number";
//     cin>>n;
//     for(n=6;n<=60;n=n+6){
//         cout<<n<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout<<"Enter Your Number";
//     cin>>n;
//     for(i=1;i<=10;i=i+1){
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
//     return 0;
// }

// power of number multiplication

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, pow, i, num;
//     cout << "Enter the Number";
//     cin >> n;
//     cout << "Enter the power";
//     cin >> pow;
//     num = n;
//     for (i = 1; i < pow; i = i + 1)
//     {
//         num = num * n;
//     }
//     cout << num;
// }

// sum of n natural number
// #include<iostream>
// using namespace std;

// int main(){
//     int n,i,sum=0;
//     cout<<"Enter Your Number";
//     cin>>n;

//     for(i=0;i<=n;i=i+1){
//         sum= sum+i;
//     }
//     cout<<sum;

//     //other option
//     // cout<<(n*(n*1))/2;
// }

// Print Factorial Number
// #include<iostream>
// using namespace std;

// int main(){
//     int n,fact=1, i;
//     cout<<"Enter Your Number";
//     cin>>n;
//     for(i=1;i<=n;i++){
//        fact= fact*i;
//     }
//     cout<<fact;
// }

// check Prime Number or Not
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cout << "Enter Your Number";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "NOT PRIME NUMBER";
//         return 0;
//     }
//     else
//     {
//         for (i = 2; i < n; i++){
//             if (n % i == 0){
//                 cout <<"Not Prime";
//                 return 0;
//             }
//         }
//         cout << "Number is Prime";
//     }
// }

// Fabonianci Series Number print
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, n, i = 3;
    cout << "Enter Your Value";
    cin >> n;

    cout << a << endl
         << b << endl;
    while (i <= n)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        i++;
    }
    return 0;
}