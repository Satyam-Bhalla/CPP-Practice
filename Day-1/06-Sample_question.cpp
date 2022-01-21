#include<iostream>
using namespace std;

int main(){
    // n => n natural numbers 3 
    int n;
    long long int sum=0;
    cout << "Enter the value of n: " << endl;
    cin >> n;


    // Sol 1 -> O(n)
    if(n>0){
        for(int i=1;i<=n;i++){
            sum += i;
        }
    }
    cout << "Sum of n natural numbers is: " << sum << endl;
    sum = 0;
    // Sol 2 -> O(1)
    sum = (n*(n+1))/2;

    cout << "Sum of n natural numbers is: " << sum;

}