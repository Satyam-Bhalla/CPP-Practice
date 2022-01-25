#include <bits/stdc++.h>

using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5,6,7,8,9,0};
    // int size = 10;
    // for(int i=0;i<size;i++){
    //     cout << arr[i] << " " << *(arr+i) << endl;
    // }

    int size2;
    cout << "How many elements you want to enter" << endl;
    cin >> size2;

    int arr2[size2];
    for(int i=0;i<size2;i++){
        cin >> arr2[i];
    }

    cout << "You entered: " << endl;
    for(int i=0;i<size2;i++){
        cout << arr2[i] << endl;
    }

    return 0;
}