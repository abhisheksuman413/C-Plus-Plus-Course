#include <iostream>
#include <vector>
using namespace std;

template <class t>
void display(vector<t> &v)   // yha hmlog reference le rhe hai 
{
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << "  ";
    }
    cout << endl;
}


int main()
{
    /*vector<int> abhi(3);  >>ye syntax hai vector bnane ka or ye integer 
    type vector hai jo av custom no element le rha hai but niche isko bda v rhe hai 
    hai */
    int elemenet, size;
    cout<<"enter the size of vector : "<<endl;
    cin>>size;
    vector<int> abhi(size);  // syntax   >>>>> yha char float string ya kuch v type ka bna skte hai <<<<<
    

    /*yha vector ka size decide kr le rhe hai isliye hme isss bracket [] ka 
      use kr ke input le rhe hai jse array me lete the */
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add this vector : " << endl;
        cin >>  abhi[i];
    }
    /* uper me hamlog vector ka size deside kr liye hai jo ki custom hai 
       ab custom se jada size ka vector bnane ke liye hamlog ko abhi.push_back 
       ka use krne pdega or agr vector ka size starting se hi deside nhi hua 
       hai to starting se hi hmlog ko abhi.push_back ka use krna pdega */
     for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element to add this vector : " << endl;
        cin >>  elemenet;
        abhi.push_back(elemenet);
    }
    abhi.pop_back();  // iss se last wale element ko delete kr dta hai 
    display(abhi);

    vector<char>abhi2(3);      // yha ham eak chracter vector bnaye hai 
    abhi2.push_back('d');  
    display(abhi2);

    vector<char>abhi3(abhi2);  // yha ham eak vector se vector bna rhe hai
    display(abhi2);

    vector<int>abhi4(5,3);  /* yha vector me direct input le rhe hai yha abhi(5 ,3)
                               ka matlb hai 5 >>> 5 times input lega or 3>> 3 input lega
                               iska string char kuch v bna skte hai jse niche bnya hai */
    display(abhi4);
    
    vector<string>abhi5(5,"dhananjay nitu");  /* yha vector me direct input le rhe hai yha abhi(5 ,3)
                               ka matlb hai 5 >>> 5 times input lega or "dhananjay nitu">> dhananjay nitu
                               input lege or string vector hai  */
    display(abhi5);

    cout<<abhi5.size()<<endl;

    
    return 0;
}


/*
for more method visit >>>>>  cplusplus.com     <<<<<<
*/