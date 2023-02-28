#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout<<"copy constructor called ";
        a = obj.a;
    }
    /*when no copy constructor is found, compiler supplies its own copy constructor */

    void display();
    // {
    //     cout << "the number for this object is " << a << endl;
    // }
};
void Number::display()
{
    cout << "the number for this object is " << a << endl;
};
int main()
{
    Number x(4), y(1), z(24),Z2,Z3;
    x.display();
    y.display();
    z.display();
 
    Number Z1(x);  //copy constrcutor invsoked 
    Z1.display();


    Z2 = z; // copy constructor not called 
    Z2.display();   

    Number z3 = z;  //copy constrcutor invoked 
    Z3.display();

    // Number A(x,y,z);
    // Z1.display();
    // z1 should exactly resembles z or y or x;
    return 0;
}