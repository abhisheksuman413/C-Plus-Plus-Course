#include <iostream>
using namespace std;

int d = 45;

int main()
{
    int a, b, c;
    cout<<"enter the value of a\n";
    cin>>a;
    cout<<"enter the value of b\n";
    cin>>b;
    c = a+b;
    cout<<"the value of a+b is"<<c<<endl;
    cout<<"\n";
    cout<<"the globle c is"<<::d;
    return 0;
} 
//scope resolution operator is used to call the globle value and
// its symbol is ::
// here d is the globle varible