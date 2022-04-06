#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public: 
    //Case1
    // Test(int i, int j) : a(i), b(j)  >>  ye run hoga 
    //Case2
    // Test(int i, int j) : a(i), b(i+j) >> ye v run hoga or yha b me i or j ka vale add ho jyega 
    //Case3
    // Test(int i, int j) : a(i), b(2*j) >> ye v run hoga or yha b me j*2 ho kr value jyega
    // Case4
    // Test(int i, int j) : a(i), b(a+j) >> ye v run ho jyega yha be a or j ka value add ho jyega 
    // Case5
    // Test(int i, int j) : b(j), a(i+b) >> ye run hoga a ka garbage vale aayega becouse uper me 
                                        // hmne order me a ko phle rkha hai or b ko bad me  or 
                                        // jo chij phle decelear hoti hai wo phle initilize hoti hai 
                                        // isliye problem creat hoga yha pr agr b ko uper me phle likh dege to 
                                        // fir problem nhi hoga 
    // Test(int i, int j) : a(i), >> yha pe isko b(j) constructor ko body ke andr  v dal skte hai 

    Test(int i, int j) : a(i), b(j)
    {

        cout << "constructor is called" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{

    Test abhi(4, 5);
    return 0;
}

/*
Syntax for initialization list in Constructor:

Constructor (aurgument-list) :  initilization-section
{
    assignment + oteher code
}

class Test{
    int a;
    int b;
    public:
    Test(int i , int j) : a(i), b(j){constructor-body}

    >>>> asa kre se hamlog constructor ko same line me hi
         decelear kr dege  yha a=i or b=j ho gaya
};

>>>> initialization eak class ke data member ko value dene ka trika hai or kuch nhi <<<<
*/