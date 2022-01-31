#include <iostream>
using namespace std;

class bankdeposite
{
    int principal;
    int year;
    float interstrate;
    float returnvalue;

public:
    bankdeposite() {}
    bankdeposite(int p, int y, float r); // agr intrest rate point me hoga to
    bankdeposite(int p, int y, int r);   // agr intrest rate percentage(%) me hoga to

    void print()
    {
        cout << "if you put money " << principal << " for " << year << " yaer then you get money  " << returnvalue << endl;
    }
};

bankdeposite ::bankdeposite(int p, int y, float r)
{

    principal = p;
    year = y;
    interstrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {

        returnvalue = returnvalue * (1 + interstrate);
    }
}
bankdeposite ::bankdeposite(int p, int y, int r)
{

    principal = p;
    year = y;
    interstrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 1; i <= y; i++)
    {

        returnvalue *= (1 + interstrate);
    }
}
int main()
{
    bankdeposite bd1, bd2 , bd3; // yha pe agr bd3 ko call krte hai to hmko uper me eak blank constructor bnanana pdega
    int p, y, R;
    float r;
    cout << "enter the principal amount" << endl;
    cin >> p;
    cout << "enter the year " << endl;
    cin >> y;
    cout << "enter the interst rate " << endl;
    cin >> r;

    bd1 = bankdeposite(p, y, r);
    bd1.print();

    cout << "enter the principal amount" << endl;
    cin >> p;
    cout << "enter the year " << endl;
    cin >> y;
    cout << "enter the interst rate " << endl;
    cin >> R;

    bd2 = bankdeposite(p, y, R);
    bd2.print();

    return 0;
}
