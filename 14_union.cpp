#include <iostream>
using namespace std;

union food 
{
    int p;  //4 byte
    float q; //4 byte       /* union me maximum memory alot hai
    char name;  //1 bute       or fir usi se use hota hai
};

int main()
{
       
       union food rice;
       rice.p =32;             // union me hmlog eak hi value ko call kr skte hai 
       cout<<rice.p<<endl;    // dusre value ko call krne pe garbage value de dega 
    return 0;
}