#include <iostream>
using namespace std;

int main()
{
    float a = 33.7f;

    long double b = 33.7l;
    cout<<"the valueb of a is : "<<a<<endl;
    cout<<"the value of b is  : "<<b<<endl;
    cout<<"the size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"the side of A is :    "<<sizeof('g')<<endl;
    cout<<"the size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is : "<<sizeof(34.4L)<<endl;

    return 0;
}