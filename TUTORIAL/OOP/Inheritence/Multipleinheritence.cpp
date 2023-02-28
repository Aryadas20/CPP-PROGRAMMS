#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibilty-mode base2;
// {
// class body of class "derievedc";
// }
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
        // set_base1line(int a) :: Base1();
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int * base2int - base3int << endl;
        }
};

// The inherited derived class will look something like this:
//  Data members:
//  base1line-->protected
//  base2line-->protected
// member function:
//   set_base1int();
//   set_base2int();
//    show(); all 3 public
int main()
{             // inheritence yani ki derived class ko istamal karke ap kisike member function ko access kar sakte ho
    Derived harry;
    harry.set_base1int(1);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    
    return 0;
}