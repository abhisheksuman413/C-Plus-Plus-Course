#include <iostream>
using namespace std;

// Base class     >>> employee se hmlog new class ko jnam dege isi ko class bolte hai
class employee
{

    float salary;

public:
    int id;
    employee() {} // agr yha pe default constructor nhi bnate hai to error aayega kuy ki derived class ka jo
                  // constructor hai wo ban rha base class se so ye call krne ki kosis krega base class
                  // ke constructor ko islye default costructor bnyege
    employee(int inp)
    {
        id = inp;
        salary = 15132;
    }

    void print()
    {
        cout << "the salery of employee id  no :- " << id << " and his salery is   " << salary << endl;
    }
};

// Derived class Syntex
/*  
class {{Derived-class- name }} : {{Visibility-mode}}  {{Base-class-name}}
{
    class member/methods/etc...
} 
*/
//  Crerating a dervied class

/* Note for derived class

 1)>>> Default visibility mode is private its means that  agr koi visibility mode nhi likha hua hai to
 wo private visibility mode hota hai 
 2)>>> public visibility mode :- In public visibilty mode public member of base class become 
 public member of the  derived class
 3)>> Private visibility mode :- In private visibility mode public member of base class become Private 
 member of the  Derived class
 4)>>> Base class ke private mamber ko inherited  nhi kr skte hai  
*/

// Creating a programmer class derived from Emloyee Base Class

class programmer : public employee
{
public:
    programmer(int idpp)
    {
        id = idpp; // yha pe base class me id ko public krna pdega nhi to error aayega
    }              // becouse derived class base class ke private member ko access nhi krta hai
    int langcode = 9;
    void getdata()
    {
        cout << "yha pe id ko derived class se call kr rhe hai " << id << endl;
    }
};

int main()
{
    employee abhi(1), suman(54), land(54);
    abhi.print();

    programmer nitish(2335);
    nitish.print(); // yha pe salery me garbage value dega kuy ki salery base class ka private member hai
    nitish.getdata();
    cout << " the coding language no of nitish is " << nitish.langcode;

    return 0;
}