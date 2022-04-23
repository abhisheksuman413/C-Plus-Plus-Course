#include <bits/stdc++.h>
using namespace std;

int main()
{

    //pair Class
    //>>Pair eak single element hai ye koi contener nhi hai

    cout<<"abhi1 print hoga"<<endl;
    pair<int,int>abhi1={1,2}; 
    cout<<abhi1.first<<endl;
    cout<<abhi1.second<<endl;

    cout<<"abhi2 print hoga"<<endl;
    pair<pair<int,int>,int>abhi2={{1,2},3};
    cout<<abhi2.first.first<<endl;
    cout<<abhi2.first.second<<endl;
    cout<<abhi2.second<<endl;

    cout<<"abhi3 print hoga"<<endl;
    pair<pair<int,int>,pair<int,int>>abhi3={{1,2},{3,4}};
    cout<<abhi3.first.first<<endl;
    cout<<abhi3.first.second<<endl;
    cout<<abhi3.second.first<<endl;
    cout<<abhi3.second.second<<endl;

    vector<pair<int,int>> vec;
    set<pair<int,int>>st;
    map<pair<int,int>,int>mpp;
    return 0;
}