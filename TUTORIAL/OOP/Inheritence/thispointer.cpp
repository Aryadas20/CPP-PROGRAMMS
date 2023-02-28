#include<iostream>
using namespace std;
class  A
{ 
    int a;
    public:
    A & setData(int a){
        this->a = a;
        return *this;
    }
    void getdata(){
        cout<<"The values of a is: "<<a<<endl;
    }
};
int main(){
    // this is a keyword which is a pointer which points to the object which is being created which invokes
    // member function
    A a;
    a.setData(4).getdata();
    // a.getdata();
 return 0;
}