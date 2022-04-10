#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base=55;
    void display()    /*  yha function ke aage virtual lga dene  se 
                                  agr base calss ka pointer derivede class ke 
                                  object ko point kr rha hai to derived class ka 
                                  hi function run hoga  agr virtual hta dete hai hai to 
                                  default rule se base clas function run hoga
                                  
                                  >>> virtual lga dene se inherate methode ko 
                                  v use kr skte hai <<<<<<<*/
    {
        cout << "1☺☺☺Displaying base class varible var_ base :  " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=65;
    void display()
    {
        cout << "2Displaying derived class varible var_derived :  " << var_derived << endl;
        cout << "2Displaying base class varible var_base  :  " << var_base << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    DerivedClass obj_derived;
    BaseClass obj_base;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    
    return 0;
}

/*
polymorphism hota hai eak property jise 
object jo alg alg cclass se belong kr rhe hai
wo eak trh ke message ko rrespond kr rhe hai


*/