#include <iostream>

using namespace std;

int main()
{
    try{
        int a;
        cin >> a;
        // can't allow value of a to be 10
        if (a == 10){
            // Do something
            throw "String exception thrown";
        }
        cout << "Value of a is: " << a << endl;
    }catch (int a){
        cout << "Can't assign a to 10" << endl;
    }catch(...){
        cout << "Generic Exception" << endl;
    }

    return 0;
}