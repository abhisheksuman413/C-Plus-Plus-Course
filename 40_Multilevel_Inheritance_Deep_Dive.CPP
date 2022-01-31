#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_rollno(int);
    void get_rollno(void);
};
void student ::set_rollno(int r)
{

    roll_no = r;
}
void student ::get_rollno()
{
    cout << " the roll no is " << roll_no << endl;
}
class exam : public student
{
protected:
    float math, phys;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m, float p)
{

    math = m;
    phys = p;
}
void exam ::get_marks()
{

    cout << roll_no << " roll no student marks in math is   " << math << endl;
    cout << roll_no << " roll no student marks in physic is " << phys << endl;
}
class result : public exam
{
    float precent;

public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << " the percent of roll no " << roll_no << " is " << (math + phys) / 2 << "  % " << endl;
    }
};
int main()
{
    result abhi;
    abhi.set_rollno(44);
    abhi.set_marks(98, 56);
    abhi.display();

    return 0;
}
/*
 Note:

 If we are inheriting B from A and C from B :[A--->B--->C]
 1)A is the base class of A and B is the base class of C
 2)A--->B--->C is called Inheritance Path

*/