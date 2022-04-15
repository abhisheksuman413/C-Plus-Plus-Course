#include <iostream>
using namespace std;

void func(int a){
    cout<<"i am first func : "<<a<<endl;
}

template<class t>
void func(t a){
    cout<<"this is templateise function : "<<a<<endl;
}

int main()
{

    func(3); /* exact match take heighest priority kuy ki yha hamlog integer vej rhe the 
                is liye >>> i am first fanc <<< call hua kuy ki exact match kiya    */

    func("abhishek");   /*  yha exact match nhi kiya kuy ki yha hmlog string vej rhe hai
                            iss liye yha pe >>> I am templatesid function << call hua  
                            isi ko overloding template function bolte      */
    return 0;
}