#include <iostream>
using namespace std;

class complex; // its a forward declaration for upcoming complex class.

class calculator
{
public:
    
    int sumrealcomplex(complex, complex); // here we can't declare with integers because we dont know what variables are we gonna declare forward
    //  because the input are of another class data type.
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // friend int calculator ::sumrealcomplex(complex, complex);  >>  ye function hai <<<
    // friend int calculator ::sumcompcomplex(complex, complex);  >>   ye function hai  <<<
    //  if there are more function you can just make whole function as a friend
    // sare function ko friend bnane ke liye ham calss ko hi friend bna dege  syntex niche hai
    friend class calculator;  // yha ham calculator class ko friend bna rhe hai 
                            // iss se complex classe ke sare function ko access mil jyega 

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(2,5);
    c1.printnumber();

    c2.setnumber(6,1);
    c2.printnumber();

    calculator calc;
    int res = calc.sumrealcomplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(c1, c2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}