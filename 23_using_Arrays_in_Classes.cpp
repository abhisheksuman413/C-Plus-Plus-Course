#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter = 0;

public:
    // void intcounter(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "enter the id of your item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price with id " << itemid[i] << "  is   " << itemprice[i] << endl;
    }
}
int main()
{
    shop papa;
    for (int a = 0; a <= 5; a++)
    {
        papa.setprice();
    }

    papa.displayprice();
    return 0;
}