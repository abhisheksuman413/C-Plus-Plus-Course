#include <bits/stdc++.h>
using namespace std;



template <class t>
void display(list<t> &su)
{
    list<int>::iterator jii;
    for (jii = su.begin(); jii != su.end(); jii++)
    {
        cout << *jii << "   "; // yha star isliye lga rhe hai becouse jis element pe point kr rha hai
                               // iterator  uska value find krne ke liye
    }
    cout << " " << endl;
}

int main()
{
    
    //List
    // Function
    //>>> push_front();
   //>>> push_back();
   //>>> pop_front();
   //>>> pop_back();
   //>>>  begin,end, rbrgin, rend
   //>>> size;
   //>>> clear;
   //>>> empty
   //>>> at

   list<int>abhi1;
   abhi1.push_front(1);
   abhi1.push_front(3);
   abhi1.push_front(5);
   abhi1.push_front(7);
   abhi1.push_front(2);
   abhi1.push_front(4);
   abhi1.push_front(6);
   abhi1.push_front(3);
   abhi1.push_front(3);
   cout<<"abhi1 display hoga"<<endl;
   display(abhi1);

   abhi1.remove(3);
   cout<<"abhi1 display hoga 3 ko remove kr "<<endl; 
   display(abhi1);

    return 0;
}