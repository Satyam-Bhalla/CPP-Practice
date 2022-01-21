/*
    1.) Primitive -> Integer, Floating Point, Character, Boolean, Double, Void, Wide Character
    2.) Derived Data Types -> Function, Array, Pointer, References(Alias)
    3.) Abstract/User Defined -> Class, Structure, Union, Enumerations and Typedef

    Memory and the Number which we can store
    Character     ->  1 Byte  -> -128 to 127 -> 0-255
    Boolean       ->  1 Byte   -> 0 or 1 
    Integer       ->  4 Bytes -> 32 bits -> -2,147,483,648 to 2,147,483,647
    Float         ->  4 Bytes   -> 32 bits
    Double        ->  8 Bytes
    Void          ->  Valueless entity
    Wide Character-> 2 or 4 Bytes     

    Data type modifiers
    signed
    unsigned
    short
    long
    long long

    Examples            Memory in Bytes
    short int               2
    int                     4
    long int                4
    long long int           8
    signed int              4
    unsigned int            4
    unsigned short int      2
*/

#include <iostream>
using namespace std;
int main(){
    cout << "Size of char " << sizeof(char) << " byte." << endl;
    cout << "Size of int " << sizeof(int) << " byte." << endl;
    cout << "Size of float " << sizeof(float) << " byte." << endl;
    cout << "Size of double " << sizeof(double) << " byte." << endl;
    cout << "Size of short int " << sizeof(short int) << " byte." << endl;
    cout << "Size of long int " << sizeof(long int) << " byte." << endl;
    cout << "Size of long long int " << sizeof(long long int) << " byte." << endl;
    cout << "Size of wchar_t " << sizeof(wchar_t) << " byte." << endl;

    // Declarations and definition
    char a = 'a';
    int b = 10;
    float c = 100.2;
    wchar_t t = L'S';
    cout << sizeof(a) << " " << b << " " << c << endl;


    // Multiple declarations and definitions
    int d = 0, e, f;
    d = 15;
    cout << e << endl;

    return 0;
}