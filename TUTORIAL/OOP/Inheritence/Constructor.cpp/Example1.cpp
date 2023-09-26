#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/

class base1
{
    int data1;

public:
    // base();
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printData1(void)
    {
        cout << "The value of data1    is: " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    // base();
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printData2(void)
    {
        cout << "The value of data2    is: " << data2 << endl;
    }
};

class Derived : public base2, public base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : base2(b), base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printdata(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived1 is: " << derived2 << endl;
    }
};
int main()
{
     Derived arya(1, 2, 3, 4);
     arya.printData1();
     arya.printData2();
     arya.printdata();
    return 0;
}