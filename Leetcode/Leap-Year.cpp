#include <iostream>
using namespace std;

int main(){
    int Years;
    cout<<"Enter Your Leap Years";
    cin>>Years;

    if(Years%400==0){
        cout<<"This is Leap Years: ";
    }
    else if(Years%100==0){
        cout<<"This is Not Leap Years: ";
    }
    else if(Years%4==0){
        cout<<"Yes, Its is Years Years: ";
    }
    else{
        cout<<"Not Leap Years: ";
    }
}