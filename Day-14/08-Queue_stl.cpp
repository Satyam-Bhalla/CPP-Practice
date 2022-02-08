#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int n = 10;
     for(int i=0;i<n;i++){
        q.push(i*i);
    }

    // Print and Pop elements from queue
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}