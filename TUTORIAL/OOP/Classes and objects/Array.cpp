#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main(){
    // Employee arya, sanvir, joy, shruti;
    // arya.setId();
    // arya.getId();
    Employee apple[4];
    for (int  i = 0; i < 4; i++)
    {
    apple[i].setId();
    apple[i].getId();
    }
    
    return 0;  
}