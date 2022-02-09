#include <bits/stdc++.h>

using namespace std;

void add_edge(vector<pair<int,int>> adj[],int a,int b, int wt){
    adj[a].push_back(make_pair(b,wt));
    adj[b].push_back(make_pair(a,wt));
}


int main(){
    int V = 5;

    // Array of vector of pairs
    vector<pair<int,int>> adj[V];

    add_edge(adj,0,1,10);
    add_edge(adj,0,4,20);
    add_edge(adj,1,4,30);
    add_edge(adj,1,3,40);
    add_edge(adj,1,2,50);
    add_edge(adj,3,4,60);
    add_edge(adj,2,3,70);
    return 0;
}