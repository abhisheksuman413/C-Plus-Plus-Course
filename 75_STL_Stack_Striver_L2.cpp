#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Stack
       Function
       >> pop
       >> top
       >> size
       >> empty
       >> push / emplace

    */

    stack<int> abhi1; // LIFO use hota hai
    abhi1.push(1);    // ye last element hoga
    abhi1.push(2);
    abhi1.push(3);
    abhi1.push(4);
    abhi1.push(5);
    abhi1.push(6);
    abhi1.push(7); // ye first element hoga

    cout << abhi1.top() << endl;       // yha last wala element print hoga becouse last wala first ho jta hai
    cout << "Size of the stack abhi1  :- " << abhi1.size() << endl; // ye stack ka size print krega
    abhi1.pop();
    cout << abhi1.top() << endl;       // ye 6 print krege becouse ye last wala element delete kr diya to 6 last elememt hua
    cout << "Size of the stack abhi1  :- " << abhi1.size() << endl; // ye stack ka size print krega
    abhi1.pop();
    cout << abhi1.top() << endl;       // ye 5 print krege becouse ye last wala element delete kr diya to 5 last elememt hua
    cout << "Size of the stack abhi1  :- " << abhi1.size() << endl; // ye stack ka size print krega

    bool flag = abhi1.empty(); // return true if stack is empty , or false

    //    abhi1.empty()    stacke empty hone ye true dega nhi to false

    while(!abhi1.empty()){     // ye pura stack empty kr dega
        abhi1.pop();
    }
    cout << "Size of the stack abhi1  :- " << abhi1.size() << endl; // ye stack ka size print krega
    // cout << abhi1.top() << endl;  // ye error though krega becouse yha stack empty ho gya hai or isko tb hi run krte hai jb stack me kuch ho                         

    if(!abhi1.empty()){     // abhi1.top()  runkrne se phle ye cheack function run krna jruri hai 
        cout<<abhi1.top()<<endl;
    }
    return 0;
}