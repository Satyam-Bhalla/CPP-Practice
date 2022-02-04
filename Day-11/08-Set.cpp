#include <bits/stdc++.h>

using namespace std;

// Program to find unique strings in sorted order
void print(set<string> &s){
    cout << "Size of set is: " << s.size() << endl;
    // Printing method 1
    for(string value: s){
        cout << value << endl;
    }
    cout << endl;
    // Printing method 2
    for(auto it = s.begin(); it != s.end();it++){
        cout << *it << endl;
    }
}

int main(){
    // Creating a set
    set<string> s;

    // Inserting data in a set
    s.insert("abc"); //log n
    s.insert("abcd");
    s.insert("abc");
    s.insert("ab");
    s.insert("bcd");

    // Searching in a set
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    }
    cout << "*******************" << endl;
    print(s);
    
    return 0;
}

