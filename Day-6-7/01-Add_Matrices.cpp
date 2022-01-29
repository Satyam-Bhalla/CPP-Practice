#include <bits/stdc++.h>

using namespace std;

class Matrix{
    public:
        int arr[3][3];
        Matrix(int m){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    arr[i][j] = (i+j)*m;
                }
            }
        }

        void display(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Matrix a + Matrix b
        Matrix operator +(Matrix b){
            Matrix res(0);
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    res.arr[i][j] = arr[i][j] + b.arr[i][j];
                }
            }
            return res;
        }

        void operator ++(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    ++arr[i][j];
                }
            }
        }


};


int main(){
    Matrix a(1);
    Matrix b(2);
    Matrix c(3);
    a.display();
    cout << "*****************************" << endl;
    b.display();
    cout << "*****************************" << endl;
    c.display();
    cout << "*****************************" << endl;

    // Overloading
    Matrix d = a+b+c;
    d.display();
    cout << "*****************************" << endl;
    Matrix e(6);
    e.display();
    cout << "*****************************" << endl;


    return 0;
}