#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called" << endl;
    }

    void printdataBase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class contructor is called" << endl;
    }
    void printdataBsae2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{ // yha pe agr Base1 and Base2 ko swap krte hai to change hoga
    int data3, data4;

public:
    // >> niche syntex hai constructor in  mulitiple inheratrance ka  <<

    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    { // but yha pe Base1 and Base2 ke order ko change krte hai to change nhi hoga
        data3 = c;
        data4 = d;
        cout << "derived class constructor is called" << endl;
    }

    void printdataderived(void)
    {

        cout << "the value of data3 is " << data3 << endl;
        cout << "the value of data4 is " << data4 << endl;
    }
};

int main()
{
    Derived abhi(1, 2, 3, 4);
    abhi.printdataBase1();
    abhi.printdataBsae2();
    abhi.printdataderived();

    return 0;
}

/*
case 1:
class B : public A{
    >>  order of execution of constructor = first A() then B()

reason>> sbse phle base class ka constructor run hota hai is liye
         phle A() ka hua fir B() ka
};
Case 2:
class A: public B, public C{
  >>  order of execution of constructor = first B() then C() and A()

reason>> phle base class ka constructor run hota hai islye yha pe
         phle B() or C() run hoga or fir A() but B() Or C() me
         jo phle aayega wo phle run hoga islye yha be B()phle or C()
         bad me aayega
};
Case 3:
class A: public B, virtual public C{
  >>  order of execution of constructor = first C() then B() and A()

reason>> B() or C() phle aayega kuy ki ye dono base calss hai or fir
         A() ayyega but B() or C() me phle C() aayega kuy ki virtual
         base class ka preferance jda hota hai or fir B9 aayega

};

*/