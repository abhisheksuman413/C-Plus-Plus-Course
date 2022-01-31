#include <iostream>
using namespace std;

typedef  struct worker //typedef ka use kr hmlog worker ko short fourm me likh skte hai
{
    int id;
    char favchar;

    float salary;
} ep;               // yha pe jo name dege whi shortfourm me use krna pdega

int main()
{
     ep abhi;            //yha pe abhi jsa or v data type bna skte hai  //yha ep use kiye hai because uper me short fourm use kr liye hai
    abhi.id = 22;
    abhi.favchar = 'a';
    abhi.salary = 311.64;
    cout<<abhi.salary<<endl;
    cout<<abhi.id<<endl;
    cout<<abhi.favchar<<endl;
    return 0;
}