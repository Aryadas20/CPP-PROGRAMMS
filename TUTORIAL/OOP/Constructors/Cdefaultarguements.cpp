#include <iostream>
using namespace std;

class simple
{
private:
    int data1;
    int data2;
    int data3;

public:
    simple(int a = 2, int b = 94, int c = 126)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void simple ::printData()
{
    cout << "The value of all 3 data is " << data1 << " , " << data2 << " , " << data3 << endl;
}
int main()
{
    simple s;
    s.printData();
    return 0;
}
