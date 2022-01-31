#include <iostream>
using namespace std;

//type function_name(arguments); ye syntex hai function prototype ka
//int sum(int a, int b);    this is accepteable     
//int sum(int,int);   this also acceptable
//int sum(int a,b);    this is not acceptable
int sum(int a, int b);
int main()
{
    
    int num1,num2;
    cout<<"enter the 1 n:"<<endl;
    cin>>num1;
    cout<<"enter the 2 n:"<<endl;
    cin>>num2;
    // here num1 and num2 actual parameter hai
    cout<<"the sum of 1 and 2 is :-"<<sum(num1,num2)<<endl;
    return 0;
}

    int sum(int a, int b){
        // yha pe a and b jo hai wo actual parameters num1 and num2 se value ko le rhe hai
        // yha pe a and b formal parameters hai
        int c= a + b;
        return c;
    }