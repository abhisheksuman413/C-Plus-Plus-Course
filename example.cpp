#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<vector<int>>> &suuu)
{
    for (auto aaa : suuu)
    {
        cout << endl;

        for (auto itt : aaa)
        {
            cout << endl;
            cout << endl;
            for (auto pp : itt)
            {

                cout << pp << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
     vector<vector<vector<int>>> abhi8(10, vector<vector<int>>(20, vector<int>(30, 5)));
     display(abhi8);
     int a =2;
     int b =3;
     int c = a+b;
    return 0;
}