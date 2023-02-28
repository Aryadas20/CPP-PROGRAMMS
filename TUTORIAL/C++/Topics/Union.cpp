#include<iostream>
using namespace std;

union boy
{
    int rollno;
    char subject;
    float marks;
};

int main() 
{
    union boy b1, b2, b3;
    b1.rollno = 21;
    b2.subject = 'c';
    b3.marks = 12;
     cout<<b1.rollno<<endl;
    cout<<b2.subject<<endl;
      cout<<b3.marks<<endl;

return 0;
}