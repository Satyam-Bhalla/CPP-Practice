#include <bits/stdc++.h>

using namespace std;

class Number{
    int a;
    public:
        // Default constructor
        Number(){
            a = 0;
            cout << "Default constructor called" << endl;
        } 
        // Parameterized constructor
        Number(int num){
            cout << "Parameterized constructor called "<< endl;
            a = num;
        }
        // Copy constructor
        Number(Number &obj){
            cout << "Copy constructor called" << endl;
            a = obj.a;
        }

        void display(){
            cout << "Number is " << a << endl;
        }
};



int main(){
    Number x,y,z(42),z2;
    x.display();
    y.display();
    z.display();

    // Copy object from one to another
    z2 = z ;
    z2.display();

    Number z3(z);
    z3.display();

    Number z4 = z;
    z4.display();
    return 0;
}