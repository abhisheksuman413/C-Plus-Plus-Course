#include <iostream>
using namespace std;

class abhi
{
    int data1 , data2;
    public:
    
     abhi(int a, int b=232)         // yha pe B me hamlog Default Arguments dal rhe hai or isi ko Constructors With Default Arguments bolte hai  
    {
        data1=a;
        data2=b;
    }

    void print()
    {
        cout<<"the no is "<<data1<<" + "<<data2<<"  i  "<<endl;
    }
};

int main()
{
    abhi c1(54,65);
    c1.print();


    abhi c2(54);
    c2.print();
    return 0;
}