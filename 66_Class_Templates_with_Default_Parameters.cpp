#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = string>
class abhi
{
    t1 a;
    t2 b;
    t3 c;

public:
    abhi(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{

    abhi<> jii(5 , 55.5,"Dhananjay Nitu");  /* yha templates me default parameter pass kr rhr hai iss liye 
                                               eak blank templates bnye hai */
    jii.display();
    cout<<endl;

    abhi<float, string, int > suu(55.5, "Nitu Dhananjay", 5);  /*  uper templates me ham default parameter set
                                                                   kiye hai fir v yha ham custom parameter pass
                                                                   kr skte hai*/
    suu.display();

    return 0;
}