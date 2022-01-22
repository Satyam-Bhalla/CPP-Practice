#include <bits/stdc++.h>

using namespace std;

int factorial(int n);

int main(){
    factorial(5);
}

int factorial(int n){
    if(n>1){
        return factorial(n-1)*n;
    }else{
        return 1;
    }
}