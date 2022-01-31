#include <iostream>
using namespace std;

int sum(int a, int b ){

    int c =a + b ;
    return c;
}
int main()
{
    
    int num1,  num2;

    cout<<"enter the first no"<<endl;
    cin>>num1;
    cout<<"enter the 2nd no"<<endl;
    cin>>num2;
    cout<<"the sum of 1 and 2 is :-"<<sum(num1,num2)<<endl;
    return 0;
}