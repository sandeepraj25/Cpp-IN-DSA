#include<iostream>
#include<vector>
using namespace std;

int main(){
    // create a vector

    // vector<int>v;
    // vector<int>v1(5,1); //initialize the vector
    // //check size and capacity
    // cout<<"Size of V: "<<v.size()<<endl;
    // cout<<"Capacity of V: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(10);
    // cout<<"Size of V:"<<v.size()<<endl;
    // cout<<"Capacity of V: "<<v.capacity()<<endl;

    // //update value
    // // jab v aap vector me initialize krte hai tab output or capacity dono same 
    // // ati hai 
    // v[1]=5;
    // cout<<"Size of V:"<<v1.size()<<endl; // output of size
    // cout<<"size of V:"<<v1.capacity()<<endl; // output of capacity
    // v1.push_back(45); // jab new element push krte hai tab capacity badh jata hai
    // cout<<"Size of V:"<<v1.size()<<endl; // output of size
    // cout<<"size of V:"<<v1.capacity()<<endl; // output of capacity

    // // another method for initilize vector
    // vector<int>v3= {1,2,3,4,5}; // ye v tarike se initilize kr sakte hai but ye online online complier me chalega


    // delete value from vector
//     vector<int>vnew;
//     vnew.push_back(14);
//     vnew.push_back(10);
//     vnew.push_back(6);
//     vnew.push_back(23);
//     vnew.push_back(25);
 
//  vnew.pop_back(); // pop kardo means delete kardo


// vnew.erase(vnew.begin()+1); // isse specific element delete kr sakte hai.
//  cout<<"Size of Vnew: "<<vnew.size()<<endl; // output of size
//  cout<<"size of Vnew: "<<vnew.capacity()<<endl; // output of capacity

//  vnew.insert(vnew.begin()+ 1,50); // insert new element at any positions;
//  vnew[1]=45; // update new element at any postion

//  vnew.clear(); // remove all elements from array; 

//  for(int i=0; i<vnew.size(); i++)
//  {
//     cout<<vnew[i]<<" ";
//  }


// vector<int>arr;
// arr.push_back(10);
// arr.push_back(15);
// arr.push_back(22);
// arr.push_back(32);
// arr.push_back(66);
// cout<<arr[1]<<endl; // this is method for print specific elements in array
// cout<<arr.front()<<endl; // this is method for print first elements in array
// cout<<arr[arr.size()-1]<<endl; // this is for print back elements
// cout<<arr.back()<<endl; // this is for print back elements

// vector<int>a;
// //copy value of one vector to another vector
// a=arr;
// cout<<a.size()<<endl;
// for(auto i: arr)
// {
//     cout<<i<<" ";
// }

vector<int>ans;
ans.push_back(45);
ans.push_back(25);
ans.push_back(28);
ans.push_back(47);
ans.push_back(99);

// // sort in increasing order
// sort(ans.begin(), ans.end());
// for(int i=0; i<ans.size(); i++)
// {
// cout<<ans[i]<<" ";
// cout<<endl;
// }
// // for decreasing order
// sort(ans.begin(), ans.end(), greater<int>());
// for(int i=0; i<ans.size(); i++)
// {
// cout<<ans[i]<<" ";
// }


// search particular element using binary search

cout<<binary_search(ans.begin(),ans.end(), 28)<<endl;

//find index of elements
cout<<find(ans.begin(),ans.end(),28)-ans.begin()<<endl;

}