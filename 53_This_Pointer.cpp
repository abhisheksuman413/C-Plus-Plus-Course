#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A & setdata(int a){         // yha pe ye return by reference ho rha hai
        /* a=a    local varible or class varible jb
         same hota hai to garbage value milta hai
         isliye hamlog this pointer ka use krte hai 
         or this pointer ye hota hai >>>  this->a=a   <<<
         */

        this->a=a;    // ye this pointer hai 
        return *this;     //isko pointer return krne ke liye use krte hai 


    }
    void getdata(){
        cout<<" the value of a is "<<a<<endl;
    }
};

int main()
{
    
    A abhi;
    abhi.setdata(55).getdata();
    // abhi.getdata();

    return 0;
}

/*
this is a keyword which is a pointer to the 
object which is being created / which invoke
the member function 
*/