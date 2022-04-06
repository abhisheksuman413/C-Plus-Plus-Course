#include <iostream>
using namespace std;

int main()
{
    int a =4;
    int *ptr =&a;

    cout<<"the value of a is "<<*(ptr)<<endl;    //  *(ptr) iska matlb hai d refference kr rhe hai ptr ko ya adress se value niklna
                                                // kis adress ke aage agr * lga dete hai to uska value nikl jta hai

    
    // New operator /  keyword
    int *p= new int(55);  // yha pe hamlog dynamically memory bna rhe hai

    cout<<"the value at adress p is "<<*p<<endl;


    int *arr = new int[3];     //array ke liye yha hmlog bracket me change kiye hai yha hmlog square bracket use kiye hai 

    arr[0]=11;
    // arr[1]=21;   >>> iske niche jse likhe hai ase v likh skte hai 
    *(arr+1)=21;    // iska mtlb hua jo adress allot hua  hai usme 1 add kr do 
    arr[2]=31;

    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    //delete operator


    int *ar = new int[7];   

    ar[0]=1;
    ar[1]=201;
    ar[2]=311;
    ar[3]=41;
    ar[4]=51;
    ar[5]=61;
    ar[6]=71;

    // free (ar); delete ke jgh pe free ko use kr skte hai iska syntax yhi hai 
    delete [] ar;       // dynamacilly alloted memory ko free krne ke liye syntax
                       // iske bad garbage value dega sara ar me kuy ki memory free ho gya hai 
                      // isko kewl dynamacilly attoted memory ko free krne ke liye use krte hai

    cout<<"the value of arr[0] is "<<ar[0]<<endl;
    cout<<"the value of arr[1] is "<<ar[1]<<endl;
    cout<<"the value of arr[2] is "<<ar[2]<<endl;
    cout<<"the value of arr[2] is "<<ar[3]<<endl;
    cout<<"the value of arr[2] is "<<ar[4]<<endl;
    cout<<"the value of arr[2] is "<<ar[5]<<endl;
    cout<<"the value of arr[2] is "<<ar[6]<<endl;



    int *g= new int(55);  

    delete g;  // yha iske run krne bad g  ke adress me v grabage value dega 

    cout<<"the value at adress g is "<<*g<<endl;



    return 0;

}
