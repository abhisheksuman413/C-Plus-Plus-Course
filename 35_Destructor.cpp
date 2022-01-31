#include <iostream>
using namespace std;
int count = 0;
class abhi
{
public:
    abhi()
    {
        count++;
        cout << "this is the time when constructor is called for object number  " << count << endl;
    }
    ~abhi()         // ye eak destructor hai ye automatic call hota hai 
    {

        cout << "this is the time when destructor is called for object number   " << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first object n1" << endl;

    abhi n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more object " << endl;
        abhi n2, n3;
        cout << "exiting this block " << endl; //   yha ke bad n2 or n3 ke liye destructor call hoga 
    }
    cout << "Back to main " << endl;   // yha ke bad n1 ke liye destructor call hoga 
    return 0;
}