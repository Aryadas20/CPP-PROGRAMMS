#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it !=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    // 6 8 9;
    list<int> list1; // List of 0 length;
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(2);
    display(list1);

    // Removing elements from list;
    // list1.pop_front();
    // list1.remove(3);
    // list1.pop_back();
    
    // display(list1);

    // sorting the list
    // list1.sort();
    // display(list1);
    //  reversing the list;
    // list1.reverse();
    // display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";


    list<int> list2(3); // Empty list of size;
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter= 4;
    iter++;
    *iter= 7;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);
 return 0;
}