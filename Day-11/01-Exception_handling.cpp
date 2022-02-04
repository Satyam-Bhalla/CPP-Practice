#include <iostream>

using namespace std;

int main(){
    int a = 1000000000;

    try {
        int *arr = new int[a*a];
        cout << "It worked!!" << endl;
    }catch(bad_alloc e){
        // Catch one exception
        cout << "Can't allocate this much memory" << endl;
        cout << "The error is " << e.what() << endl;
    }


    return 0;
}