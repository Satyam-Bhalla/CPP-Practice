#include <bits/stdc++.h>

using namespace std;

// Base class
class Animal{
    public:
        int age;
        void breathe(){
            cout << "Taking O2 and giving out Co2" << endl;
        }
};

// Derived class or child class or sub class
class Dog : public Animal {

};


int main(){
    Dog d;
    d.age = 5;
    cout << d.age << endl;
    d.breathe();
    
    return 0;
}