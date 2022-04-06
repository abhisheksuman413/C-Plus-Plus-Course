#include <iostream>
#include <string>
using namespace std;

class binery
{
    string s;
    void cheack_bin(void);          // isko private krne ke bad isko koi v bhr use nhi kr skta main function me 
                                    //Nesting of member functions isi kom khte hai
public:
    void read(void);
   
    void change(void);
    void display(void);
    
};

void binery ::read(void)
{
    cout << "enter the no : " << endl;
    cin >> s;
}
void binery ::cheack_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binery formet" << endl;
            exit(0);
        }
    }
}
void binery ::change(void)
{
    cheack_bin();                           // isko yha call kr skte hai 
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binery ::display(void)
{
    cout << "display the number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;  
    
}
int main()
{
    binery c , d;
    c.read();
    //c.cheack_bin();  isko uper me v call kr skte hai function ke niche >> private krne ke bad isko niche khi vi use nhi kr skte 
    c.display();
    c.change();
    c.display();
    d.read();
    d.display();
    d.change();
    return 0;
}