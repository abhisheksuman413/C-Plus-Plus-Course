#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
protected:
    int n1, n2;

public:
    void simplecalc(char s)
    {
        switch (s)
        {

        case '+':
            cout << "the sum of 2 no is " << n1 + n2 << endl;
            break;
        case '-':
            cout << "the subtraction of 2 no is " << n1 - n2 << endl;
            break;
        case '*':
            cout << "the multipaction of 2 no is " << n1 * n2 << endl;
            break;
        case '/':
            cout << " the division of 2 no is " << n1 / n2 << endl;
            break;
        // default:
        //     cout << " ye me boundry se bhr ki chij hai " << endl;
        }
    }
};
class scientificcalculator : public simplecalculator
{
    public:
    void seientificclac(char s)
    {
        switch (s)
        {
        case 's':
            cout << "the value of sin (" << n1 << ") is " << sin(n1) << "  and  sin (" << n2 << ")   is " << sin(n2) << endl;
            break;
        case 'c':
            cout << "the value of cos (" << n1 << ") is " << cos(n1) << "and  cos (" << n2 << ") is  " << cos(n2) << endl;
            break;
        case 't':
            cout << "the value of tan (" << n1 << ") is " << tan(n1) << "and  tan (" << n2 << ") is  " << tan(n2) << endl;
            break;
        case 'e':
            cout << "the value of log (" << n1 << ") is " << log(n1) << "and  log (" << n2 << ") is  " << log(n2) << endl;
            break;
        default:
            cout << " ye mere boundry ke bhr kki chij hai " << endl;
        }
    }
};
class hybridcalculator : public scientificcalculator
{
    public:
    void data(){
        char S;
        cout<<" Enter the first no "<<endl;
        cin>>n1;
        cout<<"Enter the second no "<<endl;
        cin>>n2;
        cout<<"Enter the operation "<<endl;
        cin>>S;         // jjjdddjd hdhd dudjjdj jdfd jjde jjd jjd
        simplecalc(S);
        seientificclac(S);
    }
};
int main()
{
    hybridcalculator num;
     num.data();
    return 0;
}