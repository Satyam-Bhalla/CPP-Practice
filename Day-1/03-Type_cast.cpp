#include <iostream>
using namespace std;
int main(){
    int num = 9;
    double num_double;

    // Implicit conversion
    num_double = num;
    cout << num << " " << num_double << endl;

    int num2;
    double num_double2 = 100.68;
    num2 = num_double2;
    cout << num2 << " " << num_double2 << endl;

    // C style type conversion
    double num_double3 = 3.14;
    int num3 = (int)num_double3;
    cout << num3 << " " << num_double3 << endl;


    // function type conversion
    int num4 = int(num_double3);
    cout << num4 << " " << num_double3;

    return 0;
}