// #include <iostream>
// using namespace std;

// int main() {
//     int arr[6] = {10, 20, 6, 8, 6, 45};
//     int n = 6;

//     for (int i = 0; i < n - 1; i++) {
//         int index = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[index])
//                 index = j;
//         }
//         swap(arr[i], arr[index]);
//     }

//     for (int k = 0; k < n; k++)
//         cout << arr[k] << " ";

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int k=0; k<n; k++)
        cout << arr[k] << " ";

    return 0;
}

