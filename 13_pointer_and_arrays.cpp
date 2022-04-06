#include <iostream>
using namespace std;

int main()
{
    int marks[] = {32,65,98,74,56,15,19};
    int*a = marks;                                   //yha ham arrays ka value ko pointer me dal rhe hai 
 cout<<"the value of p is"<<*a<<endl;
 cout<<"the value of p is"<<*(a+1)<<endl;
 cout<<"the value of p is"<<*(a+2)<<endl;
 cout<<"the value of p is"<<*(a+3)<<endl;
 cout<<"the value of p is"<<*(a+4)<<endl;
 cout<<"the value of p is"<<*(a+5)<<endl;
 cout<<"the value of p is"<<*(a+6)<<endl;   
    return 0; 
}