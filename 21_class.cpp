#include <iostream>
using namespace std;

class worker
{
    private:
        int a, b, c;
    public:
        int d , e;
    void setdata(int a1, int b1, int c1);
    void getdata(){
            cout<<"the value of a : "<<a<<endl;        
            cout<<"the value of b : "<<b<<endl;
            cout<<"the value of c : "<<c<<endl;
            cout<<"the value of d : "<<d<<endl;   
            cout<<"the value of e : "<<e<<endl;        
    }
};

void worker :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

   worker abhishek;
   //abhishek.a = 2121232;   a ko bhr change nhi kr skte because ye private hai 
   abhishek.d =65;
   abhishek.e  = 5555; 
   abhishek.setdata(1,212,454);
   abhishek.getdata();


    return 0;
}