#include <bits/stdc++.h>

using namespace std;
 
template <class T1,class T2>
T2 add(T1 a,T2 b){
    return a+b;
}

int main(){
    cout << add<int ,int>(10,20) << endl;
    cout << add<int , double>(10,20.5) << endl;
    cout << add<double,double>(10.5,20.5) << endl;
    return 0;
}