#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int* b = &a;  // & is (adress of) operator
    cout<<"the adress of a is "<<&a<<endl;  // Yha pe done a ka adress print krege 
    cout<<"the adress of a is "<<b<<endl;      // & lgane se adress print hota hai

    cout<<"the value at adress b is "<<*b<<endl;       //* (value at) dereference operator

                                                       //* lgane se value print hota hai 
      // pointer to pointer
     

      int** c = &b;
    cout<<"the adress of b is "<<&b<<endl;
    cout<<"the adress of b is "<<c<<endl;

cout<<"the value at adress c is"<<*c<<endl;
    cout<<"the value at adress value_at(value_at(c))  is "<<**c<<endl;


    return 0;                                          

}