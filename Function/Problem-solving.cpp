// Convert a to 'A';
// #include<iostream>
// using namespace std;
// char conveter(char name){
//         char ans;
//         ans=name-'a'+'A';
//         return ans;
// };

// int main(){
//     char name;
//     cin>>name;
//     cout<<conveter(name);
// };

// CHECK ARMSTRONG NUMBER OR NOT

#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n){
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    return count;
}

bool armstrong(int num, int digit){
    int n = num, ans = 0, rem;
    while(n){
        rem = n % 10;
        n /= 10;
        ans += pow(rem, digit);
    }
    return ans == num;
}

int main(){
    int num;
    cin >> num;

    int digit = countdigit(num);  //count digits
    cout << armstrong(num, digit);
}