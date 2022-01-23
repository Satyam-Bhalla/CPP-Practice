#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    cout << "Value of x is " << x << " and address of x is " << &x << endl;

    int *y = &x;
    // int *y
    // y = &x

    cout << "Value of variable y is: " << y << endl;
    cout << "Value at the address stored in y is: " << *y << endl;
    cout << "Address of y is: " << &y << endl;
    cout << sizeof(y) << endl;

    *y =100;
    cout << x << endl;
    return 0;
}