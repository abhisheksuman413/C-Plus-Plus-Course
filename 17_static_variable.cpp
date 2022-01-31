#include <iostream>
using namespace std;

int product(int a, int b){
    static int c = 0;        //ye eak hi bar executes hoga
    c = c+1;                   // yha pe eak bar run ke bad c ka value store ho jta hai  agle bar wahi store value se start hota hai
    return a*b+c;
}

int main()
{
    int a, b;
    cout<<" enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    cout<<"the procuct is "<<product(a,b)<<endl;
    return 0;
}