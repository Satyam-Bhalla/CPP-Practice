#include <bits/stdc++.h>

using namespace std;

class Animal{
    public:
        void feeding(){
            cout << "Eat food" << endl;
        }
        void speak(){
            cout << "Makes a sound " << endl;
        }

};

class Dog : public Animal{
    public:
        void speak(){
                // Animal::speak();
                cout << "Bow bow" << endl;            
        }
        void do_trick(){
            cout << "Sit" << endl;
        }

};

class Oliver : public Dog{};


int main(){
    Oliver d;
    d.speak();
    d.do_trick();
    d.feeding();
    return 0;
}