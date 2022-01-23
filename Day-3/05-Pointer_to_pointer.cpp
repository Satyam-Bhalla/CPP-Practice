#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *y = &x;
    int **z = &y;
    int ***a = &z;

    cout << x << " " << y << " " << z << " " << a << endl;
    cout << *y << " " << **z << " " << ***a << endl;

    return 0;
}