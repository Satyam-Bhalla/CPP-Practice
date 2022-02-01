#include <bits/stdc++.h>

using namespace std;

// Dynamic Arrays are  known as vectors
class Vector{
    // Data members
    int *arr;
    int cs;
    int maxSize;
    public:
        Vector(int defaultSize=4){
            maxSize = defaultSize;
            cs = 0;
            // Dynamically allocate memory at run time
            arr =  new int[maxSize];
        }

        void push_back(int data){
            if(cs==maxSize){
                // Create a copy of initial array
                int *oldArr  = arr;

                // Double the size of current array
                arr = new int[2*maxSize];
                maxSize = 2*maxSize;

                // Copy elements from old to new array
                for(int i=0;i<cs;i++){
                    arr[i] = oldArr[i]; 
                }

                delete [] oldArr;
            }
            arr[cs] = data;
            cs++;
        }

        bool empty(){
            return cs == 0;
        }


        void pop_back(){
            if(!empty()){
                cs--;
            }
        }

        int size(){
            return cs;
        }

        int capacity(){
            return maxSize;
        }

        void print(){
            for(int i=0;i< cs ;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        int& operator[](int i){
            return arr[i];
        }


};

int main(){
    Vector v;
    v.push_back(2);
    v.push_back(3);

    cout << v[0] << endl; // 1
    v.print(); // 2
    v[0] = 20;
    v.print(); // 3
    cout << "Size is " << v.size() << " and capacity is " << v.capacity() << endl;

    for(int i=0;i<10;i++){
        v.push_back(i*i);
    }
    v.print();
    cout << "Size is " << v.size() << " and capacity is " << v.capacity() << endl;
    return 0;
}