#include <iostream>
using namespace std;

class worker
{
    int id;
    static int count; // static use krne se value pass hota hai jse  ki abhi se suman me suman se niti me
                      //static use nhi krte to har bar value 1 hota abhi suman or niti ke liye
                      // default value yha pe change nhi hota hai usko niche change krte hai
public:
    void setdeta(void);
    void getdeta();
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
int worker ::count = 1000; // iska default value 0 rha hai isko set krna ho to yhai se set krte hai
int main()
{
    // count is the static data member of class worker
    worker abhi, suman, niti;
    abhi.setdeta();
    abhi.getdeta();

    suman.setdeta();
    suman.getdeta();

    niti.setdeta();
    niti.getdeta();
    return 0;
}