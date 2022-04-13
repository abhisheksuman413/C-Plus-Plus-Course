#include <iostream>
using namespace std;

template<class t>
class abhi{
    public:
    t data;
    abhi(t a){
        data=a;
    }

    void display();    // isko bhr define kiye hai or uska syntax niche hai 

};

template<class t>
void abhi<t> :: display(){
        cout<<data<<endl;
    }

int main()
{
    abhi<int>h(55);  // yha koi v datatype use kr skte hai 
    cout<<h.data<<endl;
    h.display();

    return 0;
}