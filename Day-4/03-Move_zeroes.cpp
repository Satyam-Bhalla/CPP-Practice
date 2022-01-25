#include <bits/stdc++.h>

using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int size = 13;
    int nums[] = {1,0,3,0,5,0,8,9,0,0,4,5,6};
                // 1 3 5 8 9 4 5 6 0 0 0 0 0

    int j = 0;
    for(int i=0;i<size;i++){
        if(nums[i]!=0){
            nums[j++] = nums[i];
        }
    }
    display(nums,size);
    for(;j<size;j++){
        nums[j] = 0;
    }
    display(nums,size);

    return 0;
}