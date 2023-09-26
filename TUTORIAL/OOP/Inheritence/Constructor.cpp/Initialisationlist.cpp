#include <iostream>
using namespace std;

/*
syntax for intialisation list in counstructor:
constructor (arguement-list) : intialisation section {
    assignment + other code;
}

class test{
    int a;
    int b;
    public:
    Test(int i, int j): a(i), b(j){constructor-body}
};
*/
class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2 + j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : b(j), a(i+b)  red flag this will create problems because a will be initialised 
    //  first kyunki int a pehele likha gaya hai
    test(int i, int j): a(i) 
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout<<"Value of a is "<<a<<endl;
        // cin>>a; 
        cout<<"value of b is "<<b<<endl;
        // cin>>b;

    }
};

int main()
{
    test t(2, 6);
    
    return 0;
}