// oops classes and objects
// c++ --> initially called --> c with classes by stroustroup
// structures had limitation
// --> members are public
// --> No methods
// classes -->structures+ more
// classes --> can have methods and properties
// classes --> can make few members as private or few as public
// structures in c++ are typedef
// you can declare objects along with class declaration like this:-
// class{
// class defination
// } arya, sanvir, roy
// arya.salary = 44 makes no sense if salary is private
// nesting of members function
//  apko karne ki jaruraat nahi ham aoke ke liye kar dete hai 
// If one member function is called inside the other member function of the same class 
// it is called nesting of a member function.
// nesting of member function
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
};

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        // else{
        //     cout<<"correct binary format"<<endl;
        //     exit(0);
        // }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}