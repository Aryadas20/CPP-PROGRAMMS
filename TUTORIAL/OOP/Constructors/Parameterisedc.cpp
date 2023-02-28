#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int, int);
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)      // This is parameterised constructor as it takes 2 parameters 
{
    a = x;
    b = y;
    // cout<<"Hello "<<endl;
};


int main(){
    complex a(4, 6);  //Implicit call
    
    // Explicit call
    complex b = complex(5, 7);
    a.printNumber(); 
    b.printNumber();  
    return 0;
}