#include<iostream>

using namespace std;

int main(){ 
    /*
        To calculate the number of set bits
        Input:- 3 -> 0011
        Output:- 2  
        Input:- 4 -> 0100
        Output:- 1
    */
    // Method 1
    int n;
    cin >> n;

    int result = 0;
    while(n!=0){
        if(n&1){
            result++;
        }
        n = n>>1;
    }
    cout << result << endl;
       return 0;
}