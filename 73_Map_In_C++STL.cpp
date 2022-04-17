#include <iostream>
#include <map>
#include <string>
using namespace std;
template <class t, class t1>
void display(map<t,t1> &su)
{
    map<string, int>::iterator jii;
    for (jii = su.begin(); jii != su.end(); jii++)
    {
        cout << (*jii).first << "  " << (*jii).second << endl;  /* *jii se hmlog ko iteratror ke andr ka value 
                                                                    milta hai or (*jii).first se hmlog ko
                                                                    iterator jis pe point kr rha hai uska 
                                                                    first element milega or (*jii).second se
                                                                    dusra element milega ase aage krte jyege 
                                                                    or hoga to */
        
    }
    cout<<"the size is :- "su.size()<<endl;
    cout<<"   "<<endl;
}

int main()
{

    // map<string, int> marks;  >>> ye map bnane ka syntax hai 
    map<string, int> marks;    // ye map bna rhe hai hai 
    marks["mheswari"] = 95;    // or yha data insert le rhe hai
    marks["jugshwar"] = 85;
    marks["nitu"] = 75;
    marks["dhananjay"] = 65;
    marks["abhishek"] = 55;
    display(marks);

    cout<<marks.size()<<endl; // ye map ka size btata hai 
    // uper wale ko ase v print kr skte hai 
    //               |
    //  map<string, int>::iterator jii;
    // for (jii = marks.begin(); jii != marks.end(); jii++)
    // {
    //     cout << (*jii).first << "  " << (*jii).second << endl;
    // }

    map<string ,int >marks2;
    marks2.insert({{"nitish ", 105},{" pankaj ", 115},{" sheryansh ", 125}});  /* Ye v map me insert krne ka 
                                                                                  trika hai */
    display(marks2);
    return 0;
}