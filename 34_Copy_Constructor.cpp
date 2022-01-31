#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // agr yha pe copy constructor ko commentout kr dege to
    // koi error nhi aayega kuy ki wha pe fir
    //  When no copy constructor is found, compiler supplies its own copy constructor
    number(number &abhi)
    {
        cout << "yha pe copy constructor call hua hai " << endl;
        a = abhi.a;
    }
    void display()
    {
        cout << "the value for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(131), z2;
    z.display();
    x.display();
    y.display();

    // yha pe z1 z(x ya y ) caopy ho rha hai

    // copy constructor invoked nhi hoga jb object phle hi bnya ho but same line me object bnate hai to copy constructor invoked hoga 

    number z1(z); // yha copy constructor invoked hoga
    z1.display();

    z2 = x; // yha copy constructor invoked nhi hoga
    z2.display();

    number z3 = z; // yha pe constructor invoked hoga
    z3.display();

    return 0;
}