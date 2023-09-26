#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "harry bhai";
    string st2;
    // opening files using constructor and writing it
    // ofstream out("File.txt");  write operation
    // out<<st;

    // opening files uisng constructor and reading it
    ifstream in("F2.txt"); // read operations
    // in >> st2;
    getline(in, st2);  // getline used to print all the words of a lines;
    cout << st2;
    return 0;
}
/*
The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase

There are 2 ways to open a file in c++, you will  have to open it. Primarily, there are 2 ways to open a file:
1.using constructors
2.using the member function open() of the class

*/