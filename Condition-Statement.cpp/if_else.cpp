// #include <iostream>
// using namespace std;

// int main()
// {
//     int package;
//     cin >> package;
//     if (package >= 10)
//     {
//         cout << "Accepted";
//     }
//     else
//     {
//         cout << "rejected";
//     }
// }

//marks grading system

// #include<iostream>
// using namespace std;
// int marks;
// int main(){
//     cout<<"Enter Your Marks"<<endl;
//     cin>>marks;
    
    
//     if(marks<=33){
//         cout<<"Tumhari Back Lag Gayi hai";
//     }
//     else{
//         cout<<"Tum Pass ho gaye ho! Just chill";
//     }
// }

// print A>b so yes otherwise no
// #include<iostream>
// using namespace std;
// int a = 10;
// int b = 20;
// int main(){
// if(a>b){
//     cout<<"Yes";
// }
// else{   
//     cout<<"No";
// }
// }
// print A>b so yes otherwise no- take user marks
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter Your First Number: ";
//     cin>>a;
//     cout<<"Enter Your Second Number: ";
//     cin>>b;
//     if(a>b){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No!";
//     }
//     return 0;
// }
// check even or odd number
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter Your Number";
//     cin>>a;
//     if(a%2==0){
//         cout<<"Even Number";
//     }
//     else{
//         cout<<"Odd Number";
//     }
//     return 0;
// }

//voter eligibilty check
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter Your Age";
//     cin>>age;
// if (age>18)
// {
//     cout<<"Your are eligible for vote";

// }
// else{
//     cout<<"Chal Nikal Pahli Fursat me!";
// }
// return 0;
// }

//postive or negative check in number

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Your Number";
//     cin>>num;
//     if(num<0){
//         cout<<"Negative Number";
//     }
//     else{
//         cout<<"Positive Number";
//     }
//     return 0;
// }

//check vowel or consonant 

// #include<iostream>
// using namespace std;

// int main(){
//     char vowel;
//     cout<<"Enter Your Alphabets";
//     cin>>vowel;
//     if(vowel == 'a'){
//         cout<<"This is vowel";
//     }
//     else if(vowel == 'e'){
//         cout<<"this is Vowel";
//     }
//     else if(vowel =='i'){
//         cout<<"this is Vowel";
//     }
//     else if(vowel == 'o'){
//         cout<<"this is Vowel";
//     }
//     else if(vowel == 'u'){
//         cout<<"this is Vowel";
//     }
//     else {
//         cout<<"constonant";
//     }
//     return 0;
// }

// print weekend with number;

#include<iostream>
using namespace std;
int main(){
    int weekend;
    cout<<"Enter Your Weekend Number";
    cin>>weekend;
    if(weekend==1){
        cout<<"Monday";
    }
    else if(weekend==2){
        cout<<"Tuesday";
    }
    else if(weekend==3){
        cout<<"Wednesday";
    }
    else if(weekend==4){
        cout<<"Thursday";
    }
    else if(weekend==5){
        cout<<"Friday";
    }
    else if(weekend==6){
        cout<<"Saturday";
    }

    else if(weekend==7){
        cout<<"sunday";
    }

   else {
    cout<<"Enter valid Date";
   }

   return 0; 
}