#include<bits/stdc++.h>
using namespace std;

long long int power_iterative(int a, int b){
    long long int result=1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}

long long int power_recursive(int a,int b){
    if(b==0) return 1;
    return a*power_recursive(a,b-1);
}

long long int fast_recursive_power(int a,int b){
    if(b==0) return 1;
    if(b&1) return a*fast_recursive_power(a,b/2)* fast_recursive_power(a,b/2);
    else return fast_recursive_power(a,b/2)*fast_recursive_power(a,b/2);
}


int main(){
    power_iterative(2,3);
}