#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << "  ";
    }
    cout << endl;
}

int main()
{

    int elemenet, size;
    cout << "enter the size of vector : " << endl;
    cin >> size;
    vector<int> abhi(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add this vector : " << endl;
        cin >> abhi[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element to add this vector : " << endl;
        cin >> elemenet;
        abhi.push_back(elemenet);
    }

    display(abhi);

    vector<int>::iterator su = abhi.begin(); /* yha hmlog eak iterator bna rhe hai jo ki niche  first
                                                 me add kerega element ko becouse abhi.begin() likh rhe hai */

    abhi.insert(su, 99); /* yha first me iterator ka name dal rhe hai or fir jo insert krna hai 
                             jse ki sum iterator ka name hua or 99 insert krna hai */
    display(abhi);
    cout<<*su<<endl;

    abhi.insert(su+2, 77);  /* yha iterator 3 point kr rha hai isliye 2 pe insert hoga 
                               jha ierator point krta hai use eak phle wale place pe 
                               insert krta hai */
    display(abhi);

    abhi.insert(su,3, 55); /* abhi.insert(su,3 99) >>> ya su iterator ka name hai or 3 hai ki ham 3 bar
                              55 ko insert krna chte hai(isko change v kr skte hai) or 55 hai ki 55 ko 
                              insert krna chte hai  */
    display(abhi);

    cout<<abhi.at(0)<<endl; /* abhi.at(0) iska matlb hua vector ko uss point pe print krna 
                               ya kuy ki 0 hai isliye 1 element pe point krega*/

    display(abhi);

    return 0;
}