#include<iostream>
using namespace std;

int sum( int m, int n){
    int ans = m+n;
    return ans;
};
int mul(int m, int n){
    int ans = m*n;
    return ans;
}
void display(){
    cout<<"Hello Coder Army";
  };
int main(){
    int a,b;
    cout<<"Enter your Number";
    cin>>a>>b;
   
  

    //function call
    cout<<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    display();
};