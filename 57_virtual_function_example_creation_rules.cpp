#include <bits/stdc++.h>
using namespace std;

class abhi
{
protected:
    string title;
    float rating;

public:
    abhi(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()    // yha virtual hta dene se niche wala cout print ho jyega
    {
        cout << "lund aayega" << endl;
    }
};

class abhiViedo : public abhi
{
    float viedo_length;

public:
    abhiViedo(string s, float r, float vl) : abhi(s, r)    // 47 no code for jnkari
    {
        viedo_length = vl;
    }

    void display()
    {
        cout << "This is amazing viedo with title : " << title << endl;
        cout << "rating : " << rating << " out of 5 star " << endl;
        cout << "Length of this viedo is : " << viedo_length << endl;
    }
};

class abhiText : public abhi
{
    int words;

public:
    abhiText(string s, float r, int wc) : abhi(s, r)    /// 47 no code for jnkari
    {
        words = wc;
    }

    void display()   //agr yha display nhi hota to fir wo base
                    // class ka hi display run krega virtual likha ho to v
    {
        cout << "This is an amazing text tutorial with title  : " << title << endl;
        cout << "Rating of this tutriol " << rating << " out of 5 star : " << endl;
        cout << "No of words in text tutorial is : " << words << endl;
    }
};

int main()
{
    string name;
    float rating, vlen;
    int words;

    // for abhi viedo

    name = "Nitu singh";
    vlen = 55.5;
    rating = 3.5;
    abhiViedo youtubeviedo(name, rating, vlen);
    youtubeviedo.display();

    // for abhi text
    name = "Nitu singh";
    words = 555;
    rating = 3.5;
    abhiText youtubeviedotext(name, rating, words);
    youtubeviedotext.display();

    abhi *ptr[2];
    ptr[0] = &youtubeviedo;
    ptr[1] = &youtubeviedotext;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}
/*
Rules for virtual function
1)>>> they cannot be static
2)>>> they accessed by object pointer
3)>>> virtual functions can be friends of another class
4)>>> a function in base class might not be used
5)>>> if a virtual function define in base calss there is no necessity of redefining it inthe derived class 

*/




/*
  char sep[10];
    // string jii;
    strcpy(sep,"suman");
    cout<<sep<<endl;
*/