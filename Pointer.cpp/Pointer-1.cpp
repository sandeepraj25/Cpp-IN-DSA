    #include <iostream>
    using namespace std;

    int main(){
        int a = 10;
        cout<<&a<<endl; // print address of a
        // another way for ptr

        int *ptr = &a;
        // cout<<ptr<<endl;
        cout<<sizeof(ptr)<<endl;
        float m = 100.45;
        float *ptr1 = &m;
        // cout<<ptr1<<endl;
        cout<<sizeof(ptr1)<<endl;

        int *ptr = &a;
        cout<<ptr<<endl; //adress of a
        cout<<*ptr<<endl; // value inside a ;

        int b = 20;
        ptr = &b;
        cout<<ptr<<endl; // address of b 
        cout<<*ptr<<endl; // value inside b;
        b = 30;
        cout<<*ptr<<endl;
    }