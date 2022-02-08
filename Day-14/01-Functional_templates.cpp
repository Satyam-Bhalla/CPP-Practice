#include <iostream>

using namespace std;

// void display(int a){
//     cout << "value of a is " << a << endl;
// }


// Functional Template
template <class T>
void display(T a){
    cout << "Value of a is " << a << endl;
}


int main(){
    // display(2);
    
    // Template based function call
    display<int>(10);
    display<double>(2.3);
    display<string>("Hello everyone");

    return 0;
}