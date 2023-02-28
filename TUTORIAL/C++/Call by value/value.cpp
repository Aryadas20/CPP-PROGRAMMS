#include<iostream>
using namespace std;

//call by value;
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//call by pointer but its actually reference;
int swappointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using c++ reference variables 
// int & 
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;  
}//return a;

int main(){
    int a=2, b=1;
    // cout<<"The sum of 4 and 5 is"<<sum(a, b)<<endl;
    cout<<"Before swap"<<endl;
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    //swap(a, b); this will not swap pointers
    //swappointer(&a, &b); this will swap a and b using pointer variables;
    swapReferenceVar(a, b); //this will swap a and b using reference variables;
    cout<<"After swap"<<endl;
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    return 0;

}