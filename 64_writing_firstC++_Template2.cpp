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

    weight<int> abhi;   // yah same class se int le rhe hai or niche double 

    abhi.setdata(55);
    cout<<abhi.getdata()<<endl;

    weight <double> sum;    /*  yha eak hi class se int ko double done value le rhe hai yahi
                                 template ka use hai isi liye template ka use krte hai jiii*/ 

    sum.setdata(55.5);
    cout<<sum.getdata()<<endl;

    return 0;
}