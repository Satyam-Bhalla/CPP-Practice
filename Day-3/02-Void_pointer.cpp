#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    double c = 100.36;

    void *ptr;
    ptr = &x;

    cout << &x << " " << ptr << endl;
    
    ptr = &c;
    cout << &c << " " << ptr << endl;
    return 0;
}