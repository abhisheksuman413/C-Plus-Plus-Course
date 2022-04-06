#include <iostream>
using namespace std;
class y;
class x
{
    int val1;
    public:
    void intdata(int a){
        val1=a;
    }
    void display(void){
        cout<<val1<<endl;
    }
    friend void swap(x &,y &);
};
class y
{
    int val2;
    public:
    void intdata(int b){
        val2=b;
    }
    void display(void){
        cout<<val2<<endl;
    }
   friend void swap(x &,y &); 
};
void swap(x &a , y&b){
    int temp=a.val1;
    a.val1=b.val2;
    b.val2=temp;
}
int main()
{
    x c1;
    y c2;

    c1.intdata(5123);
    cout<<"the value before display";
    c1.display();

    c2.intdata(1231);
    cout<<"the value before display";
    c2.display();
    
    swap(c1,c2);
    
    cout<<"the value of c1 after exchange : ";
    c1.display();
    cout<<"the value of c2 after exchange : ";
    c2.display();
    



    return 0;
}