#include <iostream>
#include <list>
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

    // list<int> abhi1; >>> ye list bnane ka syntex hai

    list<int> abhi1; // empty list of zero size

    abhi1.push_back(1); // zero size list me input ase lete hai
    abhi1.push_back(3);
    abhi1.push_back(5);
    abhi1.push_back(7);
    abhi1.push_back(9);
    abhi1.push_back(11);
    abhi1.push_back(13);
    abhi1.pop_back(); // iss se eak element piche se delete kr deta hai

    list<int>::iterator jii2;
    jii2 = abhi1.begin();
    cout << *jii2 << endl; // list ko ase v print kr skte hai
    jii2++;
    cout << *jii2 << endl;
    jii2++;
    cout << *jii2 << endl;
    jii2++;
    cout << *jii2 << endl;
    jii2++;
    cout << *jii2 << endl;
    jii2++;
    cout << *jii2 << endl;
    jii2++;
    cout << *jii2 << endl;

    display(abhi1); // ya fir function call kr ke v kr skte hai

    list<int> abhi2(7); // empty list of size 7
    list<int>::iterator jii3;
    jii3 = abhi2.begin();

    *jii3 = 15; // not zero size list me input ase v le skte hai ya loop chla kr
    jii3++;
    *jii3 = 25;
    jii3++;
    *jii3 = 35;
    jii3++;
    *jii3 = 45;
    jii3++;
    *jii3 = 55;
    jii3++;
    *jii3 = 65;
    jii3++;
    *jii3 = 75;
    jii3++;
    *jii3 = 85; // ye print nhi hoga becouse ye 7 size ka list hai
    jii3++;
    display(abhi2);
    abhi2.pop_back(); // agr pop_back() ko do bar run krta hu to 2 element piche se delete kr dega
    abhi2.pop_back();
    display(abhi2);

    int size;
    cout << "enter the size of list" << endl;
    cin >> size;
    list<int> abhi3(size); // yha asa list bna rhe hai jiska size input le rhe hai
    list<int>::iterator jii4;
    for (jii4 = abhi3.begin(); jii4 != abhi3.end(); jii4++)
    {

        cout << "Enter the value of list : " << endl;
        cin >> *jii4; // ase v list me input le skte hai
    }

    display(abhi3);

    abhi3.pop_front(); // ye front se eak element ko delete kr deta hai

    display(abhi3);

    return 0;
}