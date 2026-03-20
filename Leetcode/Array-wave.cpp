#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave(int arr[][4], int row, int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0; i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        
        else
        for(int i=row-1;i>=0;i--)
        cout<<arr[i][j]<<" ";
    }
}


int main(){
    //Create 2D Array

    int arr1[3][4]={1,2,5,9,6,5,2,3,7,9,4,3};
    int arr2[3][4]={7,8,9,6,5,1,2,3,9,1,4,5};
    int ans[3][4];

    wave(arr1,3,4);
}