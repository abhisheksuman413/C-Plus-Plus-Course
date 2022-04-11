#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //connecting our file with hout stram
    ofstream hout("60_sample.txt");

    //creating a name string and filling it with the string enter by the  user
    string name;
    cout<<"Enter your name  :- ";
    getline(cin, name);
    cout<<name<<endl;


    //writing a string to file
    hout<<" my name is " + name;
    hout<<" my name is " + name;
    hout.close(); //  iss function se hamlog connection cut kr de rhe hai
    hout<<"my name is " + name; 


    ifstream hin("60_sample.txt");

    string content;
    getline(hin,content);
    cout<<content<<endl;

    

    /*
    iss trika se hamlog eak hi file read or write 
    same time me kr skte hai 
    */

    return 0;
}