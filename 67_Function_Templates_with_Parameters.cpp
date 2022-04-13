#include <iostream>
using namespace std;

// double avaragee ( int a , int b ){
//     double avg =(double)(a+b)/2;
//     return avg;
// }

template <class t1, class t2> // ye hua function with templates
double avaragee(t1 a, t2 b)
{
    double avg = (a + b) / 2;
    return avg;
}

template <class x>
void swapp(x &a, x &b)
{
    x tem = a;
    a=b;
    b=tem;
}

int main()
{
    double abhi;
    abhi = avaragee<double, double>(5, 2); // or yha function ka parameters set kr rhe hai
    cout << abhi << endl;

    double x=5 ,y=7.555;
    swapp(x,y);
    cout<<x<<"  "<<y<<endl;

    return 0;
}
