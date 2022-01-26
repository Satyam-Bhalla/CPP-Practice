#include <bits/stdc++.h>

using namespace std;

// Access Modifiers
// 1.) Public:- Accessible by all
// 2.) Private:- Accessible by member functions of same class
// 3.) Protected:- Accessible by member functions and derived class member functions


class Person{
    public:
        string name;
        int age;
        void func(){
            introduce();
        }
        void printMarks(int marks);

    private:
        int money;
        void introduce(){
            cout<< "My name is " << name << endl;
            cout << "My age is " << age << endl;
        }
    friend class Government;
    friend void friendFunction(Person p);
};

// friend function
void friendFunction(Person p){
    p.introduce();
}

// friend class
class Government{
    public:
        void hackerman(Person p3){
            cout << "The name of this person is " << p3.name << endl;
            cout << "The age of this person is " << p3.age << endl;
            p3.introduce();
        }
        void assignAadhar(Person p3){

        }
};

void Person::printMarks(int marks){
    cout << "You got " << marks << " marks" << endl;
    func();
}

int main(){
    Person p;
    p.name = "Satyam";
    p.age= 1000;

    Person p2;
    p2.name = "Mohit";
    p2.age = 1500;

    // p.func();
    // p2.func();
    // p.printMarks(100);

    Person p3;
    p3.name = "Swati";
    p3.age = 800;

    Government g;
    g.hackerman(p3);

    return 0;
}