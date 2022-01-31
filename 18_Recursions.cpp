#include <iostream>
using namespace std;

int factorial(int n){
    if (n<=1){                  // iisi ko recurision bolte hai 
        return 1;               // agr yha pe if nhi lgate to ye wrong  value deta 
    }
    return n* factorial(n-1);
}

int main()
{
    int a;
    cout<<"the the no :-"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is :   "<<factorial(a);
    return 0;
}