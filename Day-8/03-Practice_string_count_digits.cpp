#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    // count the frequency of a single digit
    // hello i am in 5th std and my roll no is 21556 -> 3
    int d;
    cin >> d;

    int count = 0;
    for(int i=0;i<s.size();i++){
        if((s[i]-'0')==d){
            count++;
        }
    }
    cout << "Frequency of digit " << d << " is " << count << endl;

    return 0;
}