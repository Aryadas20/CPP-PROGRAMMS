#include <iostream>  //  memory allocation and array
using namespace std;


class Employee
{
    int id;
    static int count;
     // static member has initial value of 0 if we have to set an initial value of any 
    //  number then we have to remove static in initialisation and set count = 100 in  int employee;
    
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;   
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number: " << count << endl;
    }

    static void getcount(void){
        // static function can only have access to only static function and static variables
        // ex- cout<<id; it will show an error 
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is the static data member of class employee 
int Employee :: count;  // default value is 0;

int main()
{
    Employee inf,arya,sanvir;
    // count is the static data memeber of class employee;
    // inf.id = 1;
    // inf.count= 2; cannot do this as id and cout are private members
    inf.setData();
    inf.getData();
    Employee::getcount();

    arya.setData();
    arya.getData();
    Employee::getcount();


    sanvir.setData();
    sanvir.getData();
    Employee::getcount();


    return 0;
}