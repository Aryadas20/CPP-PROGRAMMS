#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a,b;
public :
  void setvalue (int x,int y)
    {
        a =x; 
        b=y;
    }
   friend  int  distance (point A,point B);
};

int distance (point A,point B)
{

 float c = sqrt ((A.a- B.a)*(A.a- B.a)+ (A.b- B.b)*(A.b- B.b));
  return c;
}

// distance between them is 0((1, 1),(1, 1));
// distance between them is 5((0, 1),(0, 6));
// distance between them is 5((0, 1),(0, 6));
int main()
{
    int x,y;
    cout << "enter your 1st coordinate: ";
    cin>>x>>y;
    point C,D;
    C.setvalue (x,y);
    cout << "enter your 2nd coordinates: ";
    cin>> x>>y;
    D.setvalue (x,y);
    int c =distance (C,D);
    cout << " The distance between the two respective points is: "<< c;


}