#include <iostream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;

class Car{
    public:
        string name;
        int price;
        int model;

        Car(string name,int x,int y){
            this->name = name;
            this->price = x;
            this->model = y;
        }

        void print(){
            cout << "Name: " << name << " " << price << " " << model << endl;
        }
};

bool compare(Car a, Car b){
    return a.price<b.price;
}

int main(){
    int n;
    cin >> n;
    vector<Car> v;
    for(int i = 0; i<n; i++){
        string name; 
        int x,y;
        cin >> name >> x >> y;
        Car c(name,x,y);
        v.push_back(c);
    }

    for(auto x:v){
        x.print();
    }

    cout << "************Sorting****************" << endl;
    sort(v.begin(),v.end(),compare);
    for(auto x:v){
        x.print();
    }

    return 0;
}