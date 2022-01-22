#include <bits/stdc++.h>

using namespace std;

void rec(int a){
    // Base condition
    if(a==0){
        return;
    }
    rec(a-1);
    cout << a << endl;
    
}

int main(){
    int a = 3;
    rec(a);
}