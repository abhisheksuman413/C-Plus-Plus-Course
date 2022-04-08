#include <iostream>
using namespace std;

class shopitem
{

    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The code no of item is" << id << endl;
        cout << "The price of item code " << id << "   is  " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopitem *abhi = new shopitem[size]; // yha hmne arrey bnya

    shopitem *abhi2 = abhi; /* yha ham isko is liye bna rhe hai kuy ki jb ham
                             niche for loop chla rhe hai to abhi++ ki wjh se
                            size ke bhr chle ja rhe hai or ham agr getdata v wahi start
                            kre to grabage value dega isliye hamlog *abhi2=abhi kiye is se
                            abhi to 3 ke bhr rhega but abhi2 to 0 se satart hoga
                            ya fir niche comment wala method use kr skte hai
                         */
    int i, q;
    float p;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the code no of item : " << i + 1 << endl;
        cin >> q;
        cout << "Enter the price of that item : " << i + 1 << endl;
        cin >> p;
        abhi->setdata(q, p);
        abhi++;
    } 

    for (i = 0; i < size; i++)
    {
        cout << "item no :" << i + 1 << endl;
        abhi2->getdata();
        abhi2++;
    }

    return 0;
}

/*
>>>>>>>> uper wale ko ase v use kr skte hai <<<<<<<
  int size =3;
    shopitem *abhi= new shopitem[size];
    // shopitem *abhi2=abhi;
    int i,p,q;
    for(i=0; i<size; i++){
        cout<<"Enter the code no of item"<<i+1<<endl;
        cin>>q;
        cout<<"Enter the price of that item"<<i+1<<endl;
        cin>>p;
        abhi->setdata(q,p);
        abhi++;
    }
    abhi--;
    for(i=size;i>0;i--){
        cout<<"item no :"<<i+1<<endl;
        abhi->getdata();
        abhi--;
    }


*/
