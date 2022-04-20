#include <bits/stdc++.h>
using namespace std;

template <class t>
void display(vector<t> &su)
{
    // for (t i = 0; i < su.size(); i++) // nice wale ko ase v likh skte the fir it ke place pe su[i] krna pdta
    for (auto it : su)
    {

        cout << it << "  ";
    }
    cout << endl;
}

void display(vector<vector<int>> &suu)
{
    for (auto itt : suu)