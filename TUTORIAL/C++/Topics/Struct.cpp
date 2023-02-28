// #include<iostream>
// using namespace std;

// typedef struct sn
// {
//     int id;
//     char subject;
//     float marks;
// }sn;

// int main(){
//     sn arya;
//     arya.id = 1;
//     arya.subject = 'M';
//     arya.marks = 99;
    
//     cout<<" The value is "<<arya.id<<endl;
//     cout<<" The value is "<<arya.marks<<endl;
//     cout<<" The value is "<<arya.subject<<endl;
//   return 0;
// }


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
typedef struct student{
    int  age;
    char first_name;
    char last_name;
    char standard;
    
}student;
int main() {
    student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

