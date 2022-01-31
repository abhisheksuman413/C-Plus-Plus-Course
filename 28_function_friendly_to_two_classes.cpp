#include <iostream>
using namespace std;

//forward decleration of class
class y;
class x
{
    int deta;
    public:
    void setvalue(int value){
        deta=value;
    }
    friend void add(x,y);
};
class y
{
    int abhi;
    public:
    void suman(int ppp){
        abhi=ppp;
    }
    friend void add(x,y);  
};
         //<< ye function friendly dono classes ke 
void add(x o1, y o2){
    cout<<"adding the data of x and y "<<o1.deta + o2.abhi<<endl;
}

int main()
{
    x a1;
    a1.setvalue(54);

    y b1;
    b1.suman(131); 

    add(a1,b1);
    return 0;
}