#include <iostream>
#include <math.h>
using namespace std;

class h
{
    int x , y;
    public:
        h(int a, int b)
        {
            x=a;
            y=b;
        }
        void print(h p2)
        {
            double dis;
            dis=sqrt(pow((x-p2.x),2)+pow((y-p2.y),2));
            cout<<"the distance is "<<dis<<endl;
        }
};

int main()
{
    
    h w(21,69);
    h e(111,12);
    w.print(e);
    return 0;
}