#include <iostream>
using namespace std;

class x 
{                       //   constructor or class ka name same hona jruri hai 
    int a, b;          //   constructor special function jo class ke name se bnta hai 
    public:           //  this is used to initializ the object of its class
    x(void);         //  yha pe x constructor hai 
                    //  constructor automatically invoked(called) ho jta hai jb object creat hota hai 

    void print(){
        cout<< " your no is "<<a<<"  +  "<<b<<"  i  "<<endl;
    }          
};                    
                                // or ye <<< default constructor >>> hai becouse ye koi parametor ko accept nhi krta hai 
x :: x(void){                  // yha pe constructor ko describe kr rhe hai 
    a=10;                      // yhan pe cout v print ho jyega becouse jo v canstructor me krege wo called hoga 
    b=33;
    cout<<"Abhishek suman is handsom"<<endl;
}

int main()
{
    x b,c,d,e,f,g,h,p;                    // yha pe constructor ko call kr rhe hai 
    b.print();
    c.print(); 
    d.print();
    e.print();
    f.print();
    g.print();
    h.print();
    p.print();
    return 0;
}   

/*   ******charcteristics of constructor**********


1.   it should be declared in public class
2.   they are automatically invoked whenever the object is created
3.   they cannot return values and they do not have return type
4.   it can have default argument
5.   we cannot refer to their adress
 */