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
    {
        cout << endl;
        for (auto pp : itt)

        {

            cout << pp << "  ";
        }
    }
    cout << endl;
}

// uper wale display ke bdle ye v likh skte hai
// void display(vector<vector<int>> &suu)
// {
//     for (int i = 0; i < suu.size(); i++)
//     {
//         cout << endl;
//         for (int j = 0; j < suu[i].size(); j++)
//         {
//             cout << suu[i][j] << "  ";
//         }
//     }
//     cout << endl;
// }

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
    vector<int> abhi1;  // yha hamlog empty vector bna rhe hai zero size ka
    abhi1.push_back(1); // {1}   yha ham vector me value assine kr rhe hai >>>> Size-->>1
    abhi1.push_back(2); // {1,2} >>>> Size-->>2
    abhi1.push_back(3); // {1,2,3} >>>> Size-->>3
    abhi1.push_back(4); // {1,2,3,4} >>>> Size-->>4
    abhi1.push_back(5); // {1,2,3,4,5} >>>> Size-->>5
    abhi1.push_back(6); // {1,2,3,4,5,6} >>>> Size-->>6
    abhi1.push_back(7); // {1,2,3,4,5,6,7}   yha vector me value dainimacally value set ho rha hai >>>> Size-->>7
    display(abhi1);     //{1,2,3,4,5,6,7}
    abhi1.pop_back();   // ye piche se eak element ko delete kr deta hai
    display(abhi1);     // {1,2,3,4,5,6,}
    abhi1.clear();      // ye vector ke sare elementvke delete kr deta hai
    display(abhi1);     //{0}

    vector<int> abhi2(5, 1); /* yha hamlog vector ka size or element initial deside kr le rhe hai
                                yha vector ka size 5 hai oe sara element 1 hoga  iske bad v hamlog
                                push_back() kr skte hai */
    display(abhi2);          //{1,1,1,1,1}
    abhi2.push_back(2);      // initial size deside krne ke bad v size increase kr skte hai
    abhi2.push_back(3);
    abhi2.push_back(4);
    abhi2.push_back(5);
    display(abhi2); //{1,1,1,1,1,2,3,4,5}

    vector<int> abhi3(abhi2.begin(), abhi2.end()); /*>>>>>[)   yha ham abhi2 ko abhi3 me copy kr rhe hai
                                                     abhi2.begin()>>> strating elemet print hoga but abhi2.end()
                                                     wala element print nhi hoga becouse abhi2.end() jis element
                                                     pe point krega wo count nhi hota hai uss se eak phle wala
                                                     element add hota hai  */

    // vector<int> abhi3(abhi2);    // uper wala or ye same kam krege ye v abhi2 ko copy kr dega abhi3 me
    display(abhi3); //{1,1,1,1,1,2,3,4,5}

    vector<int> abhi4;
    abhi4.push_back(1);
    abhi4.emplace_back(2); // emplace_back push_back se kam time leta hai dono same hi hai
    abhi4.push_back(3);
    abhi4.push_back(4);
    abhi4.push_back(5);
    display(abhi4);

    // niche wale vector me hamlog kewal abhi4 ka {1,2,3} element hi lena chahte hai to
    vector<int> abhi5(abhi4.begin(), abhi4.begin() + 3); /*yha abhi4.begin() abhi4 ke first element pe point kr
                                                           rha hai or abhi4.begin()+3 abhi4 ke 4th element pe
                                                           point kr rha hai kuy iss me last element add nhi hota
                                                           to iss liye ham log 3 ke bad wale element pe point kr
                                                           rhe hai */
    display(abhi5);                                      //{1,2,3}

    display(abhi3);
    display(abhi4);
    swap(abhi3, abhi4); // ye do vector ko swap krn deta hai
    display(abhi3);
    display(abhi4);

    // 2d Vector

    // >>> syntax
    vector<vector<int>> abhi6; /* 2d vector me vector me hi vector hota hai jse ki
                                  iss vector ka zero element abhi3 vector hai or
                                  1 element abhi4 hai  */
    abhi6.push_back(abhi3);
    abhi6.push_back(abhi4);
    display(abhi6); // yha display overlode ho rha hai 2d vector ko print krne ka trika dusra hai uper me hai

    // defining 10 X 20 size vector syntax
    vector<vector<int>> abhi7(10, vector<int>(20, 5)); // ye sara same value lega 5
    display(abhi7);                                    // diffrent value ke lye for loop use
    abhi7.push_back(vector<int>(20, 5));               // yha abhi7 ka size eak or bda de rhe hai
    display(abhi7);
    cout<<abhi7[3].size()<<endl;
    abhi7[3].push_back(7);
    cout<<abhi7[3].size()<<endl;
    

    cout<<"nitu"<<endl;
    display(abhi7);
    cout<<"Dhananjay"<<endl;

    // arrays of vector
     vector<int>abhi10[5]={abhi1,abhi2,abhi3,abhi4,abhi5}; /* >>>>> yha vector ka data type int hai but array
                                                                ke element ka data type vector hai yha array
                                                                daynamic but yha array ka har element daynamic
                                                                hai becouse wo vector hai  yha array ka size fix
                                                                ho ja rha but array ke element ke size ko bda
                                                                skt e hai  */

    cout<<"abhishek"<<endl;
    for (auto itt : abhi10)
    {
        cout << endl;
        for (auto pp : itt)

        {

            cout << pp << "  ";
        }
    }
    cout << "Suman"<<endl;
    //  for (int i = 0; i < 5; i++)
    // {
    //     cout << abhi8[i] << " ";
    // }
    // cout << endl;

    // 3D vector syntax  10 x 20 x 30 vector
    vector<vector<vector<int>>> abhi8(10, vector<vector<int>>(20, vector<int>(30, 5)));
    display(abhi8); // yha v function overlode ho rha hai uper dekhe

    /*  yha asa vetor bna rhe hai jiska size v inpute le rhe hai or element v */
    int elemenet, size;
    cout << "enter the size of vector : " << endl;
    cin >> size;
    vector<int> abhi9(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add this vector : " << endl;
        cin >> abhi9[i];
    }
    display(abhi9);

    return 0;
}