#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Priority_Queue
         Function
         >> push
         >> Size
         >> top 
         >> pop
         >> empty

    */

   priority_queue<int>abhi1;   /*ye shorted form me hota hai but unique nhi hota or sbse phle sbse bda 
                                 element ko store krta hai  */
   abhi1.push(1);
   abhi1.push(7);
   abhi1.push(5);
   abhi1.push(3);
   abhi1.push(6);
   abhi1.push(2);
   abhi1.push(4);
   abhi1.push(7);
   abhi1.push(7);

   cout<<abhi1.top()<<endl;   // yha 7 print hoga becouse yha 7 hi sbse bda element hai
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega
   abhi1.pop();     // yha 7 delete hoga  becouse first element 7 hai kuy wo sbse bda hai
   cout<<abhi1.top()<<endl;  // yha v 7 print hoga becouse 3 7 mojud hai Queue me av eak hi delete hua hai
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega

   abhi1.pop();   // 7 delete hoga
   cout<<abhi1.top()<<endl;   // 7 hi print hoga 
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega

   abhi1.pop();  // 7 delete hoga
   cout<<abhi1.top()<<endl;  // yha 6 print hoga becouse sare 7 delete ho gye becouse 3 bar abhi1.pop() use kiye 
   cout << "Size of the Queue abhi1  :- " << abhi1.size() << endl; // ye Queue ka size print krega




   priority_queue<pair<int,int>>abhi2;

//    abhi2.insert(pair<int,int>(1,3));
   
//    abhi2.push(1,3);
//    abhi2.push(1,4);
//    abhi2.push(1,2);
//    abhi2.push(2,3);
//    abhi2.push(1,5);
//    abhi2.push(1,2);


   priority_queue<int>abhi3;/*ye shorted form me hota hai but unique nhi hota or sbse phle sbse bda 
                                 element ko store krta hai  */
   abhi3.push(-1);
   abhi3.push(-7);
   abhi3.push(-5);
   abhi3.push(-3);
   abhi3.push(-6);
   abhi3.push(-2);
   abhi3.push(-4);
   abhi3.push(-7);
   abhi3.push(-7);

   // ye desinding order me is liye milega kuy ki uper -1 sbse bda hai or nich ham usme -1 se multiplay kr rhe hai
   cout<< -1*abhi3.top()<<endl;// uper me to sbse bda -1 hai isliye yha ham -1 se multiplaykr dege to 1 ho jyega 




    // min priority Queue  >> Syntax niche me hai
    priority_queue<int,vector<int>, greater<int>> abhi4;
    
   abhi4.push(1);
   abhi4.push(7);
   abhi4.push(5);
   abhi4.push(3);
   abhi4.push(6);
   abhi4.push(2);
   abhi4.push(4);
   abhi4.push(7);
   abhi4.push(7);

   cout<<abhi4.top()<<endl;   // ye 1 print krega becouse ye minimum priority queue hai



    return 0;
}