#include <iostream>
using namespace std;

float moneyrecived( int currentmoney, float factor = 1.04){
    return currentmoney*factor;
}

/*int strlen(const char *p){
  iss function value change nhi hota hai kv v
}*/
int main()
{
    int money = 1000;
    cout<<"if you have "<<money<<" then you get  :-"<<moneyrecived(money)<<  ":-after 1 year"<<endl;
    cout<<"if you are vip "<<money<<" then you get   :-"<<moneyrecived(money, 1.1)<<  ":-after 1 year"<<endl;

    return 0;
}