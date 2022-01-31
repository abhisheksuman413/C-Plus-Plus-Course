#include <iostream>
using namespace std;

class worker
{
    int id;
    int salery;

public:
    void setdeta()
    {
        cout << "enter the id no " << endl;
        cin >> id;
        cout << "enter the salery of worker " << endl;
        cin >> salery;
    }
    void getdeta()
    {
        cout << "the id of this worker is : " << id << endl;
        cout << "the salery of worker is : " << salery << endl;
    }
    /*void payment(){

        cout<<"the salery of worker is : "<<salery<<endl;
        << isko yha v new function bna skte hai 
    }*/
};

int main()
{
    worker fireman[4]; // yha pe ham object ka aarey bna rhe hai
    for (int a = 0; a < 4; a++)
    {
        fireman[a].setdeta(); // yha pe objet arrey ko loop me chla rhe hai
        fireman[a].getdeta();
        // fireman[a].payment();           // array ko hmlog iss trh se call krte hai
        // uper me function bnte hai to yha call krna pdega
    }
    return 0;
}