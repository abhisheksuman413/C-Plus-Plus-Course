#include <iostream>
using namespace std;

struct lund
{
    int id;
    float salary;
    string name;
};

int main()
{
    struct lund a;
    a.id = 404;
    a.salary= 400000.56;
    a.name = "abhishek";
    cout<<a.id<<"    "<<a.salary<<endl;

    return 0;
}