#include <iostream>
#include <fstream> // istream and ostream
#include <string>

using namespace std;

int main(){
    fstream myFile;
    /* 
        Modes
            1.) Read -> ios::in
            2.) Write -> ios::out
            3.) Append -> ios::app
    */
   // write
//    myFile.open("satyam.txt",ios::out); 
//    if(myFile.is_open()){
//        myFile << "Hello\n";
//        myFile << "How are you doing?\n";
//        myFile.close();
//    }else{
//        cout << "Error in opening the file" << endl;
//    }

    // Append
//     myFile.open("satyam.txt",ios::app); 
//    if(myFile.is_open()){
//        myFile << "I am a Software Developer\n";
//        myFile.close();
//    }else{
//        cout << "Error in opening the file" << endl;
//    }


   // Read
    myFile.open("satyam.txt",ios::in); 
   if(myFile.is_open()){
       string line;
        while(getline(myFile,line)){
            cout << line << endl;
        }
       myFile.close();
   }else{
       cout << "Error in opening the file" << endl;
   }
}