#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);    // yha pe koi statemen ho true ya false ye statement eak bar run krega jruru
    return 0;         // ek bar run krne ke bad condition ke anusar run krega 
}