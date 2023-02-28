#include<iostream>
using namespace std;
// not recommended to use below lines with inline function 
    // static int c=0;
    // c = c + 1;
    // return a*b+c;
inline int product(int a, int b){
    // static int c=0; this executes only once 
    // c = c + 1; Next time this function is run, the value of c will be retained 
    // return a*b+c;
    return a*b;
}

int main() {
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"The product of a and b is:- "<<product(a, b)<<endl;
    cout<<"The product of a and b is:- "<<product(a, b)<<endl;
    cout<<"The product of a and b is:- "<<product(a, b)<<endl;
    cout<<"The product of a and b is:- "<<product(a, b)<<endl;
    cout<<"The product of a and b is:- "<<product(a, b)<<endl;
      
    return 0;  
}