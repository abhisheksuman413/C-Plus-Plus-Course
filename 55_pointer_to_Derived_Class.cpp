#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying the base class variable var_base  :  " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying the derived class varible var_derived  :  " << var_derived << endl;
        cout << "Displaying the base class variable var_base  :  " << var_base << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    (*base_class_pointer).var_base=55;

    /* base_class_pointer->var_derived;  ye error dega becouse base class ke pointer se 
                                         derived class ke object ko access nhi kr skte */
    base_class_pointer->display();   // ye diplay base class ke function ko use krega

    base_class_pointer->var_base=65;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    // derived_class_pointer = &obj_base;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base=85; //yha var_base update ho jyega 
    derived_class_pointer->var_derived=75;    // derived class ke pointer se derived class ke varible ko acess kr skte hai 
    derived_class_pointer->display();   // yha pr deriveed class ke display function use ho rha hai

    return 0;
}


/*
uper display function jo hai wo run time 
me deside hua ki kon sa function run hoga 
isi ko run time Polymorphism bolte hai 
*/