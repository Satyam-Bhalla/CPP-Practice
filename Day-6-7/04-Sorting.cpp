#include <bits/stdc++.h>

using namespace std;

bool compare(int a,int b){
    return a<b;
}


// O(n^2)
void bubble_sort(int arr[],int n, bool (*cmp)(int,int)){
    for(int j= n-1;j>0;j--){
        for(int i=0;i<j;i++){
            // if(arr[i+1]<arr[i])
            if(cmp(arr[i+1],arr[i])){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

// Creates copies of the array
void merge(int arr[],int l,int m,int r){
    // Create copy arrays
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1],M[n2];
    for(int i=0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(int j=0;j<n2;j++){
        M[j] = arr[m+1+j];
    }


    // Compare elements from copy arrays
    int i,j,k;
    i = 0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Copy pending elements
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }

}


void merge_sort(int arr[],int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int partition(int a[],int s, int e){
    int i = s-1;
    int j = s;
    int pivot = e;
    for(j=s;j<=e-1;j++){
        if(a[j]<=a[pivot]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[pivot],a[i+1]);
    return i+1;
}


void quick_sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}



void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    cout << "Enter the number of elements: " << endl;
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // bubble_sort(arr,n,compare);
    // merge_sort(arr,0,n-1);
    quick_sort(arr,0,n-1);
    display(arr,n);

    return 0;
}