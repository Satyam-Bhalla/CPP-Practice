#include <iostream>

using namespace std;

class Student{};

int main(){
    double a,b;
    cin >> a >> b;
    try{
        if(b==0){
          throw 400;  
        }else if(a==20){
            throw 10;
        }
        if(a == 100){
            Student s;
            throw s;
        }
        cout << "a/b = " << a/b << endl;

    }catch(int e){
        if(e==400){
            cout << "Infinity" << endl;
        }
        cout << "Integer error occured" << endl;
    }catch(Student e){
        cout << "Saved this student from errors" << endl;
    }catch(...){
        cout << "Generic exception occured" << endl;
    }


    return 0;
}