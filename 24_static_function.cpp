#include <iostream>
using namespace std;

class worker
{
    int id;
    static int count; 
public:
    void setdeta(void);
    void getdeta();

    static void getcount(void)     // isko static function bolte hai 
    {
        // cout<<id;     isme kewal static varible hi use hoga islye ye error throw kr rha hai 
        cout << " the value of count is " << count << endl;
    }
};
void worker ::setdeta(void)
{ 

    cout << "enter the id  : " << endl;
    cin >> id;
    count++;
}
void worker ::getdeta(void)
{

    cout << "the id of employ is " << id << "  and ists employ no is " << count << endl;
}

int worker ::count = 1000;
int main()
{
   
    worker abhi, suman, niti;
    abhi.setdeta();
    abhi.getdeta();
    worker :: getcount();     // static function ko calss ke sath  scoprezeloution use krte hai
                             // isme objet ke sathy use nhi krte hai 

    suman.setdeta();
    suman.getdeta();
    worker :: getcount();

    niti.setdeta();
    niti.getdeta();
    worker :: getcount();
    return 0;
}