/*
    Arithmetic operators => +,-,*,/,%
        Unary Operators: => ++,--
        Binary Operators: => +,-,*,/,%
    
    Relational Operators (>,<,>=,<=,==)
    Logical Operators (||, &&)
    Bitwise Operators( &, |, ^)
    Assignment operator ( = )

    Other operators:-
        1.) sizeof
        2.) Comma operator
        3.) Conditional ( condition ? true : false) 
*/
#include<iostream>

using namespace std;

int main(){
    int a,b;
    a = 7;
    b = 9;

    cout << "a+b=" << (a+b) << endl;
    cout << "a-b=" << (a-b) << endl;
    cout << "a*b=" << (a*b) << endl;
    cout << "a/b=" << (a/b) << endl;
    cout << "a%b=" << (a%b) << endl;

    cout << "******Unary Operators*********" << endl;
    cout << a++  << endl;
    cout << --b << endl;


    cout << "**********************" << endl;
    bool result = !(a==b);
    cout << result << endl;


    return 0;
}
