#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    /*Queue 
       Function
       >> push
       >> front
       >> pop
       >> size
       >> empty
    */ 

   queue<int>abhi1;     //FIFO use hota hai
   abhi1.push(1);
   abhi1.push(2);
   abhi1.push(3);
   abhi1.push(4);
   abhi1.push(5);
   abhi1.push(6);
   abhi1.push(7);

   cout<<abhi1.front()<<endl;
   cout<<abhi1.front()<<endl;  // ye 1 print krega becouse ye fifo use krta hai islye first element pe point krta hai
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega
   abhi1.pop();        // ye aage se eak element ko dlete krega becouse ye fifo use krta hai
   cout<<abhi1.front()<<endl;
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega


   bool flag = abhi1.empty(); // return true if Qeue is empty , or false

   //    abhi1.empty()    Queue empty hone ye true dega nhi to false


   while(!abhi1.empty()){      // ye pura Qeue empty kr dega
       abhi1.pop();
   }

   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega


   deque<int>abhi2;
   //>>> push_front();
   //>>> push_back();
   //>>> pop_front();
   //>>> pop_back();
   //>>>  begin,end, rbrgin, rend
   //>>> size;
   //>>> clear;
   //>>> empty
   //>>> at
   


    return 0;
}




