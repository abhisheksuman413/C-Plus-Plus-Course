#include <iostream>
#include <iomanip>         //<iomanip> this is also a header file 
using namespace std;

int main()
{
    int a = 3, b = 78, c = 1233;
    cout<<"the value of a without setw is : "<<a<<endl;
    cout<<"the value of b without setw is : "<<b<<endl;
    cout<<"the value of c without setw is : "<<c<<endl;

    // setw ko ham use krte hai value me space dene ke liye
    // setw(4) agr likhte hai to ye 4 space chodega
    // isko ham ase v smj skte hai ki star print krwne ke liye use kr skte hai 

    cout<<"the value of a is : "<<setw(4)<<a<<endl;
    cout<<"the value of b is : "<<setw(4)<<b<<endl;
    cout<<"the value of c is : "<<setw(4)<<c<<endl;    
    return 0;
}