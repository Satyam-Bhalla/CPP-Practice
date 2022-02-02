#include<bits/stdc++.h>

using namespace std;

bool compare(pair<string,int> a, pair<string,int> b){
    // IF price is same than sort lexicographically
    if(a.second==b.second) return a.first<b.first;
    // else sort by price
    return a.second < b.second;
}


int main(){
    // int x,y;
    // cin >> x >>y;
    // pair<int,int> p;
    
    // Ways of creating a pair
    // p = {x,y}; // 1st way

    // p = make_pair(x,y); //2nd way
    
    // p.first = x;
    // p.second = y;


    // cout << p.first << endl;
    // cout << p.second << endl;


    int n;
    cin >> n;

    vector<pair<string,int>> v;
    for(int i=0;i<n;i++){
        string name;
        int price;
        cin >> name >> price;

        v.push_back(make_pair(name,price));
    }
    cout << "*************************" << endl;
    
    sort(v.begin(),v.end(),compare);

    // Looping over a vector
    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    }


    return 0;
}