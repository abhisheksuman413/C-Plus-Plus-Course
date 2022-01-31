#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void Setdata(int a)
    {
        roll_no = a;
    }
    void print_rollno()
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class test : virtual public student        // ye virtual class v student se derive hua hai 
{
protected:
    float math, computer;

public:
    void set_number(float m, float c)
    {
        math = m;
        computer = c;
    }
    void print_test()
    {
        cout << "you got marks in math is " << math << " and yo got marks in computer is " << computer << endl;
    }
};
class sport : virtual  public student        // isko virtual class bolte hai or ye student se derive hua hai
                                    // yha se agr virtual hta dete hai to setdata or print_rollno me error aayega
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your pt score is " << score << endl;
    }
};
class result : public test, public sport
{
protected:
    float total_score;

public:
    // void calc_total()
    // {
    //     total_score = math + computer + score;
    // }
    void final_print()
    {
        total_score = math + computer + score;
        print_rollno();
        print_test();
        print_score();
        cout << "your final score is " << total_score << endl;
    }
};
int main()
{
    result abhi;
    abhi.Setdata(44);
    abhi.set_number(45, 65);
    abhi.set_score(65);
    // abhi.calc_total();
    abhi.final_print();

    return 0;
}

/*x
Virtual Base class syntex

class {{class name }} : virtual {{visibility mode}} {{derived class}}

virtual base class iss liye hmlog bnte hai becouse 
original base class ka data agr 2 drived class se hote hue 
derive class ke derived class me jyega to 
ambiguity error aayega is liye jo new derived class hai 
uske base class ko virtual base bnayege
*/