#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> b(5,10); // 5 times 10
    vector<int> c(b.begin(),b.end()); ///first index and 1 index next to the last index
    vector<int> d{1,2,3,4,5};

    //Pushing elements inside vector by taking input from user
    int n = 5;
    int num;
    for(int i=0;i<n;i++){
        cin >> num;
        v.push_back(num);
    }

    cout << "You have entered " << endl;
    
     // Iterate using a loop
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // Vector methods
    cout << "Size of v vector is = " << v.size() << endl;
    cout << "Capacity of v vector is = " << v.capacity() << endl;
    cout << "Max size of v vector is = " << v.max_size() << endl; 

    cout << "Size of d vector is = " << d.size() << endl;
    cout << "Capacity of d vector is = " << d.capacity() << endl;
    cout << "Max size of d vector is = " << d.max_size() << endl;

    return 0;
}