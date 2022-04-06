#include <iostream>
using namespace std;

int main()
{
    int a=4;
 int *ptr =&a;
    *ptr=55;
    cout<<*(&a)<<endl;
    cout<<*(ptr);;
    return 0;
}