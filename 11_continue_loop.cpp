#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<50; i++){

        
        if(i==5){
            continue;        // continue ka matlb hua ki ye yha pr 5 ko skip kr dega 
        }                    // yha pe 5 ko skip kr ke niche wale code ko run krna start kr dega 
        cout<<i<<endl;
    }
    return 0;
}