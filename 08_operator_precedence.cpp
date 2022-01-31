#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);    //https://en.cppreference.com/w/cpp/language/operator_precedence
    cout<<c<<endl;                  // yha pe precedence ka table diya hua hai
    return 0;                       // table me jo phle diya hua hai usko evaluate krte hai
}                                   // evaluate table ke anusar hota hai right to left ya left to right v ho skta hai 