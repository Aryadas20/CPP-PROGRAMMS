#include <iostream>
using namespace std;

class Base
{
    int Data1; // private by default and is not inheritable;
public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    Data1 = 10;
    Data2 = 20;
};

int Base ::getData1()
{
    return Data1;
}
int Base ::getData2()
{
    return Data2;
}

class Derived : public Base
{ // class is being derived publically
    int Data3;

public:
    void process();
    void getResult();

    // Base::getData1();
};

void Derived ::process()
{
    Data3 = Data2 * getData1();

};

void Derived ::getResult()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 1 is " << Data2 << endl;
    cout << "Value of data 1 is " << Data3 << endl;
};
int main()
{
    Derived dvd;
    dvd.setData();
    dvd.process();
    dvd.getResult();
    return 0;
}