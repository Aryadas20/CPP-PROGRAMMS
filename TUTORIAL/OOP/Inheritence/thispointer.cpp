// #include<iostream>
// using namespace std;
// class  A
// { 
//     int a;
//     public:
//     A & setData(int a){
//         this->a = a;
//         return *this;
//     }
//     void getdata(){
//         cout<<"The values of a is: "<<a<<endl;
//     }
// };
// int main(){
//     // this is a keyword which is a pointer which points to the object which is being created which invokes
//     // member function
//     A a;
//     a.setData(4).getdata();
//     // a.getdata();
//  return 0;
// }

#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    Employee(int id, float salary, string name){
        this -> id = id;
        this -> name = name;
        this -> salary = salary;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main(void){
    Employee e1 = Employee(101, "Sonoo", 890000);
    Employee e2 = Employee(102, "Nakul", 59000);
    e1.display;
    e2.display;
    return 0;
}