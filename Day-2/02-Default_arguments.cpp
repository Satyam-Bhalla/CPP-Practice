#include <bits/stdc++.h>

using namespace std;

int sum(int a=0, int b=0, int c=0 ){
    return a+b+c;
}


int main(){
    cout << sum() << endl;
    cout << sum(1) << endl;
    cout << sum(1,2) << endl;
    cout << sum(1,2,3) << endl;
}