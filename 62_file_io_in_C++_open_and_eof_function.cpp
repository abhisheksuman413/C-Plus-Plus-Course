#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream abhi;
    abhi.open("62_sample.txt");   // open function se file me write krne ka trika
    abhi<<" Mahswari devi jugeshwar Sharma"<<endl;
    abhi<<" Nitu Singh";
    abhi<<" Dhananjay kumar"<<endl;
    abhi<<" Abhishek Suman";
    abhi.close();


    ifstream sum;
    string st, st2;
    sum.open("62_sample.txt");   // open function se file me read krne ka trika  
    // sum>>st>>st2;  >>>> iss se 2 word tak ja rha hai st me eak or st2 me fir eak
    // cout<<st<<st2; >>>> niche wale trika se hamlog kewal eak line print kr pyege 
    // getline(sum,st);  >>> iss se 1st line pura le lega
    // cout<<st<<endl;  >> eak or trika hai jis se pura sb line print krne ka 

    while(sum.eof()==0){   // iss trika se pura line print hoga 
        getline(sum,st);
        cout<<st<<endl;
    }
    sum.close();

    
    return 0;
}