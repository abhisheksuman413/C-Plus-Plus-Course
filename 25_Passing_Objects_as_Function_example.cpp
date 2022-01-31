#include <iostream>
using namespace std;

class time
{
    int minute;
    int hour;

public:
    void gettime(int h, int m)
    {
        hour = h;
        minute = m;
    }

    void totaltime(time h1, time m1)
    {
        minute = h1.minute + m1.minute;
        hour = minute / 60;
        minute = minute % 60;
        hour = h1.hour + m1.hour + hour;
    }
    void print()
    {
        cout << "the time is ; " << hour << "  and " << minute << endl;
    }
};

int main()
{
    time o1, o2, o3;
    o1.gettime(2, 45);
    o1.print();

    o2.gettime(3, 30);
    o2.print();

    o3.totaltime(o1, o2);
    o3.print();

    return 0;
}