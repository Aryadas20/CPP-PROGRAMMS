#include<iostream>
using namespace std;

//function prototype
//type function-name(arguememts)
// int sum(int a, int b); //--> acceptable
// int sum(int a, b); //--> not acceptable
int sum(int , int); //--> accepstable
void g();

int main(){
    int num1, num2;
    cout<<"Enter the first values"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();
     return 0;
} 

int sum(int a, int b)
{
     int c = a+b;
     return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}