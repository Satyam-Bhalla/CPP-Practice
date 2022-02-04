#include <bits/stdc++.h>

using namespace std;

// Program to find the frequency of strings
void print(unordered_map<string,int> &m){
    cout << "Size of unordered map is: " << m.size() << endl;
    // map<string,int> :: iterator it;
    // for(it = m.begin(); it!=m.end();it++){
    //     cout << (*it).first << " " << it->second << endl;
    // }
    for(auto &it:m){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){
    /* Key value pair
        unique key : Value
    */

    // Red black trees are used under the hood
    // Create a unordered map
    unordered_map<string,int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        m[s]++;
    }
      
    cout << "*******************" << endl;
    print(m);
    
    return 0;
}

