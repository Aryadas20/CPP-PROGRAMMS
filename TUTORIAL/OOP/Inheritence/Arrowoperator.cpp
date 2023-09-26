#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<imaginary<<endl;
    }

    void setdata(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setdata(1 , 2); is exactly same as 
    ptr->setdata(1, 54);
    ptr->getdata();




    // Array of objects;
    Complex *ptr1 = new Complex[4];
    ptr1->setdata(1, 4);
    ptr1->getdata();
 return 0;
}