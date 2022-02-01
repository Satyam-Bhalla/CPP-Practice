#include <bits/stdc++.h>

using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};

class B : public A{
    private:
        int d;
    protected:
        int e;
    public:
        B(){
            cout << "b = " << b << endl;
        }
};

class C : private B{
    public:
        C(){
            cout << " b = " << b << endl;
            cout << " c = " << c << endl; // Can we access ?
            cout << " e = " << e << endl; // Can we access ?
        }
};



int main(){
    C obj;
    
    return 0;
}