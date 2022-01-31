#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int* b = &a;  // & is (adress of) operator
    cout<<"the adress of a is "<<&a<<endl;  // Yha pe done a ka adress print krege 
    cout<<"the adress of a is "<<b<<endl;      // & lgane se adress print hota hai

    cout<<"the value at adress b is "<<*b<<endl;       //* (value at) dereference operator
    return 0;                                          //* lgane se value print hota hai 
}