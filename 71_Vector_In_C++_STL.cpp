#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)   // yha hmlog reference le rhe hai 
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
    
    return 0;
}