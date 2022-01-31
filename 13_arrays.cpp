#include <iostream>
using namespace std;

int main()
{ 
    int marks[] = {32,33,35,34,85};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=33333;           //value print hone se phle agr value ko change krte hai to value change ho jyega   
    cout<<marks[2]<<endl;     // yha pe marks 2 ka value che ho jyega or jo new value diya hai wo ho jyega 
    cout<<marks[3]<<endl;     //isko yha se uper v changeb kre to ho jyega but print hone se phle change hona chiye
    cout<<marks[4]<<endl;
    int papa[4];
    papa[0] =323;
    papa[1] =113;
    papa[2] =131;
    papa[3] =118;
    cout<<papa[0]<<endl;
    cout<<papa[1]<<endl;
    cout<<papa[2]<<endl;
    cout<<papa[3]<<endl;
    return 0;
}