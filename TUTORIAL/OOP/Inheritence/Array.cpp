#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;
    public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void displayData(void){
        cout<<"ID of this item is: "<<id<<endl;
        cout<<"Price of the item is: "<<price<<endl;
    }
};
// 1 2 3 
// ^
// |
// |
// ptr

int  main()
{

    // int *ptr = &size;
    // int *ptr = new int[34];  matlab dynamically 34 integer store karne ki memory allocate dedo;
    // general store
    // veggies
    // Grocery  
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    int p,i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the Id and price of item "<<i+1<<": "<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    
    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<": "<<endl;
        ptrTemp->displayData();
        ptrTemp++; 
    }
    
    return 0;
}