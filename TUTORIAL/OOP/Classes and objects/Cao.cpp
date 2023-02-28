#include<iostream>
using namespace std;

class employee
{
    private:
       int a, b, c;
    public:
       int d, e;
       void setdata(int a1, int b1, int c1); //declaration
       void getdata(){
           cout<<"The value of a is"<<a<<endl;
           cout<<"The value of b is"<<b<<endl;
           cout<<"The value of c is"<<c<<endl;
           cout<<"The value of d is"<<d<<endl;
           cout<<"The value of d is"<<e<<endl;
       }
};

void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee harry;
    // harry.d = 24; this will throw error as a is private 
    harry.d = 24;
    harry.e = 18;
    harry.setdata(2, 4, 6);
    harry.getdata();
    return 0;
}
