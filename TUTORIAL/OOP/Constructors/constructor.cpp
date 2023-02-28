#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    // creating constructor
    /* Constructor  is a special members function with same name as of class.
    it is used to initialize the objects of its class */
    complex(void);
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // This is default constructor as it takes no parameters
{
    a = 100;
    b = 84;
    // cout<<"Hello "<<endl;
};
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

/* Characteristics  of constructors
1.It should be declared in the public section.
2.They are automatically invoked whenever when the object is created.
3.Do not have return types and they cannot return values.
4.it can have default arguements
5.We cannot refer to address.

Harry ke notes website se:
Constructors in C++
A constructor is a special member function with the same name as the class.
The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class.
Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/