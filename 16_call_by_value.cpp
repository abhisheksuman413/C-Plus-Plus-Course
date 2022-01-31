#include <iostream>
using namespace std;

void swap( int a, int b){  //temp a  b                 //herw value of actual parameter will be copied to formal parameters
                           //  4  4  8         // and these two different parameters store value in different location
    int tem = a;                           //
    a=b;                   //  4  8   8
    b=tem;                 //  4  8   4
}

int main()
{
    int x=4, y=8;
    cout<<"the value of x is :-"<<x<<endl;
    cout<<"the value of y is :-"<<y<<endl;
    swap(x,y);                                      // yha pe value change nhi hoga kuy ki yha pe value copy hota hai
    cout<<"the value of x is :-"<<x<<endl;          // isko hmlog call by value bolte hai
    cout<<"the value of y is :-"<<y<<endl;          //value swap krne ke lye hmlog ko iske adress ka use krna pdta hai
    return 0;
}