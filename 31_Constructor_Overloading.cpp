#include <iostream>
using namespace std;

class abhi
{
    int a, b;

public:
    abhi(int x, int y)
    {
        a = x;
        b = y;
    }
    //    *** eak class ke ander multipal constructor ho skte hai *****

    // isi ko cnstructor overloding bolte hai
    abhi(int x)
    {
        a = x;
        b = 0;
    }
    abhi()          // ye default constructor hai  
    {
        a = 0;
        b = 0;
    }

    void print()
    {
        cout << "the no is " << a << "   +  " << b << "  i  " << endl;
    }
};

int main()
{
    abhi c1(45, 54);
    c1.print();

    //  yha pe b ka value ke liye constructor overloding ho rha hai

    abhi c2(54);
    c2.print();
    
    abhi c3;
    c3.print();

    return 0;
}