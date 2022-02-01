#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> b(5,10); // 5 times 10
    vector<int> c(b.begin(),b.end()); ///first index and 1 index next to the last index
    vector<int> d{1,2,3,4,5};

    // Iterate using a loop
    for(int i=0;i<d.size();i++){
        cout << d[i] << " ";
    }
    cout << endl;

    // vector<int>::iterator it
    for(auto it=d.begin();it!=d.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    // For each loop
    for(int x:d){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}