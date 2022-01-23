#include<bits/stdc++.h>
using namespace std;

int main(){
    // Array with 4 elements
    int val[4] = {1,2,3,4};
    int *ptr;
    ptr = val;

    cout << ptr << endl;   // Base address of array
    cout << *ptr+1 << endl; // First element + 1
    cout << ptr[0] << ptr[1] << ptr[2] << ptr[3] << endl;


    // For loop
    for(int i=0;i<4;i++){
        cout << *ptr+i;
    }
    return 0;
}