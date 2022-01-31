#include <iostream>
using namespace std;

class x 
{
    int a, b ;
    public:
    
    x(int, int);       // constructor declaration 

    void print()
    {
        cout<<"your  no is "<<a<<"  +  "<<b<<"   i  "<< endl;
    
    }
};
x :: x(int x , int y)    // << isko Parameterize constructor bolte hai 
{                        // << isme argument niche de rhe hai 
    a = x;
    b = y;

}

int main()
{
    x p(5, 56);        // implicit call
    p.print();

    x q = x(445,1231);  // explicit call 
    q.print();
    return 0;
}