#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
vector<bool> v;//visited check vector

//For directed graph
void add_edge(int a,int b){
    g[a].push_back(b);

    // For Undirected graph
    // g[b].push_back(a);
}


void bfs(int u){
    queue<int> q;;
    // Push elements in queue for processing
    q.push(u);

    // Update the visited array to traverse every node once
    v[u] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout << f << " ";

        //Push all the neighbours of u in the queue
        for(auto i=g[f].begin();i!=g[f].end();i++){
            if(!v[*i]){
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}


int main(){
    int n,e;
    cin >> n >> e;
    g.assign(n,vector<int>());
    v.assign(n,false);
    
    int a , b;
    for(int i=0;i<e; i++){
        cin >> a >> b;
        add_edge(a,b);
    }

    // BFS
    for(int i=0;i<n;i++){
        if(!v[i]){
            bfs(i);
        }
    }

    return 0;
}