#include <bits/stdc++.h>
using namespace std;

// template <class t, class t1>
// void display(map<t,t1> &su)
// {
//     map<string, int>::iterator jii;
//     for (jii = su.begin(); jii != su.end(); jii++)
//     {
//         cout << (*jii).first << "  " << (*jii).second << endl;  /* *jii se hmlog ko iteratror ke andr ka value
//                                                                     milta hai or (*jii).first se hmlog ko
//                                                                     iterator jis pe point kr rha hai uska
//                                                                     first element milega or (*jii).second se
//                                                                     dusra element milega ase aage krte jyege
//                                                                     or hoga to */

//     }
//     cout<<"the size is :- "<<su.size()<<endl;
//     cout<<"   "<<endl;
// }

// uper wale display() function ko niche wale trika se v likh skte hai

void display(map<string, int> &suu)
{
    for (auto it : suu)
    {
        cout << it.first << "  " << it.second << endl;
    }
    cout << "the size is :- " << suu.size() << endl;
    cout << endl;
}

int main()
{

    // key value

    // nitu- >55
    // dhananjay->65
    // abhi->45
    // raj -> 87
    // hima ->35

    cout << "ABHI1 DISPLAY HOGA" << endl;
    map<string, int> abhi1; /*map jo hai ye v unique element leta hai or shorted form me data store krta hai*/
    abhi1["nitu"] = 55;
    abhi1["dhananjay"] = 65;
    abhi1["abhi"] = 45;
    abhi1["raj"] = 87;
    abhi1["hima"] = 35;
    abhi1.emplace("pank", 65); // iss trh se v data insert kr ste hai

    display(abhi1);
    abhi1["abhi"] = 15; // kuy ki yha abhi ka value update kr de rhe hai isliye abhi 15 hi print hoga
    // abhi1["hima"].emplace(25); // iss trh se v data inser kr ste hai    >> yha hima v update nhi hoga
    display(abhi1);

    // Erase funcationality

    abhi1.erase("hima"); // ye hima ko delete kr dega
    display(abhi1);

    abhi1.erase(abhi1.begin()); // ye map ke first element ko delete kr dega
    display(abhi1);

    map<string, int>::iterator it;
    it = abhi1.begin();
    ++it;
    ++it;

    abhi1.erase(abhi1.begin(), it); // yha MAP me jha se jha tak erase krna hai wo iterator dalege last wala element enclude nhi hoga{ [)  }
    display(abhi1);
    display(abhi1);

    abhi1.clear(); // ye pura map clear kr dega
    display(abhi1);

    map<string, int> abhi2;
    abhi2["nitu"] = 55;
    abhi2["dhananjay"] = 65;
    abhi2["abhi"] = 45;
    abhi2["raj"] = 87;
    abhi2["hima"] = 35;
    display(abhi2);
    abhi2["abhi"] = 15;

    display(abhi2);

    auto ct = abhi2.find("hima");    // ye iterator wha pe point krega jha pe "hima" element hoga
    auto ct1 = abhi2.find("simran"); // agr "simran" element map me nhi hoga to ye iterator abhi2.end() pe point krege yani map ke just bhr

    cout << abhi2.count("hima") << endl; // kitne hima hai wo cheack krne ke liye

    if (abhi2.empty()) // map empty hai ya nhi uske liye ye kam aat hai
    {
        cout << "yes this is empty map" << endl;
    }
    else
    {
        cout << "map is not empty" << endl;
    }

    abhi2.clear();

    if (abhi2.empty())
    {
        cout << "yes this is empty map" << endl;
    }
    else
    {
        cout << "map is not empty" << endl;
    }

    unordered_map<int, int> abhi3;
    /*sara function map ka use hoga but*/
    /* unordered map same hota hai map se but element shorting oredr me nhi hota hai
                                 isme v unique element hi store hota hai */

    //>> pair of unorderd map is not possible

    multimap<string, int> abhi5;
    // function sare same hoga 
    // jase set or multiset the wase hi map or multimap hai
    /* ye map ke trh hi hota hai isme unique element nhi hote hai but
       shorted me hote hai*/
    // abhi5->first="abhi";
    // abhi4["abhi"] = 15;
    // abhi4["abhi"] = 25;
    abhi5.insert(pair<string, int>("yyyy", 6)); // is trh se value insert lete hai multi map me 
    return 0;
}