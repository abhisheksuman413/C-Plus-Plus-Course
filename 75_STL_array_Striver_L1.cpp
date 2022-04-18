#include <bits/stdc++.h>
using namespace std;

// array<int , 5 >arr;    -->>> agr isko yha likhte hai to sara value zero le lega

/*
max size of 10^7  -->> int ,double char

int arr[10000000];
 c++ me hamlog int data type ka array max 10^7 size ka  bna skte hai goblei

 bool arr[100000000];
 c++ me hamlog boolin data type ka array max 10^8 size ka  bna skte hai goblei
*/
int main()
{
/*
max size of 10^6  -->> int ,double char

int arr[1000000];
 c++ me hamlog int data type ka array max 10^6 size ka  bna skte hai int main ke niche

 bool arr[10000000]; 
 c++ me hamlog boolin data type ka array max 10^7 size ka  bna skte hai int main ke niche
*/

    // int arr[100]     >>>>>  Ye 100 size ka 100 hai

    array<int, 5> abhi1; /*{?,?,?,?,?} agr yha array me koi value nhi dete hai to
                           grabage value le legabut agr isko int main ke uper define
                           krte hai to sara value zero le lega */
    for (int i = 0; i < 5; i++)
    {
        cout << abhi1[i] << " ";
    }
    cout << endl;

    array<int, 5> abhi2 = {1, 2, 3}; /*-->{1,2,3,0,0}   agr array me eak v value ko assine kr dege to
                                                           baki empty value ko zero assine kr leta hai */
    for (int i = 0; i < 5; i++)
    {
        cout << abhi2[i] << " ";
    }
    cout << endl;

    array<int, 5> abhi3 = {0}; /* agr eak v element ko zero v assine kr dete hai to baki ka element
                                  zero le lega >>> agr zero index ko assine kr dete hai to baki
                                  element zero le leta hai */
    for (int i = 0; i < 5; i++)
    {
        cout << abhi3[i] << " ";
    }
    cout << endl;

    array<int, 5> abhi4;
    abhi4.fill(5); /*{5,5,5,5,5}  ye array ke sare element ko 5 kr dega jo value fill() function me
                       dalege wahi value sare array me fill kr dega */

    for (int i = 0; i < 5; i++)
    {
        cout << abhi4[i] << " ";
    }
    cout << endl;

    array<int, 5> abhi5 = {1, 5, 6, 4, 7};
    cout << abhi5.at(3) << endl; //  {4} at function se us point ka value pta chlta hai

    for (int i = 0; i < 5; i++)
    {
        cout << abhi5.at(i) << "  "; //{1,5,6,4,7}
    }
    cout << endl;

    /*

     array<int , 5 >abhi4={11,1,2,32,13}

       ITERATORS

    >>begin(); >>> begin point on starting point yha 11 pe point krega
    >>end();  >>> ye last wale element ke bad wale pe point krega yha ye 13 ke bad wale pe point krega
    >>rbegin(); >>> ye last wale element pe point krega yha ye 13 pe point krega
    >>rend();  >>> ye start wale element ke phle point krega yha ye 11 ke phle point krega

    >>>>>>  valuable point of iterator <<<<<<

    >> rbegin ke sath rend ko hi use krna hoga
    >> begin ke sath end ko  use krna hoga
    >> rebegin ke sath begin ya end ko use nhi kr skte
    >> rend ke sath begin ya end ko use nhi kr skte
    >> begihn ke sath rbegin ya rend ko use nhi kr skte
    >> end ke sath rbegin ya rend ko use nhi kr skte

    */

    array<int, 5> abhi6 = {1, 55, 45, 65, 3};
    for (auto it = abhi6.begin(); it != abhi6.end(); it++)
    {
        cout << *it << " "; //{1,55,45,65,3}
    }
    cout << endl;

    for (auto it = abhi6.rbegin(); it != abhi6.rend(); it++)
    // for (auto it = abhi6.rbegin(); it > abhi6.rend(); it++)
    {
        cout << *it << " "; /*{3,65,45,55,1}    // ye reverse kr ke print krega it++ pr hi kuy ki ye
                                                   rverse iterator hai isko it-- ka jrurat nhi hai*/
    }
    cout << endl;

    for (auto it = abhi6.end() - 1; it >= abhi6.begin(); it--)
    {
        cout << *it << " "; //{3,65,45,55,1}     // uper wala for loop or ye for loop same value dega
    }
    cout << endl;

    for (auto it : abhi6) /*ye auto detect kr leta hai kya hai or isme size dene ka
                            ja v jrurt nhi hai kuy ki ye front se end tak chlta hai
                            ye reverse nhi chlta hai   */
    {
        cout << it << " ";
    }
    cout << endl;

    string jii = "nitu Dhananjay";
    for (auto it : jii)
    {
        cout << it << " ";    /* ager yha pe cout me jii dal dete hai to "nitu Dhananjay" 13 bar print hoga 
                                 becouse yha loop size apna 13 deside kr le rha hai kuy ki "nitu Dhananjay"
                                 me 13 word hai */
    }
    cout << endl;
    
    //Size
    cout<<abhi6.size()<<endl;

    //front element
    cout<<abhi6.front()<<endl;      // abhi6.at(0);   >>>> alternative

    //backelement
    cout<<abhi6.back()<<endl;     // abhi6.at(abhi6.size()-1);  >>>>> alternative

    return 0;
}