#include<iostream>
using namespace std;

int main(){

    int a= 4;
    int *b = &a;
    cout<<b;
    

    // & --->(address of) operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
    
    //* ---> (value of)dereference operator
     cout<<"The address of a is"<<*b<<endl;
    

    

    
}