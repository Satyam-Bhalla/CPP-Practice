#include<iostream> 
#include<cstring> // for string class 
using namespace std; 
int main() 
{ 
    string str = "learn and grow and learn fast"; 
    cout << "The initial string is : "; 
    cout << str << endl; 
    str.resize(13); 
    cout << "The string after resize operation is : "; 
    cout << str << endl; 
    cout << "The capacity of string is : "; 
    cout << str.capacity() << endl; 
    cout<<"The length of the string is :"<<str.length()<<endl; 
    str.shrink_to_fit(); 
    cout << "The new capacity after shrinking is : "; 
    cout << str.capacity() << endl; 

    string::iterator it; 
    string::reverse_iterator it1; 
    cout << "The string using forward iterators is : "; 
    for (it=str.begin(); it!=str.end(); it++) 
        cout << *it; 
    cout << endl; 
    cout << "The reverse string using reverse iterators is : "; 
    for (it1=str.rbegin(); it1!=str.rend(); it1++) 
        cout << *it1; 
    cout << endl; 

    string str1 = "learn grow and explore"; 
    string str2 = "learn grow"; 
    char ch[80]; 
    str1.copy(ch,13,0); 
    cout << "The new copied character array is : "; 
    cout << ch << endl << endl; 
    cout << "The 1st string before swapping is : "; 
    cout << str1 << endl; 
    cout << "The 2nd string before swapping is : "; 
    cout << str2 << endl; 
    str1.swap(str2); 
    cout << "The 1st string after swapping is : "; 
    cout << str1 << endl; 
    cout << "The 2nd string after swapping is : "; 
    cout << str2 << endl; 

    return 0;
} 



