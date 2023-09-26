#include<iostream>
using namespace std;

class complex{
    int x, y;
    public:
       void setnumber(int n1, int n2){
           x = n1;
           y = n2;
       }
       void printnumber(){
           cout<<"Your number is "<<x<<" + "<<y<<" i"<<endl;
       }
};
int main(){
    complex c1,c2;
    c1.setnumber(6, 8);
    c2.setnumber(24, 32);
    c1.printnumber();
    c2.printnumber();

 return 0;  
}
