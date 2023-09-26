#include<iostream>
#include<fstream>
using namespace std;


int main(){
    // connecting our file with aout stream
    ofstream aout("F1.txt");

    //  creating a name string and filling it with string entered by  the user; 
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    // writing a string to the file;
    aout<<"My name is : " + name;
    aout.close(); 

    ifstream  ain("F1.txt");
    string content;
    // ain>>content;
    getline(ain, content);
    cout<<"The content of this file is: "<<content;
    ain.close();
 return 0;
}