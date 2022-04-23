#include <bits/stdc++.h>
using namespace std;

void display(set<int> &suu)
{
    for (auto it : suu)
    {
        cout << it << "  ";
    }
    cout << endl;
}
void display(unordered_set<int> &suu)
{
    for (auto it : suu)
    {
        cout << it << "  ";
    }
    cout << endl;
}
void display(multiset<int> &suu)
{
    for (auto it : suu)
    {
        cout << it << "  ";
    }
    cout << endl;
}

int main()
{

    // give n element , tell me the number of unique element
    //  arr[]={2,2,1,3,5,3,4,5} >>>> {1,2,3,4,5} 5 unique element

    set<int> abhi1;       /* Set me kewal unique element hi store hota hai
                             ham jita v input de usme wo kewal unique element 
                             hi store krta hai jse ki koi element ham do bar ya 
                             do se jda bar de diye to wo eak bar hi store krta hai*/
    /* 
    >>> set unique element store krta hai
    >>> Set hamesa assending order me rhta hai 
    >>> set abhi[0]  is trika se access nhi kr skte
    >>> set ko iterator ke through access kr skte hai
    */
    int size ;
    cout<<" Enter the size of set "<<endl;
    cin >> size;
    for (int i =0; i<size; i++){     // iss loop ke through hamlog set me input le rhe hai 
        int pp;
        cout<<"Enter the element of set"<<endl;
        cin>>pp;
        abhi1.insert(pp);       // log n time lta hai n is the size of set

    }
    display(abhi1);       // yha function se hamlog set ko print krwa rhe hai 
    cout<<abhi1.size()<<endl;    // ye set ke size ko print krta hai 



    // Erase funcationality


    abhi1.erase( abhi1.begin());     // ye set ke first element ko erase kr dega 
    display(abhi1);

    set<int>::iterator it ;
    it=abhi1.begin();
    ++it;
    ++it;

    abhi1.erase(abhi1.begin(), it);   // yha set me jha se jha tak erase krna hai wo iterator dalege last wala element enclude nhi hoga{ [)  }
    display(abhi1);

    abhi1.erase(5);     // agr  set me "5" element input lege to wo 5 ko delete kr dega
    display(abhi1);


    abhi1.clear();    // ye pura set ko clear kr dega 
    display(abhi1);


    // Vector me jis jis trika se vector insert kiye the wo sb set me implement  hoga 

    set<int>abhi2={1,2,3,4,5,5,1,7,2,3,5,4,6,3,4,7,7,6,5};  //  >>> {1,2,3,4,5,6,7}
    abhi2.emplace(5);  // ye abhi2.insert(5) hi hai but ye kam time leta hai 
    display(abhi2);

    auto ab =abhi2.find(5);   // ye iterator wha pe point krega jha pe "7" element hoga     // log n
    auto ab2=abhi2.find(9);   // agr "9" element set me nhi hoga to ye iterator abhi2.end() pe point krege yani set ke just bhr   // log n
    
    set<vector<int>>abhi3;    // set me kuch v store kr skte hai but wo unique hoga or assending order me hoga


    //  Unorder Set


    unordered_set<int>abhi4;   /* unordered Set same hota hai set se but element accending oredr me nhi hota hai 
                                  isme v unique element hi store hota hai */
    abhi4.insert(1);
    abhi4.insert(6);
    abhi4.insert(7);
    abhi4.insert(3);
    abhi4.insert(5);
    abhi4.insert(7);
    abhi4.insert(3);
    abhi4.insert(2);
    abhi4.insert(4);
    cout<<"ye unordered set ka display hai"<<endl;
    display(abhi4);

    /*
    >>>> in unordered se avarage time cpmplexity is 0(1) is always consatnt
    >>>> but worst case is linear in nature 
    >>>> sare set ke function kam krege 
    */



   //   Multiset

   multiset<int>abhi5;  /* ye set ke trh hi hota hai isme unique element nhi hote hai but 
                           shorted ya (assending order) me hote hai*/
    abhi5.insert(1);
    abhi5.insert(1);
    abhi5.insert(3);
    abhi5.insert(8);
    abhi5.insert(6);
    abhi5.insert(7);
    abhi5.insert(3);
    abhi5.insert(5);
    abhi5.insert(7);
    abhi5.insert(3);
    abhi5.insert(2);
    abhi5.insert(4);
    abhi5.insert(9);
    cout<<"ye unordered set ka display hai"<<endl;
    display(abhi5);
    abhi5.erase(3); // ye set me sare 3 ko erase kr dega
    abhi5.erase(abhi5.find(1));  // ye 1 ke kewal eak element ko delete krega becouse iterator usi pe point kr rha hai 
    display(abhi5);
    auto ab3=abhi5.find(7);    // ye iterator 7 ke  first element ko point krega 

    /*
    >>>>> Isme v set ka sara function use hoga 
    */






    return 0;
}