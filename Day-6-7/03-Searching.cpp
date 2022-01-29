#include <bits/stdc++.h>

using namespace std;

// O(n)
int linear_search(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// O(log(n))
int binary_search(int arr[],int start, int end,int key){
    if(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return binary_search(arr,start,mid-1,key);
        }
        if(arr[mid]<key){
            return binary_search(arr,mid+1,end,key);
        }
    }
    return -1;
}



int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter the element to search: " << endl;
    cin >> key;

    // int result = linear_search(arr,n,key);
    int result = binary_search(arr,0,n-1,key);

    if(result != -1){
        cout << "Element found at index " << result << endl;
    }else{
        cout << "Element not found"<< endl;
    }


    return 0;
}