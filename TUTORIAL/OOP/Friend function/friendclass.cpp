#include <iostream>
using namespace std;

// forward declaration

class Complex;


class calculator
{
public:
    int add(int a, int b)
    {
        return(a + b);
    }

    int sumRealcomplex(Complex, Complex);
    int sumCompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring function as friends
    // Aliter: Declaring the entire calculator class as friend ;
    // friend int calculator::sumRealcomplex(Complex , Complex );
    // friend int calculator::sumCompcomplex(Complex , Complex );
    friend class calculator ;
    
     
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealcomplex(Complex o1, Complex o2){
    return (o1.a + o1.a);
}

int calculator::sumCompcomplex (Complex o1, Complex o2){
    return (o1.b + o1.b); 
}

int main()
{
    Complex o1, o2;
    o1.setNumber(0, 1);
    o2.setNumber(1, 3);
    calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is: "<<res<<endl;
    int resc = calc.sumCompcomplex(o1, o2);
    cout<<"The sum of Comp part of o1 and o2 is: "<<resc<<endl;
    return 0;
}
