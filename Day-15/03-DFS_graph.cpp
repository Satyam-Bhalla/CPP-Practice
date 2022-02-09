#include <bits/stdc++.h>

using namespace std;

// For undirected graph
void add_edge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}


void dfs_check(int u,vector<int>adj[], vector<bool> &visited ){
    visited[u] = true;
    cout << u <<  " ";
    for(int i=0;i<adj[u].size();i++){
        // check if the ith index in the uth vector is visited or not
        if(visited[adj[u][i]]==false){
            dfs_check(adj[u][i],adj,visited);
        }
    }
}
void DFS(vector<int> adj[],int V){
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            dfs_check(i,adj,visited);
        }
    }
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