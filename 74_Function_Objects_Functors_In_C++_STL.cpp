#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;

// void display(int arr[] &su){

// }

int main()
{
    /*Function Object :- Function wrapped in a class
    so that it available like object */

    int arr[] ={ 1,55,7,85,65,45,3};
    for(int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }

    sort(arr, arr+5);   // arr ka matlb hai arr ko short krega or arr+5 ka matlb hai 5 element hi tak hi krega 
                        // isliye 45 or 3 ko sort nhi kiya 
    for(int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }

    sort(arr, arr+5, greater<int>());   /*arr ka matlb hai arr ko short krega or arr+5 ka 
                                          matlb hai 5 element hi tak hi krega or greater<int>() ka
                                          matlab hai bda number ko phle or fir chota element 
                                          sort krega isi ko function object bolte hai */ 
    /*  greater<int>()  >>> isi ko functional object (isko functor v bolte hai) bolte hai */

    for(int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}