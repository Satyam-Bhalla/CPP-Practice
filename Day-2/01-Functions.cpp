#include <iostream>
#include <cmath>

using namespace std;

// User defined functions or Inbuilt functions


/*
    Function syntax
    return_type function_name(params){
        function body
    }
*/

// Function declaration/ Function Prototype
int addition(int c,int d);

// Declaration and definition
int subtraction(int a,int b){
    return a-b;
}

int main(){
    int a,b;
    bool is_continue = true;
    while(is_continue){
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Enter the option: " << endl;
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for power" << endl;
        cout << "Press 4 to exit" << endl;
        cout << "Your Input: ";
        int res;
        cin >> res;
        switch(res){
            case 1:
                cout << "addition = " << addition(a,b) << endl;
                break;
            case 2:
                cout << "subtraction = " << subtraction(a,b) << endl;
                break;
            case 3:
                cout << "a power b is = " << pow(a,b) << endl;
                break;
            case 4:
                is_continue = false;
                break;
            default:
                cout << "Please use numbers from 1 to 4" << endl;
                break;
        }

    }
    return 0;
}

int addition(int c,int d){
    return c+d;
}