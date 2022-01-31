#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdeta(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void passobject(complex o1, complex o2)
    { // yha jo function bnye hai isme object ko pass kr rhe hai

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdeta(1, 3);
    c1.print();

    c2.setdeta(5, 9);
    c2.print();

    c3.passobject(c1, c2); // yha pe function me object pass kr rhe hai
    c3.print();

    return 0;
}