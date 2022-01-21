#include <iostream>

using namespace std;

int main(){
    int a=7,b=2;
    /*
        if(condition is true){
            run if block
        }else{
            run else block
        }

        if(condition is true){
            run if block
        }else if(if this condition is true){
            run else if block
        }else{
            run else block
        }

    */
   // a = 7,b=2
   if((a%b==1) || (a<b)){    //  0||1 = 1
       cout << "Inside if block" << endl;
   }else{
       cout << "Inside else block" << endl;
   }

   int number;
   char c;
   cin >> number >> c;
   cout << "Number is: " << number << " and ascii of character is " << (int)c << endl;
   
    if(number%2==0){
        cout << "Even number" << endl;
    }else{
        cout << "Odd Number" << endl;
    }

    return 0;
}

