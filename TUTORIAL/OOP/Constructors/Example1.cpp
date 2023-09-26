#include <iostream>
using namespace std;

class point
{
    int x, y;

 public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint1()
    {
        cout << "The first point is (" << x << ", " << y << ")" << endl;
    }
    void displaypoint2()
    {
        cout << "The second point is (" << x << ", " << y << ")" << endl;
    }
    friend int distance(point A, point B);
};
// do these examples as assignment;
// distance between them is 0((1, 1),(1, 1));
// distance between them is 5((0, 1),(0, 6));
// distance between them is 69((1, 0),(70, 0));

int main()
{
    point p(2, 4); // create a function which takes 2 point objects and computes distance between those points;
    p.displaypoint1();
    point q(2, 6);
    q.displaypoint2();

    return 0;
}