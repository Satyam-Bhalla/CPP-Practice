#include <iostream>
#define ll long long
using namespace std;

/*
    1111 -> 0-15   
    8421

    & -> 1 1 => 1, 0 otherwise
    | -> 0 0 => 0, 1 otherwise
    ! -> 0 => 1,   0 otherwise
    ^ -> 1 1 or 0 0 => 0 and 1 otherwise

    5 ^ 5 -> 0101^0101  -> 0
    5 ^ 5 ^ 6 -> 0000^0110 -> 0110 = 6


    2^3 = 8 (^ represents power)
    3 -> 0011
        2*2^0 + 2*2^1
    2^4 = 16
    4 = 0100
        2^0*0 +
        2^1*0 +
        2^2*1 +
        2^3*0

    
*/


ll fastExpo(ll a,ll b){       // a = 2, b = 3
    ll p =a, ans = 1;         // p = 2, ans = 1
    while(b>0){               // b = 3
        if(b&1){              // 0011&0001 -> 0001 | 0001&0001 -> 0001
            ans *= p;         // ans = 2 | ans = 2*4 = 8
        }
        p *= p;               // p = 2*2 = 4 | p = 4*4 = 16
        b = b>>1;             // b = 0011 -> 0001 | 0001 -> 0000
    }
    return ans;
}


int main(){
    /* To find a power b in log n time
     Input:- 2 3
     Output:- 8   
     Solution:
      Step 1:- Check if any bit is set
     Step 2:- check if last bit is set
     Step 3:- Right shift by 1

    2 power 3
    0011&0001 => 0001 => ans = 2, p=p*p => 2*2 = 4, p=4
    0001&0001 => 0001
*/
    ll a,b;
    cin >> a >> b;
    cout << fastExpo(a,b);
    return 0;
}