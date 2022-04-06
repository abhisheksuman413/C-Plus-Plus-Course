#include <iostream>
using namespace std;

int & swapreference( int &a, int &b){                       
                           
    int tem = a;                           
    a=b;                   
    b=tem;   
    return  a;              
}

int main()
{
    int x=4, y=8;
    cout<<"the value of x is :-"<<x<<endl;
    cout<<"the value of y is :-"<<y<<endl;
    swapreference(x,y)=6555;                              
    cout<<"the value of x is :-"<<x<<endl;                  
    cout<<"the value of y is :-"<<y<<endl;          
    return 0;
} 