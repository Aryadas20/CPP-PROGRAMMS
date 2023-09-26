#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguements"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguements"<<endl;
    return a+b+c;
}

int area(int l, int b){
    return(l * b);
}

int area(int s){
    return(s * s);
}

int main(){
   cout<<"The sum of 24 and 8 is "<<sum(24, 8)<<endl;
   cout<<"The sum of 3,7 and 6 is "<<sum(3,7, 6)<<endl;
   cout<<"The area of 8 and 4  is "<<area(8,4)<<endl;
   cout<<"The area of 8   is "<<area(8)<<endl;

   return 0;  
}