#include <iostream>

using namespace std;

int main(){
    int i;
    for(i=0;i<5;i++){
        if(i==3){
            break;
        }
        cout << i << endl;
    }
    cout << "************" << endl;
    while(i<8){
        cout << i << endl;
        i++;
    }

    return 0;
}