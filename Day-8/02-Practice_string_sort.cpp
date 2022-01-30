#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b){
    return a.length() < b.length();
}

int main(){
    int n;
    cout << "Enter the number of strings" << endl;
    cin >> n;
    cin.get();

    string s[100];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    cout << "*******************" << endl;
    for(int i=0;i<n;i++){
        cout << s[i] << endl;
    }

}