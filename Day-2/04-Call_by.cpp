#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    a++;
    cout << "Value of the copy variable a is: " << a << endl;
}

void incre_by_address(int *ptr){
    (*ptr)++;
}

// Reference is an alias
void incre_by_reference(int &r){
    r++;
}


int main(){
    int a = 10;
    cout << "Value of variable a is " << a << " and Address of variable a is: " << &a << endl;
    
    incre_by_value(a);
    cout << "Value of variable a is " << a << endl;

    // int *ptr = &a;
    incre_by_address(&a);
    cout << "Value of variable a is " << a << endl;
    
    incre_by_reference(a);
    cout << "Value of variable a is " << a << endl;
    
    
    
    return 0;
}