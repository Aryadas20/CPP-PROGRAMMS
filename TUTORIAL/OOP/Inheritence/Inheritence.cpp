#include <iostream>
using namespace std;
// base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int myId)
    {
        id = myId;
        salary = 34.0;
    }
};

// derived class syntax
// syntax;
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} // please fix the buggy C++ code
// {
//    class members/methods/etc...
// };

/*
1.default visibility mode is private
3.public  visibility Mode: public members of the base class becomes public members of derived class
3.private visibility Mode: public members of the base class becomes private members of derived class
base class ke private members inherit nahi hote ya nahi kar sakte;
*/

// creating a programmer base class derived from Employee  base class
class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int myproof)
    {
        id = myproof;
        languagecode = 9;
    };
    void getdata()
    {
        cout << id;
    }
};
int main()
{
    Employee arya(1), ada(2);
    cout << arya.salary << endl;
    cout << ada.salary << endl;
    Programmer skillF(1111);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getdata();   
    return 0;
}