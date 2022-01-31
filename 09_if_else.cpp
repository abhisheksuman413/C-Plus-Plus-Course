#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell me your age : "<<endl;
    cin>>age;
    if((age<19)&&(age>0)){

        cout<<"you connot come to my party"<<endl;

    }
    else if(age==19){

        cout<<"you get baby pass"<<endl;

    }
    else if(age<1){

        cout<<"aapka av janm nahi hua hai"<<endl;
    }
    else{

        cout<<"you come to party"<<endl;
    }   