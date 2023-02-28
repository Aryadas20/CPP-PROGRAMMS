#include<iostream>
using namespace std;

// compulsary arguement should be on left and defalut arguements should be on right side 
int moneyRecieved(int currentMoney, float factor =1.04){
    return currentMoney*factor;
}

// int strn(const char*ptr){ 
   //validate for pointers and reference variables  
//   }
int main(){
    int money = 100000;   
    cout<<"For normal: If you have "<<money<<" Rs in your bank, you will recieve "<<moneyRecieved(money)<< 
    "Rs after 1 year"<<endl; 
    cout<<"For normal: If you have "<<money<<" Rs in your bank, you will recieve "<<moneyRecieved(money, 10)<< 
    "Rs after 1 year";
    return 0; 
}