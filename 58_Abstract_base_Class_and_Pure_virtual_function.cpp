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
    virtual void display()=0; /* isko do-notihing function bolte hai ya -----> pure virtual function bolte hai
                                 ab ye dispaly fuction kv v run nhi hoga pure virtual function bna dene bad 
                                 niche derived class me function bnna hi pdega nhi to errror aayega kuy ki 
                                 pure virtual function bn jane se ye function ab run nhi hoga
                                 
                                 is syntsx hai >>> virtual function ko 0 se equal kr dena 
                                            >>>>>>> virtual void display()=0;  <<<<<<<<
                                */


};

class abhiViedo : public abhi
{
    float viedo_length;

public:
    abhiViedo(string s, float r, float vl) : abhi(s, r)    
    {
        viedo_length = vl;
    }

    void display()   // isko comment out kr dege to error aayega becouse pure virtual function uper bna hai
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
    abhiText(string s, float r, int wc) : abhi(s, r)   
    {
        words = wc;
    }

    void display()  // isko comment out kr dege to error aayega becouse pure virtual function uper bna hai 
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

Abstract cllass---->  abstract class eak asa base class hai jisko 
                      bnya hi isliye jata hai jise kam se kam eak 
                      derived class bne or abstract base calss me 
                      eak asa virtual function bnana pdta hai jisko
                      overright krna pde  yha abhi eak abstract base
                      class hai
                      

pure virtual function   pure virtual function bna dene bad  niche derived 
                        class me function bnna hi pdega nhi to errror aayega 
                        kuy ki pure virtual function bn jane se pure virtual
                         function run nhi hoga
                                 
                                 is syntsx hai >>> virtual function ko 0 se equal kr dena 
                                            >>>>>>> virtual void display()=0;  <<<<<<<<

>>>> Pure virtual function abstract base calss ko bnane ke liye hi bnta hai

*/