#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(){
        a=0;
        b=0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(24, 12);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c;
    c.printNumber();
    return 0;
}