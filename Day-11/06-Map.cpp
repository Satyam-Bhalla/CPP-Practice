#include <iostream>
#include <map>

using namespace std;

void print(map<string,int> &m){
    cout << "Size of map is: " << m.size() << endl;
    map<string,int> :: iterator it;
    for(it = m.begin(); it!=m.end();it++){
        cout << (*it).first << " " << it->second << endl;
    }
}

int main(){
    /* Key value pair
        unique key : Value
    */

    // Red black trees are used under the hood
    // Create a map
    map<string,int> m;

    // Insert Data in the map
    m["Gagan"] = 90;
    m["Ashutosh"] = 80;
    m["Pallavi"] = 85;
    m.insert({"Aditya", 88});
    m["Ashutosh"] = 70; // O(Log n)
    
    // map<string,int>::iterator it;
    auto it = m.find("Aditya"); // m["Aditya"]
    if(it == m.end()){
        m["Aditya"] = 88;
    }else{
        cout << it->first << " " << it->second << endl;
        m.erase(it); // O(log(n))
    }
    
    cout << "*******************" << endl;
    print(m);
    
    return 0;
}

