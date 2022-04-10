#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    string abhi = "handsom boy";
    cout<<abhi<<endl;
    string suman;
    cout<<"enter string  : ";
    getline(cin, suman); /* isko hamlog cin ke liye use krte hai
                            agr cin use krege to kewal first word 
                            hi lga space ke bad word nhi leta hai */  
    cout<<suman<<endl;

    string s1="abhishek ";
    string s2="suman";

    s1.append(s2);     /*yha 2 string ko add kr rhe hai yha s1 me s2 add ho rha hai
                         s2 me s1 ko v add kr skte hai*/
    cout<<s1<<endl;

    // s1=s1+s2 v kr skte hai
    cout<<s1+" "+s2<<endl;    /*ye v trika hai 2 string ko aad krne ka yha s1 ka value update ho gya hai 
                           is liye abhisheksumansuman out put aayega*/
    

    string abc="gadjsgjgasdgsdgks";
    cout<<abc<<endl;
    abc.clear();     // iss function ka use hamlog string ko free krne ke krte hai
    cout<<abc<<endl; 


    string nitish="dfghjsgdgd";
    cout<<nitish<<endl;

    nitish.clear();

    if(nitish.empty())     //empty() function is used to cheack function is empty or not
    cout<<"string is empty : "<<endl; 


    string pankaj="abhisheksuman";
    cout<<pankaj<<endl;
    pankaj.erase(3,5);    /* erase function ka use hamlog  string erase krne ke liye krte hai
                             erase(3,5) yha 3 ka matlab hai ki third letter ke bad se erease hona
                            start hoga or 5 ka matlab hai 5 letter hoga*/
    cout<<pankaj<<endl;

    string mahi="abhisheksuman";

    cout<<mahi.find("sum")<<endl;   /*find function se kisi word ko find krte hai string me 
                                      jase ki yha >>> sum <<< 8 letter ke bad aa rha tha to 
                                      yha output 8 aaya*/

    string summit="abhisheksuman";

    summit.insert(8, "NITU");/* insert function ka use hamlog eak string me dusre string ko 
                                insert krne ke liye krte hai inser(8, "NITU") yha 8 ka matlab hai 
                                8 letter ke bad insert hoga or NITU ka matlab NITU insert hoga   */
    cout<<summit<<endl;

    string amit="abhisheksuman";

    cout<<amit.length()<<endl;   // length function ka use length pta krne ke liye

    for(int i=0; i<amit.length(); i++){   // iss se hamlog har eak letter pe ja skte hai
        cout<<amit[i]<<endl;
    }

    string aadi="abhisheksuman";
    
    string aaditee= aadi.substr(7,5);   /*  iss function se hamlog string me se string ko nikal skte hai*/
    cout<<aaditee<<endl; 

    string niki="711";

    int x=stoi(niki);  /* iss function se hamlog kisi numeric string ko integer me conver kr skte hai*/
    cout<<x+2<<endl;

    int y=555;
    cout<<to_string(y)+"3"<<endl;  // iss function se hamlog integer ko string me convert krte hai

    return 0;
}