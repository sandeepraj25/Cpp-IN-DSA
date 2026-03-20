#include <iostream>
using namespace std;
int main()
{
    // char arr[]={'s','a','n','d','e','e','p'};
    // for(int i=0;i<7;i++)
    // cout<<arr[i];

    // char arr[10];
    // cin>>arr;
    // arr[2]='\0';
    // cout<<arr;

    //   string s= "sandeep";
    // string s;
    //   cin>>s;
    //   cout<<s;
    //  string s;
    //  getline(cin,s);
    //  cout<<s<<endl;
    //  cout<<s.size();

    // string s = "sandeep", s1="mandeep";
    // // cout<<s+s1;
    // // cout<<s.append(s1);
    // // s.push_back('K');
    // s.pop_back();
    // cout<<s;

    // i want to print this - sandeep is "sandeep" boy;

    // string s="sandeep is \"good\" boy"  ;
    // cout<<s;

    // reverse the string 
    //     string s = "sandeep";
    //     int start = 0, end = s.size() - 1; // USE HERE TWO POINTER VARIABLE
    //     while (start < end)
    //     {
    //         swap(s[start], s[end]);
    //         start++;
    //         end--;
    //     }
    //     cout<<s<<endl;
    //     cout<<s.size();

    // check palidrome or not
    string s1 = "NAMAN";
     int start = 0, end = s1.size() - 1;
    while (start < end)
    {
        if (s1[start] != s1[end])
        {
            cout << "It is Not Palidrome";
            return 0;
        }
        start++, end--;
    }

    cout << "it is Palidrome";
}
