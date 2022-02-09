#include <bits/stdc++.h>

using namespace std;

// For undirected graph
void add_edge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void DFS(vector<int> adj[],int V){
    vector<bool> visited(V,false);
    
}



int main(){
    int V = 5;

    // Array of vectors
    vector<int> adj[V];

    add_edge(adj,0,1);
    add_edge(adj,0,4);
    add_edge(adj,1,4);
    add_edge(adj,1,3);
    add_edge(adj,1,2);
    add_edge(adj,2,3);
    DFS(adj,V);
    return 0;
}