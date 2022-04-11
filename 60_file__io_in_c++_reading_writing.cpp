#include <iostream>
#include<fstream>     // read or write krne ka premission
using namespace std;

/*
The useful class for Working with files in c++ are :-
1)fstreambase
2)ifstream ---> derived from fstreambase
3)ofstream ---> derived from fstreambas   e
*/

int main()
{
    string jjj="Nitu Singh";
    string jjj2;
    //opening file through constructor

    ofstream abhi("60_sample.txt"); // iss class se hamlog write operation krte hai
    abhi<<jjj;                     // 60_sample.txt me nitu likha hua aa rha hoga


    ifstream sum("60_sample2.txt");
    // sum>>jjj2;  >>> iss se kewal eak word print hoga pura line nhi
    getline(sum,jjj2);   // iss se v kewal eak hi line run hoga agle line ke liye fir se getline function use krna hoga
    cout<<jjj2<<endl;
    getline(sum,jjj2);  // agle line ke liye isko bar bar use krna hoga
    cout<<jjj2<<endl;


    

    return 0;
}

/*
In order to work with file in c++ You wiill have to open it Primarily There are 2 way to open
a file

1)Using constructor
2)Using the memeber function open() of the class
*/