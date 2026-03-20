#include <iostream>
using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// };

// int main(){
//     int arr[]= {10,2,0,2,358,6};
//     for(int i=0; i<6;i++);
//     cout<<arr[2]<<" ";
// retrun 0;
// }

// int main(){
//     int arr[5]={8,1,2};
//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// int main(){
//     int arr[2]={0};
//     for(int i=0;i<2;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// ask user to enter the value to print array
//  int main(){
//      int size;
//      cin>>size;
//      int arr[25];
//      for(int i = 0; i<size;i++){
//          cin>>arr[i];
//      }
//      for(int i=0;i<size;i++)
//      cout<<arr[i]<<" ";
//  }

// print size of int and char in arr

// int main(){
//     int arr[5]={1,2,3,5,8};
//     int a;
//     char b;
//     float c;
//     cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c);
// }

// int main(){
//     int arr[5]={1,2,3,8,6};
//     cout<<sizeof(arr)[2];
// }

// find total number of element in array
//  int main(){
//  int arr[6]={1,2,5,6,9,5};
//  cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//  return 0;
//  };

// find minimum and maximum using array

int main()
{
    int arr[5] = {1, 5, 9, 2, 6};
    {
        int ans = INT_MAX; // find min value
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] < ans)
            ans = arr[i];
        }
        cout << ans<<endl;;

        ans = INT_MIN; // find Max value
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] > ans)
            ans = arr[i];
        }
        cout << ans;
        return 0;
    }
}