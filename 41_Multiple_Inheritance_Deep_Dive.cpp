#include <iostream>
using namespace std;

 /*
 Synatex for inheriting in multiple inheritance

 class derivedC : visibility-mode base1, visibility-mode base2
 {
     class body of class " derivedC"
 };
 */

class base1
{
     protected:
     int base1int;
     public:
     void set_base1int(int a){
         base1int=a;
     }
};
class base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int b ){
        base2int=b;
    }
};
//>>>>>>>Niche jo class hai wo MULTIPLE INHERITE hai<<<<<<<<<<<<<<<
// Yha pe 2 se jada v base class ho skta hai isme 2 hi base class hai 
class derived : public base1, public base2{    // ye jo derived class hai base1 and base2 se inherite ho rha hai or dono publicly visibility mode me hai
    public:
    void print(){
        cout<<"the value of base1 is "<<base1int<<endl
        <<"the value of base2 is "<<base2int<<endl<<
        "and the sum of bas1 and base2 is "<<base1int+base2int<<endl;
    }
};

/*
The inherited derived class will look someting like this :   
Dtat Members:
    base1int----->Protected
    base2int----->Protected
Member Function:
    set_base1int()----->Public
    set_base2int()----->Public 
    print()-----> Public   
*/

int main()
{
    derived abhi;
    abhi.set_base1int(4454);
    abhi.set_base2int(444);
    abhi.print();
    return 0;
}     