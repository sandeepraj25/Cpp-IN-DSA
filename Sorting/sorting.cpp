#include <iostream>
using namespace std;
// // find largest number of array.
int findlargest (int arr[],int n){;
int largest = 0;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
    largest =arr[i];
    }   
}
return largest;
}

int main(){
    int arr[]={10,2,58,6,96,41};
    int n= sizeof(arr)/sizeof(int);
   cout<<"largest " << findlargest(arr,n) << endl;
   return 0;
}



// find smallest number in array

#include<iostream>
using namespace std;

int findsmallest ( int arr[], int n){
    int smallest =  arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]< smallest){
         smallest = arr[i];
        } 
    }
    return smallest;
}
int main(){
    int arr[]= {10,5,6,8,2,52,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<"smallest "<<findsmallest (arr, n);
}