#include <iostream>
using namespace std;

template< class T1, class T2>    // yha pe class v supply v  kr skte hai koi generic data type 
class abhi{
    T1 data1;
    T2 data2;
    public:
    abhi(T1 a, T2 b){
        data1 =a;
        data2 =b;
    }
    void display(){
        // cout<<"Dtata1 is  "<< data1<<" Dta2 is "<< data2<<endl;  >>> iska asa n likh kr niche jsa v likh skte hai
        cout<<"Data1 is "<<this->data1<< " Data2 is "<< this->data2<<endl;

    }

};
int main()
{
    abhi < int, string> suman(34, "Dhananjay kr ");   // yha eak stah multiple parameters le skte hai 
    suman.display();

    abhi <string , double> jii("Nitu singh" , 55.5);   // yha v eak stah multiple parameters le skte hai 
    jii.display();

    return 0;
}


/*
syntax of class templates with multipal parameter


template<class T1, class T2>
class nameOfClass{
    //body
}

*/