#include <iostream>
using namespace std;

class base 
{
    int data1;  // this data is not inheritable 
    public:
    int data2 ; 
    void setdata();   int getdata1();  
    int getdata2(); 

};
void base :: setdata(void){
    data1=100;
    data2=200;
}

int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
     
    return data2;
}


/*
yha pe hmlog agr derived class ko private bnte hai to fir 
setdata ko derived class ke object se call nhi kr skte 
kuy setdata derived class ka private mmember bn jyega 
*/
class derived : public base {               // class is being derived in publically visibility mode   

    int data3;
    public:
    void process();
    void display();

};

void derived :: process(){
    data3=data2*getdata1();
}
void derived :: display(){
    
    cout<<"value of data 1 is  :  "<<getdata1()<<endl;  /* yha pe hamlog data1 ko directely access nhi kr
                                                        skte hai becouse wo base class ka private member hai is liye hmlog getdata1
                                                       function se  call kr rhe hai. getdata1 function base class ka public member 
                                                       hai or kuy ki hmlog derived class publically bnye hai so ye function derived ka 
                                                       public member hoga    */
    cout<<"value of data 2 is  :  "<<data2<<endl;    
    cout<<"value of data 3 is  :  "<<data3<<endl;

}


int main()
{
     derived abhi;
     abhi.setdata();          // yha pe setdata ko  hmlog deriver class ke object se call kr rhe hai
     abhi.process();
     abhi.display();
    return 0;
}





/* 
inheritance me private member kv acess nhi hota hai 
private member ko acess krne ke liye 
eak function bna ke usko return krte hai tb us 
function ko acess kr skte hai 
*/