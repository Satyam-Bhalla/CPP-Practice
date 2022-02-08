#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack{
    private:
        vector<T> v;
    public:
        void push(T data){
            v.push_back(data);
        }
        
        bool empty(){
            return v.empty();
        }

        void pop(){
            if(!v.empty()){
                v.pop_back();
            }
        }

        T top(){
            return v.back();
        }


};



int main(){
    Stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i*i);
    }

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl << "************************" << endl;

    Stack<char> c;
    for(int i = 0;i<26;i++){
        c.push('a'+i);
    }

    while(!c.empty()){
        cout << c.top() << endl;
        c.pop();
    }
    cout << endl;

    return 0;
}