#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

public:
    int b;
};
/*For protected member:
                public derieved   private derivation    protected derivation 
1.private       Not inherited     Not inherited         Not inherited
2.protected     Protected         Private               Protected
3.public        public            private               Protecetd 

*/
class Derived : public Base{
};


int main()
{
    Base b;
    Derived d;
    // cout<<b.a;   since a is protected in both base as well as derievd class
    return 0;
}