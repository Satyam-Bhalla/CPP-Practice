#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        string school;
        int rollNo;
        int age;

        // Default
        Student(){
            cout << "Calling the default constructor"<< endl;
        }

        // Parameterized constructors
        Student(string n, string s, int r, int a){
            name = n;
            school = s;
            rollNo = r;
            age = a;
        }

        Student(string n, int r, int a){
            name = n;
            school = "D.A.V";
            rollNo = r;
            age = a;
        }



        void introduce(){
            cout << "Name: " << name << endl;
            cout << "School: " << school << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Age: " << age << endl;
        }
};


int main(){
    Student s1;
    s1.name = "Satyam";
    s1.school = "D.A.V.";
    s1.rollNo = 15;
    s1.age = 10;
    s1.introduce();

    Student s2("Satyam","Cipherschools",23,121);
    s2.introduce();

    Student s3("Simran",28,11);

    return 0;
}