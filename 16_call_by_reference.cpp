#include <iostream>
using namespace std;

void swapreference( int &a, int &b){                       // yha pe value copy nhi ho rha hai yha pe adress pas  ho rha hai
                           
    int tem = a;                        
    a=b;                   
    b=tem;                 
}

int main()
{
    int x=4, y=8;
    cout<<"the value of x is :-"<<x<<endl;
    cout<<"the value of y is :-"<<y<<endl;
    swapreference(x,y);                                      //yha pe homlog adress pass krte hai 
    cout<<"the value of x is :-"<<x<<endl;                   // is liye yha value change ho jta hai 
    cout<<"the value of y is :-"<<y<<endl;          
    return 0;
} 