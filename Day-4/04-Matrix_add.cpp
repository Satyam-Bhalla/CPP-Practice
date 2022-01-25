#include <bits/stdc++.h>

using namespace std;


int main(){
    int r, c, a[100][100],b[100][100],sum[100][100],i,j;
    cout << "Enter the number of rows between 1-100: ";
    cin >> r;
    cout << "Enter the number of cols between 1-100: ";
    cin >> c;
    cout << endl << "Enter the elements of first matrix:" << endl;
    // Take input in 2D array
    for(i = 0;i<r;i++){
        for(j=0;j<c;j++){
            cout << "Enter element a "<< i+1 << j+1 << endl;
            cin >> a[i][j];
        }
    }
    for(i = 0;i<r;i++){
        for(j=0;j<c;j++){
            cout << "Enter element b "<< i+1 << j+1 << endl;
            cin >> b[i][j];
        }
    }
    
    // Adding the matrix
    cout << endl << "Sum of 2 matix is" << endl;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j]+b[i][j];

    // Display the matrix
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            cout << sum[i][j] << " ";
            if(j==c-1){
                cout << endl;
            }
        }

    }
    return 0;
}