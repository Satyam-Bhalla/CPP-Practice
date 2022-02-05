#include <iostream>

using namespace std;

int main(){
    int n;
    int result = 0;
    cin >> n;
    result = 0;
    // Removes the last set bit, So the number of times it removes the set bit
    // becomes the total number of set bits
    while (n > 0)
    {
        n = n & (n - 1); // 3 -> 0011&0010 -> 0010&0001 -> 0000
                         // 9 -> 1001&1000 -> 1000&0111 -> 0000
                         // 7 -> 0111&0110 -> 0110&0101-> 0100&0011 -> 0000
        result++;
    }
    cout << result << endl;
    // Method 3
    cout << __builtin_popcount(7);
}