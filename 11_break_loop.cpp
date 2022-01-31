#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<8; i++){

        cout<<i<<endl;
        if(i==3){               //this is used to break loop
            break;              //yha se loop se exit ho jyega 
        }                       // break use krne se homlog loop se bhr aa jte hai but conitinue use krne se hmlog skip ho jte hai
    }

    return 0;
}