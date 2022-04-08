#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }

    void setdata(int a, int b){
        real=a;
        imaginary=b;
    }

};

int main()
{
    // complex c1;
    // complex *abhi=&c1;     // yha  object  ko pointer bna rhe hai 

    complex *abhi= new complex;     // uper wale ko ase v likh skte hai danimaclly memeory alloted

    (*abhi).setdata(1,3);  // yha pr bracket lgna bhut jruri hai kuy dot operator ki preference jda hota hai compare to * perator
    // c1.setdata(1,3);


    // (*abhi).getdata();   // isko  >>>  abhi->getdata(()    <<< v likh skte hai 
    abhi->getdata();       // iska matlab hua kisko point kr hai uska getdata




    // >>>>>>> Array of object  <<<<<<<<

    complex *suman = new complex[3];
    suman->setdata(55,65);
    suman->getdata();


    return 0;
}