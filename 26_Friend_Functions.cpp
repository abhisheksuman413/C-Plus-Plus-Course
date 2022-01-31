#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }                                           // Below line means that non member - sum funtion is allowed to do anything with my private parts (members)
    friend complex sum(complex o1, complex o2); // yha pe ham sum ko friend decelear krege tb hi sum private data ko nhiche access krega
    void print()
    {                                                              // asa kene se sum function iss class ka member function nhi bnega
        cout << "your no is " << a << "  +  " << b << "i" << endl; //isko niche c1. se access nhi kr skte
    }
};
complex sum(complex o1, complex o2)
{               //class ke private data ko ham class ke bhr use nhi kr skte
    complex o3; // iske liye hmko uper me friends decelear krna pdega
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3;
    c1.setnumber(3, 4);
    c1.print();

    c2.setnumber(6, 7);
    c2.print();

    //c3.sum(c1,c2)  isko yha ham ase access nhi kr skte becouse ye class ka member function nhi hai
    c3 = sum(c1, c2);
    c3.print();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sum() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/