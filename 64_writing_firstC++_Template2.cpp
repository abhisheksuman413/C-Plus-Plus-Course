#include <iostream>
using namespace std;

template <class t>
class weight
{
private:
    t kg;

public:
    void setdata(t x)
    {
        kg = x;

       
    }

    t getdata(){

        return kg;
    }
};

int main()
{

    weight<int> abhi;

    abhi.setdata(55);
    cout<<abhi.getdata()<<endl;

    weight <double> sum;

    sum.setdata(55.5);
    cout<<sum.getdata()<<endl;

    return 0;
}