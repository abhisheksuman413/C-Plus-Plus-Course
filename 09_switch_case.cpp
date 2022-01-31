#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch(age){

        case 18:
            cout<<"you are 18"<<endl;
            break;                          //agr beark use nhi krte hai to sara value print kr dega 
        
        case 32:
            cout<<"you are 32"<<endl;
            
            break;
                                            //case hmlog kitna v dal skte hai 
        case 12:
            cout<<"you are 12"<<endl;
            break;
        
        default:                        //agr koi case match nhi kiya to ye cout print kr dega 
        cout<<"no specal case"<<endl;

    }

    cout<<"done with switch case"<<endl;       //break ke bad yha se program read krna start hoga
    return 0;
}