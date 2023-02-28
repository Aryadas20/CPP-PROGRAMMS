#include <iostream>
using namespace std;

class bankdeposits
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    bankdeposits() {}
    bankdeposits(int p, int y, int r);   // r can be 0.04,4
    bankdeposits(int p, int y, float r); // r can be 10% 20%;
    void show();
};

bankdeposits ::bankdeposits(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
};
bankdeposits ::bankdeposits(int p, int y, float r)
{ //
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
};

void bankdeposits::show()
{
    cout << "Principal amount was " << principal
         << ". return value after " << years
         << " years is " << returnvalue << endl;
};
int main()
{
    bankdeposits b1, b2, b3;
    int p, y; 
    float r;
    int R;

    // b3.show();
    cout << "Enter the value of p y and r: " << endl;
    cin >> p >> y >> r;
    b1 = bankdeposits(p, y, r);
    b1.show();

    cout << "Enter the value of p y and R: " << endl;
    cin >> p >> y >> R;
    b2 = bankdeposits(p, y, R);
    b2.show();
    return 0;
}