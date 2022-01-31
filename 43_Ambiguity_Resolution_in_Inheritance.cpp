#include <iostream>
using namespace std;

class base1{
    public:
    void print(){
        cout<<"hello sir "<<endl;
    }
};
class base2{
    public :
    void print(){
        cout<<"Nmste sir "<<endl;
    }
};
class derived : public base1, public base2{
    public :  
    /*
    agr derived class me v same name se function bna 
    dete hai or eak or same name se function bna ke 
    uske andr base class derived kra dete hai to error aayega 
    kuy ki function overlod ho jyega 
     
     Or agr derived class me eak function hai base 
     class ke function ke same name se to fir 
     derived class ka function run krega 
     kuy ki usko priority milega
    */
    // void print(){
    //     cout<<"Abhishek suman bhut aacha gata hai"<<endl;
    // }
    void print(){
        base1::print();     // yha agr base2 krte to Nmse sir print hota  
    }
};
int main()
{
    base1 nitish;
    nitish.print();     //yha hello sir print hoga 

    base2 suman;
    suman.print();     // yha Nmste sir print hoga

    derived abhi;
    abhi.print();     // yha hello sir print hoga

    return 0;
}
/*
Ambiguity me kuch khas nhi hota hai agr eak hi name se 
function bnte hai sare  base class me to usko derived 
class ke object se nhi call kr skte hai agr call kiye 
to error aayega {or agr derived class me v same name se 
function ho jis name se sare base class me hai to
fir derived class ka function hi call hoga 
koi base class ka function nhi call hoga } 
 iske liye hmlog ko derived class ke ander 
same name(jo base class me function ka name hai ) se function 
banana pdega or uske andr base class ko  describe krna pdega 
jiska syntex ye hai >>>>>>

>>>>>yha sare base class me*** print() ***name se function hai<<<<<<<<<<

class derived : public base1, public base2,public base3{

    public:

    void print()
    {
        {{jo base class ke function ko call krna hai }} :: print();
    }
}
*/