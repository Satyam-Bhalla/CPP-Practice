#include <iostream>

using namespace std;

template <class T>
class Calculator{
    T x;
    T y;
    public:
        Calculator(T a,T b){
            x = a;
            y = b;
        }

        T add(){
            return x+y;
        }

        T sub(){
            return x-y;
        }

        T mul(){
            return x*y;
        }

};

int main(){
    Calculator<double> c(10.3,20.6);

    cout << c.add() << endl;
    cout << c.mul() << endl;
    cout << c.sub() << endl;
    
    return 0;
}