#include <iostream>
#include <fstream> // istream and ostream
#include <string>

using namespace std;

class Student{
    public:
        string name;
        int age;
        Student(){}
        Student(string name,int age){
            this->name = name;
            this->age = age;
        }
        void display(){
            cout << "Name: " << name << " Age: " << age << endl;
        }
};


int main(){
    Student s("Satyam",2500);
    fstream f("student.bat",ios::out|ios::binary);
    if(!f){
        cout << "Some error occured" << endl;
    }else{
        f.write((char *)&s, sizeof(Student));
        f.close();
    }

    if(f.good()){
        cout << "File written successfully" << endl;
        s.display();
    }else{
        cout << "Error occured" << endl;
    }

    return 0;
}