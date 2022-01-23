#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *y = &x;

    cout << y << " -> " << *y << endl;
    // ptr + n = ptr + (sizeof(datatype)*n)
    y = y+1;
    cout << y << " -> " << *y << endl;
    y = y-2;
    cout << y << " -> " << *y << endl;
    return 0;
}