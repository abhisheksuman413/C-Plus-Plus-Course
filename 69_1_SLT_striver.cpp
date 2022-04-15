#include<bits/stdc++.h>  /*isko add krne se sra chij add ho jta hai jse
                           jse ki string.h math .h sb ke sb ctrt+click krne 
                           se sra chij pta chl jta hai cp ke liye aacha hai but
                           interview ke liye nhi becouse ye ja time le leta hai
                           sare header file ko import krne me */ 


using namespace std; /*  yha std ka use krte hai because cin cout or bhut kuch 
                        //  ka use krne ke liye permission deta hai std  ya fir niche 
                        //  wale trika se use kr skta hai ye c++ ke sare function ko store 
                        //  krta hai isko comment out kr dege to cout me error dikhyega */

namespace abhi {
    int val = 50;
    int getval(){
        return val*10;
    }
}

 

int main()
{
    double val =75;
    /* agr using namespace std; nhi use krte hai to cout ke niche jase likhna pdega*/
    // std::cout<<val<<std::endl;
    cout<<val<<endl;      // yha 55.5  print krega  becouse yha stander std se val ko call kr rhe hai 

    cout<< abhi:: val <<endl;   /*yha 50 print hoga becouse name space abhi ke andr 
                                  jo decelar hoga usko access krege abhi double colon se (::)
                                  is liye yha val 50 print ho rha hai  */

    cout <<abhi::getval()<<endl;  // ye 500 print krega
    
    return 0;
}