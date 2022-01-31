#include <iostream>
using namespace std;

class base
{
    protected:
    int a =10;

    private:
    int b=1232;

    public:
    void print(){
        cout<<b<<endl;
    }

};


// protected member ko kewl inherite kr skte hai usko main function me acccess nhi kr skte hai  
/*
for a procted member 
        
                         PUBLIC DERIVATION          PRIVATE DERIVATION          PROTECTED DERIVATION

1) Private members        Not inherited                Not inherited               Not inherited

2) Procted members         Protected                     Privated                    Protected

3) Public members          Public                         privated                    Protected
*/
class derived : protected base
{

    public:
    int c= a;               // yha a ko acccess kr skte hai kuy ki a base class ka protected memeber hai 


};
int main()
{
    base b1;
    derived d1;

    // cout<<b1.a;   isko access nhi kr skte kuy ki ye protected hai
    // cout<<d1.a;    isko access nhi kr skte kuy ki ye v private hai derived class me 
    cout<<d1.c<<endl;    // yha c ko print kra skte hai kuy ki ye derived class ka public member hai
    b1.print();
    // d1.print();         yha pe ye v error dega kuy ki uper derived class ka visibility mode protected me hai 
    
    return 0;
}