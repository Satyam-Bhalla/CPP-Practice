#include <iostream>

using namespace std;

class Base{};
class Derived : public Base{};

int main(){
    try{
        Derived d;
        Base b;
        throw d;
    }catch(Derived d2){
        cout << "Derived class caught" << endl;
    }catch(Base b){
        cout << "Base class caught" << endl;
    }
    return 0;
}